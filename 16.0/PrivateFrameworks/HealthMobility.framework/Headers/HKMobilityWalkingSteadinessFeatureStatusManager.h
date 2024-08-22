// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSFEATURESTATUSMANAGER_H
#define HKMOBILITYWALKINGSTEADINESSFEATURESTATUSMANAGER_H

@class HKObserverSet, HKTaskServerProxyProvider, NSString;
@protocol HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable>

 {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    NSInteger _onboardingState;
    NSInteger _notificationState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFitnessTrackingEnabled;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)notificationStatusWithError:(*id)arg0 ;
-(id)onboardingStatusWithError:(*id)arg0 ;
-(id)remoteInterface;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)client_didUpdateFitnessTrackingEnabled:(BOOL)arg0 ;
-(void)client_didUpdateNotificationStatus:(id)arg0 ;
-(void)client_didUpdateOnboardingStatus:(id)arg0 ;
-(void)connectionInvalidated;
-(void)removeObserver:(id)arg0 ;
-(void)resetOnboarding;
-(void)setNotificationsEnabled:(BOOL)arg0 ;


@end


#endif