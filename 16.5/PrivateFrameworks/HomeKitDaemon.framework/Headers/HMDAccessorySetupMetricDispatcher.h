// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETUPMETRICDISPATCHER_H
#define HMDACCESSORYSETUPMETRICDISPATCHER_H

@class HMFObject, HMFTimer, NSString;
@protocol HMFTimerDelegate, HMFLogging, HMEEventConsumer, HMMLogEventSubmitting, HMFCancellable, HMDDeviceSetupTrackingInfo;


#import "HMDHomeManager.h"
#import "HMDHome.h"

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFTimerDelegate, HMFLogging, HMEEventConsumer>

 {
    os_unfair_lock_s _lock;
    BOOL _submitted;
    HMFTimer *_timer;
    id<HMMLogEventSubmitting> *_dispatcher;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    id<HMFCancellable> *_remoteEventRouterAssertion;
}


@property (readonly) NSUInteger accessoryRemovedTime; // ivar: _accessoryRemovedTime
@property (readonly) NSUInteger addAccessoryFinishTime; // ivar: _addAccessoryFinishTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger firstSettingTime; // ivar: _firstSettingTime
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger languageSettingTime; // ivar: _languageSettingTime
@property (readonly) BOOL submitted;
@property (readonly) Class superclass;
@property (readonly) NSObject<HMDDeviceSetupTrackingInfo> *trackingInfo; // ivar: _trackingInfo


+(id)logCategory;
-(id)initWithTrackingInfo:(id)arg0 homeManager:(id)arg1 ;
-(id)initWithTrackingInfo:(id)arg0 homeManager:(id)arg1 logEventDispatcher:(id)arg2 timerFactory:(id)arg3 ;
-(id)logIdentifier;
-(void)addHome:(id)arg0 ;
-(void)addRemoteEventRouterAssertion:(id)arg0 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)markAccessoryAddCompleted;
-(void)markAccessoryRemoved;
-(void)markFirstSettingObserved;
-(void)markLanguageSettingObserved;
-(void)submit;
-(void)timerDidFire:(id)arg0 ;


@end


#endif