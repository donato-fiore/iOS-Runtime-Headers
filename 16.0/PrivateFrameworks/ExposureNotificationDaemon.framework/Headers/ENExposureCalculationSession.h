// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSURECALCULATIONSESSION_H
#define ENEXPOSURECALCULATIONSESSION_H

@class NSNumber, ENExposureConfiguration;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface ENExposureCalculationSession : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    unsigned char _attenuationDurationThresholds;
    unsigned int _scanInstanceBufferSize;
    *? _exposureWindowMetadataBuffer;
    unsigned int _cachedExposureWindowMetadataCount;
    *? _scanInstanceBuffer;
    unsigned int _cachedScanInstanceCount;
}


@property (copy, nonatomic) NSNumber *advertisementSampleCountThreshold; // ivar: _advertisementSampleCountThreshold
@property (nonatomic) BOOL allowRecursiveReportType; // ivar: _allowRecursiveReportType
@property (copy, nonatomic) NSNumber *allowedRPIBroadcastDuration; // ivar: _allowedRPIBroadcastDuration
@property (nonatomic) BOOL cacheExposureInfo; // ivar: _cacheExposureInfo
@property (nonatomic) BOOL cacheExposureWindows; // ivar: _cacheExposureWindows
@property (readonly, nonatomic) NSUInteger cachedExposureInfoCount;
@property (readonly, nonatomic) NSUInteger cachedExposureWindowCount; // ivar: _cachedExposureWindowCount
@property (readonly, nonatomic) unsigned int droppedScanInstanceCount; // ivar: _droppedScanInstanceCount
@property (copy, nonatomic) ENExposureConfiguration *exposureConfiguration; // ivar: _exposureConfiguration


-(BOOL)_shouldMatchKey:(id)arg0 ;
-(id)attenuationDurationMapDataForExposureWindows:(id)arg0 ;
-(id)cachedExposuresDifferentialPrivacyRiskParameters;
-(id)exposureInfoForExposureWindows:(id)arg0 key:(id)arg1 ;
-(id)exposureInfoForMatchedAdvertisements:(id)arg0 key:(id)arg1 ;
-(id)exposureInfosForEachExposureWindow:(id)arg0 key:(id)arg1 ;
-(id)exposureWindowsForMatchedAdvertisements:(id)arg0 key:(id)arg1 ;
-(id)exposureWindowsForMatchedAdvertisements:(id)arg0 key:(id)arg1 options:(NSInteger)arg2 ;
-(id)filterAdvertisements:(id)arg0 fromKey:(id)arg1 ;
-(id)groupExposureWindowsByDay:(id)arg0 ;
-(id)groupExposureWindowsByInfectiousness:(id)arg0 ;
-(id)initWithAttenuationThreshold:(unsigned char)arg0 capacity:(unsigned int)arg1 ;
-(struct ? )scanInstanceFromAdvertisement:(id)arg0 key:(id)arg1 ;
-(unsigned char)weightedAttenuationValueForDurations:(*unsigned int)arg0 ;
-(void)dealloc;
-(void)enumerateCachedExposureInfo:(id)arg0 ;
// -(void)enumerateCachedExposureInfo:(id)arg0 inRange:(unk)arg1 withBatchSize:(struct _NSRange )arg2  ;
// -(void)enumerateCachedExposureInfo:(id)arg0 withBatchSize:(unk)arg1  ;
// -(void)enumerateCachedExposureWindows:(id)arg0 inRange:(unk)arg1 withBatchSize:(struct _NSRange )arg2  ;
// -(void)enumerateCachedExposureWindows:(id)arg0 inRange:(unk)arg1 withBatchSize:(struct _NSRange )arg2 options:(unsigned int)arg3  ;


@end


#endif