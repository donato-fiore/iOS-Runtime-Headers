// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPDATACACHECONTROLLER_H
#define HLPDATACACHECONTROLLER_H

@class NSString, NSMutableArray, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HLPDataCacheController : NSObject {
    NSObject<OS_dispatch_queue> *_dataCacheSerialQueue;
    NSInteger _dataType;
}


@property (nonatomic) BOOL backgroundOriginUpdate; // ivar: _backgroundOriginUpdate
@property (retain, nonatomic) NSString *cacheDirectory; // ivar: _cacheDirectory
@property (nonatomic) NSUInteger cacheSize; // ivar: _cacheSize
@property (retain, nonatomic) NSMutableArray *dataCacheArray; // ivar: _dataCacheArray
@property (nonatomic) BOOL dataCacheDirty; // ivar: _dataCacheDirty
@property (retain, nonatomic) NSMutableDictionary *dataCacheMap; // ivar: _dataCacheMap
@property (nonatomic) float defaultPriority; // ivar: _defaultPriority
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSUInteger maxDataCacheSize; // ivar: _maxDataCacheSize
@property (retain, nonatomic) NSMutableArray *originFetchItems; // ivar: _originFetchItems
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedInstance;
+(void)setAppGroupIdentifier:(id)arg0 ;
-(BOOL)cacheValidForIdentifier:(id)arg0 path:(id)arg1 ;
-(BOOL)isURLValid:(id)arg0 ;
-(id)cacheFileURLForDataCache:(id)arg0 ;
-(id)cacheFileURLForIdentifier:(id)arg0 ;
-(id)dataCacheForIdentifier:(id)arg0 ;
-(id)dataCacheForPath:(id)arg0 ;
-(id)formattedDataForPath:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(id)formattedDataForRequest:(id)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(id)formattedDataWithData:(id)arg0 ;
-(id)formattedDataWithFileURL:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 directoryName:(id)arg1 maxCacheSize:(NSUInteger)arg2 URLSessionDataType:(NSInteger)arg3 ;
-(id)newDataCache;
-(id)saveFileURL:(id)arg0 identifier:(id)arg1 fileSize:(NSUInteger)arg2 lastModified:(id)arg3 dataCache:(id)arg4 ;
-(void)addDataCache:(id)arg0 ;
-(void)cancelAllOriginSessionItems;
-(void)commonInit;
-(void)createCacheDirectory;
-(void)dealloc;
-(void)formattedDataWithFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)reloadDataCache;
-(void)removeAllDataCache;
-(void)removeCacheForIdentifier:(id)arg0 ;
-(void)removeDataCache:(id)arg0 ;
-(void)removeDataCache:(id)arg0 updateCache:(BOOL)arg1 ;
-(void)syncCacheImmediately;
-(void)updateCache;
-(void)updateCacheDelay;


@end


#endif