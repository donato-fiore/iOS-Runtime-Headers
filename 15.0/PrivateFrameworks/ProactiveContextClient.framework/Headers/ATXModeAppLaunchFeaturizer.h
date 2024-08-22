// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEAPPLAUNCHFEATURIZER_H
#define ATXMODEAPPLAUNCHFEATURIZER_H

@class _PASSimpleCoalescingTimer, BMBiomeScheduler, BPSSink, NSString;
@protocol ATXModeFeaturizer, OS_dispatch_queue, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeAppLaunchFeaturizer : NSObject <ATXModeFeaturizer>

 {
    _PASSimpleCoalescingTimer *_cooldownTimer;
    _PASSimpleCoalescingTimer *_easeInTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}


@property (nonatomic) BOOL cooldownTimerIsEnabled; // ivar: _cooldownTimerIsEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL easeInTimerIsEnabled; // ivar: _easeInTimerIsEnabled
@property (readonly) NSUInteger hash;
@property NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(NSUInteger)expectedGenreId;
-(id)_latestAppLaunchBundleId;
-(id)_provideFeaturesWithBundleId:(id)arg0 ;
-(id)additionalAllowedBundleIds;
-(id)init;
-(id)provideFeatures;
-(id)registrationId;
-(int)modeFeatureType;
-(void)_actuallyEndMode;
-(void)_actuallyStartMode;
-(void)_processNewAppLaunchEvent:(id)arg0 ;
-(void)beginListening;
-(void)stopListening;


@end


#endif