// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCBPERIPHERALMANAGER_H
#define SPCBPERIPHERALMANAGER_H

@class NSString, FMQueueSynchronizer, FMXPCServiceDescription, FMXPCSession, NSMutableDictionary, FMTokenBucket;
@protocol SPCBPeripheralManagement, OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

#import <Foundation/Foundation.h>


@interface SPCBPeripheralManager : NSObject <SPCBPeripheralManagement>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableSystemWakes; // ivar: _enableSystemWakes
@property (nonatomic) BOOL forceUpdateCriteria; // ivar: _forceUpdateCriteria
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *peripheralsUpdatedCallback; // ivar: _peripheralsUpdatedCallback
@property (retain, nonatomic) NSObject<SPCBPeripheralManagementXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer; // ivar: _queueSynchronizer
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (retain, nonatomic) NSMutableDictionary *sessionMetadata; // ivar: _sessionMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) FMTokenBucket *tokenBucket; // ivar: _tokenBucket


+(id)remoteInterface;
-(CGFloat)timeIntervalToNextFireDateFromDate:(id)arg0 ;
-(id)_enforceRateLimit;
-(id)descriptionForVendorIdentifierList:(id)arg0 ;
-(id)init;
-(void)enableSystemWakesForUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)fetch;
-(void)handleDarwinNotificationNamed:(id)arg0 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)startSessionForUserIdentifier:(id)arg0 bundleId:(id)arg1 vendorIdentifierList:(id)arg2 completion:(id)arg3 ;
-(void)stopSessionForUserIdentifier:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
-(void)successfulConnectionForPeripheral:(id)arg0 leMAC:(id)arg1 ltk:(id)arg2 completion:(id)arg3 ;
-(void)timerFiredForActivity:(id)arg0 ;


@end


#endif