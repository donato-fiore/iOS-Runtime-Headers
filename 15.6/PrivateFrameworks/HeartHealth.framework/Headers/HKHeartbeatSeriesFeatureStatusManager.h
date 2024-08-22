// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEARTBEATSERIESFEATURESTATUSMANAGER_H
#define HKHEARTBEATSERIESFEATURESTATUSMANAGER_H

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSUserDefaults, NSString;
@protocol HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKHeartbeatSeriesFeatureStatusManager : NSObject <HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable>

 {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUserDefaults *_heartNotificationsUserDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)_synchronouslyStartObservingWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 heartNotificationsUserDefaults:(id)arg1 ;
-(id)remoteInterface;
-(void)_handleAutomaticProxyReconnection;
-(void)_notifyObserversForFailureToUpdateWithError:(id)arg0 ;
-(void)_notifyObserversForPredominantFeatureUpdate:(NSInteger)arg0 ;
-(void)_startObservingHeartNotificationsUserDefaults;
-(void)_startObservingWithActivationHandler:(id)arg0 ;
-(void)_updateAndNotifyAllObservers;
-(void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(id)arg0 ;
-(void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(NSInteger)arg0 ;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 activationHandler:(id)arg2 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif