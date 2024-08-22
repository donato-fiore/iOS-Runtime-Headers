// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEARTBEATSERIESFEATURESTATUSMANAGER_H
#define HDHEARTBEATSERIESFEATURESTATUSMANAGER_H

@class HDProfile, NSUserDefaults, HKFeatureStatusManager, NSString;
@protocol HKFeatureStatusProvidingObserver, HDHeartbeatSeriesFeatureStatusManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHeartbeatSeriesFeatureStatusManager : NSObject <HKFeatureStatusProvidingObserver>

 {
    HDProfile *_profile;
    id<HDHeartbeatSeriesFeatureStatusManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_heartNotificationsUserDefaults;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClient:(id)arg0 ;
-(id)initWithProfile:(id)arg0 irregularRhythmNotificationsFeatureStatusManager:(id)arg1 heartNotificationsUserDefaults:(id)arg2 ;
-(id)predominantFeatureWithError:(*id)arg0 ;
-(void)_notifyDelegateOfCurrentState;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;
-(void)getPredominantFeatureWithCompletion:(id)arg0 ;
-(void)notifyDelegateOfCurrentState;
-(void)startObservingChangesWithDelegate:(id)arg0 ;
-(void)stopObservingChanges;


@end


#endif