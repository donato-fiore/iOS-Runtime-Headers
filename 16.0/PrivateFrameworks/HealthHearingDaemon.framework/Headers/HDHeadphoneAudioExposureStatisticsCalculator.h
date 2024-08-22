// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEADPHONEAUDIOEXPOSURESTATISTICSCALCULATOR_H
#define HDHEADPHONEAUDIOEXPOSURESTATISTICSCALCULATOR_H

@class HDProfile, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDHeadphoneDoseMetadataStore.h"
#import "HDHeadphoneAudioExposureBucketCollection.h"

@interface HDHeadphoneAudioExposureStatisticsCalculator : NSObject {
    HDProfile *_profile;
    HDHeadphoneDoseMetadataStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_queue;
    HDHeadphoneAudioExposureBucketCollection *_memoryCache;
    NSMutableArray *_pendingSamples;
}


@property (readonly, nonatomic) BOOL needsRebuild; // ivar: _needsRebuild
@property (readonly, nonatomic, getter=isSetup) BOOL setup; // ivar: _setup
@property (copy, nonatomic) id *unitTesting_didUpdatePreviousSevenDayNotificationFireDate; // ivar: _unitTesting_didUpdatePreviousSevenDayNotificationFireDate


-(id)_initWithProfile:(id)arg0 keyValueStore:(id)arg1 daemonDidBecomeReadyHandler:(id)arg2 ;
-(id)_loadBucketsFromProfile:(id)arg0 needsRebuild:(*BOOL)arg1 error:(*id)arg2 ;
-(id)_loadCacheWithError:(*id)arg0 ;
-(id)_rebuildWithAssertion:(id)arg0 allowInitialQueriesToFail:(BOOL)arg1 resetDoseToZero:(BOOL)arg2 error:(*id)arg3 ;
-(id)_setupWithAssertion:(id)arg0 error:(*id)arg1 ;
-(id)_updateWithExposure:(id)arg0 replaying:(BOOL)arg1 assertion:(id)arg2 error:(*id)arg3 ;
-(id)_updateWithExposure:(id)arg0 replaying:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 keyValueStore:(id)arg1 ;
-(id)pruneWithNowDate:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)rebuildWithAssertion:(id)arg0 error:(*id)arg1 ;
-(id)unitTesting_pendingSamples;
-(id)unitTesting_snapshotBuckets;
-(id)updateWithExposure:(id)arg0 assertion:(id)arg1 error:(*id)arg2 ;
-(id)updateWithNotifications:(id)arg0 assertion:(id)arg1 error:(*id)arg2 ;
-(void)unitTesting_clearNeedsRebuild;


@end


#endif