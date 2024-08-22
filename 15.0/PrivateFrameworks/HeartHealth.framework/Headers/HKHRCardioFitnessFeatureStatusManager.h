// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHRCARDIOFITNESSFEATURESTATUSMANAGER_H
#define HKHRCARDIOFITNESSFEATURESTATUSMANAGER_H

@class HKObserverSet, HKProxyProvider, NSString;
@protocol HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessFeatureStatusManager : NSObject <HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable>

 {
    HKObserverSet *_observers;
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_synchronouslyStartObservingWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithProxyProvider:(id)arg0 ;
-(id)notificationStatusWithError:(*id)arg0 ;
-(id)onboardingStatusWithError:(*id)arg0 ;
-(id)remoteInterface;
-(void)_handleAutomaticProxyReconnection;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)client_didUpdateNotificationStatus:(id)arg0 ;
-(void)client_didUpdateOnboardingStatus:(id)arg0 ;
-(void)connectionInvalidated;
-(void)removeObserver:(id)arg0 ;
-(void)resetOnboarding;
-(void)setNotificationsEnabled:(BOOL)arg0 ;


@end


#endif