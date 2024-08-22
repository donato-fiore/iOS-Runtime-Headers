// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENADVERTISEMENTDATABASE_H
#define ENADVERTISEMENTDATABASE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "ENAdvertisementSQLiteStore.h"
#import "ENQueryFilter.h"

@interface ENAdvertisementDatabase : NSObject {
    *? _advertisementInsertionCache;
    unsigned int _advertisementInsertionCacheCount;
    unsigned int _advertisementInsertionIndex;
    BOOL _advertisementInsertionCacheOverflowed;
    NSUInteger _previousStoreFullAlertTimestamp;
    NSString *_databaseFolderPath;
    ENAdvertisementSQLiteStore *_centralStore;
    ENAdvertisementSQLiteStore *_temporaryStore;
    id *_errorMetricReporter;
}


@property (readonly, nonatomic) NSUInteger currentStoreType; // ivar: _currentStoreType
@property (readonly, nonatomic) NSUInteger droppedAdvertisementCount; // ivar: _droppedAdvertisementCount
@property (retain, nonatomic) ENQueryFilter *inlineQueryFilter; // ivar: _inlineQueryFilter
@property (nonatomic) CGFloat storageFullAlertInterval; // ivar: _storageFullAlertInterval
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;
@property (readonly, nonatomic) BOOL temporaryStoresPresent;


+(BOOL)purgeAllStoresInPath:(id)arg0 ;
-(BOOL)cloneDatabaseTo:(id)arg0 ;
-(BOOL)flushCache;
-(BOOL)mergeStores:(id)arg0 ;
-(BOOL)mergeStoresFromFolderPath:(id)arg0 ;
-(BOOL)mergeTemporaryStores;
-(BOOL)openCentralStoreAndReturnError:(*id)arg0 ;
-(BOOL)openStoreAndReturnError:(*id)arg0 ;
-(BOOL)openTemporaryStore;
-(BOOL)purgeAdvertismentsOlderThan:(CGFloat)arg0 ;
-(BOOL)purgeAdvertismentsSeenBeforeDate:(id)arg0 ;
-(BOOL)purgeAllStoresInActiveDatabasePath;
-(BOOL)saveContactTracingAdvertisement:(id)arg0 ;
-(BOOL)switchToCentralStore;
-(id)advertisementsBufferMatchingDailyKeys:(id)arg0 attenuationThreshold:(unsigned char)arg1 timestampTolerance:(CGFloat)arg2 ;
-(id)beaconCountMetricsWithStartDate:(id)arg0 endDate:(id)arg1 windowDuration:(CGFloat)arg2 ;
-(id)createQuerySessionWithAttenuationThreshold:(unsigned char)arg0 queue:(id)arg1 error:(*id)arg2 ;
-(id)currentStore;
-(id)init;
-(id)initWithDatabaseFolderPath:(id)arg0 cacheCount:(NSUInteger)arg1 ;
-(id)initWithDatabaseFolderPath:(id)arg0 cacheCount:(NSUInteger)arg1 errorMetricReporter:(id)arg2 ;
-(id)matchingAdvertisementBufferForRPIBuffer:(id)arg0 exposureKeys:(id)arg1 ;
-(id)queryFilterWithBufferSize:(NSUInteger)arg0 hashCount:(NSUInteger)arg1 attenuationThreshold:(unsigned char)arg2 ;
-(unsigned int)cacheRecordCount;
-(void)closeAllStores;
-(void)dealloc;
-(void)displayStorageFullAlert;
-(void)reportErrorMetric:(unsigned int)arg0 ;
-(void)reportStoreError:(id)arg0 ;


@end


#endif