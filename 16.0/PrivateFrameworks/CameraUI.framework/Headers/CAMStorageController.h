// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSTORAGECONTROLLER_H
#define CAMSTORAGECONTROLLER_H

@class NSByteCountFormatter, NSDate;
@protocol OS_dispatch_queue, CAMStorageControllerDelegate;

#import <Foundation/Foundation.h>

#import "CAMCaptureGraphConfiguration.h"

@interface CAMStorageController : NSObject

@property (readonly, nonatomic) NSByteCountFormatter *_byteFormatter; // ivar: __byteFormatter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue; // ivar: __cacheDeleteQueryQueue
@property (nonatomic, setter=_setCachedEstimatedSpace:) ? _cachedEstimatedSpace; // ivar: __cachedEstimatedSpace
@property (nonatomic) NSInteger _cachedLegacyMGDiskThreshold; // ivar: __cachedLegacyMGDiskThreshold
@property (nonatomic) NSInteger _cachedLowDiskThreshold; // ivar: __cachedLowDiskThreshold
@property (nonatomic) NSInteger _cachedVeryLowDiskThreshold; // ivar: __cachedVeryLowDiskThreshold
@property (nonatomic, setter=_setFastPurgeThreshold:) NSInteger _fastPurgeThreshold; // ivar: __fastPurgeThreshold
@property (retain, nonatomic) NSDate *_lastPurgeRequestUpdateTime; // ivar: __lastPurgeRequestUpdateTime
@property (nonatomic, setter=_setProResMinimumDiskUsageThreshold:) NSInteger _proResMinimumDiskUsageThreshold; // ivar: __proResMinimumDiskUsageThreshold
@property (nonatomic, setter=_setPurging:) BOOL _purging; // ivar: __purging
@property (nonatomic) *CacheDeleteToken _queryQueue_currentToken; // ivar: __queryQueue_currentToken
@property (nonatomic, setter=_setShouldCancelNextPurge:) BOOL _shouldCancelNextPurge; // ivar: __shouldCancelNextPurge
@property (readonly, nonatomic, getter=isCancelingPurge) BOOL cancelingPurge;
@property (weak, nonatomic) NSObject<CAMStorageControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration; // ivar: _graphConfiguration
@property (readonly, nonatomic) BOOL hasPurgeableResources;
@property (readonly, nonatomic, getter=isPurging) BOOL purging;


-(BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg0 allowPurging:(BOOL)arg1 ;
-(BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg0 allowPurging:(BOOL)arg1 verbose:(BOOL)arg2 ;
-(CGFloat)_availableRecordingTimeInMinutesForFreeBytes:(NSInteger)arg0 minimumDiskUsageThreshold:(NSInteger)arg1 bytesPerMinute:(NSInteger)arg2 ;
-(CGFloat)availableRecordingTimeInSecondsForGraphConfiguration:(id)arg0 ;
-(NSInteger)_absoluteMinimumBytesForMode:(NSInteger)arg0 ;
-(NSInteger)_fastPurgeThresholdForRequestType:(NSInteger)arg0 ;
-(NSInteger)_preferredMinimumBytesForConfiguration:(id)arg0 ;
-(NSInteger)_requestTypeFromNonZeroFastPurgeThreshold:(NSInteger)arg0 ;
-(NSInteger)_totalBytesInSystem;
-(NSInteger)_totalFreeBytes;
-(NSInteger)bytesPerMinuteForGraphConfiguration:(id)arg0 ;
-(NSInteger)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)arg0 ;
-(id)_cacheDeleteVolume;
-(id)_pathForStorageMountPoint;
-(id)_stringFromAvailableSpace:(struct ? )arg0 ;
-(id)_stringFromByteCount:(NSInteger)arg0 ;
-(id)init;
-(struct ? )_queryQueue_queryAvailableSpaceAndUpdateCachedEstimatesForBytesPerMinute:(NSInteger)arg0 minimumDiskUsageThreshold:(NSInteger)arg1 ;
-(void)_copyAndApplyByteStringFormattingFromDictionary:(id)arg0 toDictionary:(id)arg1 keys:(id)arg2 ;
-(void)_copyFromDictionary:(id)arg0 toDictionary:(id)arg1 keys:(id)arg2 ;
-(void)_legacyDiskSpaceDidBecomeLowNotification;
-(void)_loadFreeDiskThresholds;
-(void)_notifyDelegateOfPurgeCompletionAndUpdateContinuousPurgeWithForceStopWithReason:(id)arg0 analyticsEvent:(id)arg1 ;
-(void)_purgeFastPurgeableSpaceWithThreshold:(NSInteger)arg0 calledFromPurgeCompletion:(BOOL)arg1 forceStopReason:(id)arg2 analyticsEvent:(id)arg3 ;
-(void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg0 ;
-(void)_queryQueue_cancelCurrentPurge;
-(void)_queryQueue_purgeFastPurgeableResourcesWithThreshold:(NSInteger)arg0 analyticsEvent:(id)arg1 ;
-(void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(NSInteger)arg0 preferredFreeBytes:(NSInteger)arg1 ;
-(void)_statMountPoint:(struct statfs *)arg0 ;
-(void)_updateAvailablePurgeableSpaceAsync;
-(void)_updatePurgeRequestStateForConfiguration:(id)arg0 totalFreeBytes:(NSInteger)arg1 ;
-(void)cancelPurge;
-(void)purgeFastPurgeableSpaceWithRequestType:(NSInteger)arg0 ;
-(void)reportLowDiskEventWithIdentifier:(id)arg0 ;


@end


#endif