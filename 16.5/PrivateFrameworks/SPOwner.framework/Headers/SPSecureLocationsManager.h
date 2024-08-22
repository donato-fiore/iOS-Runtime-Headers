// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSECURELOCATIONSMANAGER_H
#define SPSECURELOCATIONSMANAGER_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPSecureLocationsClientXPCProtocol, SPSecureLocationsXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPSecureLocationsManager : NSObject <SPSecureLocationsClientXPCProtocol>



@property (copy, nonatomic) id *clearCacheUpdates; // ivar: _clearCacheUpdates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastUpdatedStewieState; // ivar: _lastUpdatedStewieState
@property (copy, nonatomic) id *locationUpdates; // ivar: _locationUpdates
@property (retain, nonatomic) NSObject<SPSecureLocationsXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (nonatomic) NSUInteger stewieRetryCount; // ivar: _stewieRetryCount
@property (copy, nonatomic) id *stewieUpdateBlock; // ivar: _stewieUpdateBlock
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(CGFloat)_decayedWaitIntervalForRetryCount:(NSUInteger)arg0 ;
-(id)init;
-(void)clearLocationsForFailedSubscriptions:(id)arg0 ;
-(void)currentStewieStateWithCompletion:(id)arg0 ;
-(void)fetchConfigFromServerWithCompletion:(id)arg0 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)isLocationPublishingDeviceWithCompletion:(id)arg0 ;
-(void)latestLocationFromCacheForId:(id)arg0 completion:(id)arg1 ;
-(void)performKeyRollWithCompletion:(id)arg0 ;
-(void)publishCurrentLocationToStewieWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)publishLocation:(id)arg0 completion:(id)arg1 ;
-(void)receivedLocationCommand:(id)arg0 completion:(id)arg1 ;
-(void)receivedLocationPayload:(id)arg0 completion:(id)arg1 ;
-(void)receivedUpdatedLocations:(id)arg0 ;
-(void)setLocationUpdateBlock:(id)arg0 ;
-(void)shareCurrentKeyWithId:(id)arg0 completion:(id)arg1 ;
-(void)shouldStartLocationMonitorWithCompletion:(id)arg0 ;
-(void)simulateFeatureDisabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)startMonitoringFailedSubscriptions:(id)arg0 ;
// -(void)startMonitoringStewieStateWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)stewiePublishStateWithCompletion:(id)arg0 ;
-(void)stewieServiceStateChanged:(NSInteger)arg0 ;
-(void)stopMonitoringStewieStateWithCompletion:(id)arg0 ;
-(void)subscribeAndFetchLocationForIds:(id)arg0 clientApp:(id)arg1 completion:(id)arg2 ;
-(void)subscribeAndFetchLocationForIds:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)triggerStewieProactiveNotification;
-(void)unsubscribeForId:(id)arg0 clientApp:(id)arg1 completion:(id)arg2 ;
-(void)unsubscribeForIds:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)updateLocationCacheWith:(id)arg0 completion:(id)arg1 ;


@end


#endif