// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSECURELOCATIONSMANAGER_H
#define SPSECURELOCATIONSMANAGER_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPSecureLocationsXPCProtocol, SPSecureLocationsClientXPCProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPSecureLocationsManager : NSObject <SPSecureLocationsXPCProtocol, SPSecureLocationsClientXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *locationUpdates; // ivar: _locationUpdates
@property (retain, nonatomic) NSObject<SPSecureLocationsXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(id)init;
-(void)fetchConfigFromServerWithCompletion:(id)arg0 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)isLocationPublishingDeviceWithCompletion:(id)arg0 ;
-(void)latestLocationFromCacheForId:(id)arg0 completion:(id)arg1 ;
-(void)performKeyRollWithCompletion:(id)arg0 ;
-(void)publishLocation:(id)arg0 completion:(id)arg1 ;
-(void)receivedLocationCommand:(id)arg0 completion:(id)arg1 ;
-(void)receivedLocationPayload:(id)arg0 completion:(id)arg1 ;
-(void)receivedUpdatedLocations:(id)arg0 ;
-(void)setLocationUpdateBlock:(id)arg0 ;
-(void)shareCurrentKeyWithId:(id)arg0 completion:(id)arg1 ;
-(void)shouldStartLocationMonitorWithCompletion:(id)arg0 ;
-(void)simulateFeatureDisabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)subscribeAndFetchLocationForIds:(id)arg0 clientApp:(id)arg1 completion:(id)arg2 ;
-(void)subscribeAndFetchLocationForIds:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)unsubscribeForId:(id)arg0 clientApp:(id)arg1 completion:(id)arg2 ;
-(void)unsubscribeForIds:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)updateLocationCacheWith:(id)arg0 completion:(id)arg1 ;


@end


#endif