// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDAEMONCONNECTION_H
#define AMSDAEMONCONNECTION_H

@class NSMutableSet, NSString, NSMutableArray, NSXPCConnection;
@protocol AMSDServiceBrokerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>



@property (readonly, nonatomic) NSMutableSet *activePromises; // ivar: _activePromises
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers; // ivar: _interruptionHandlers
@property (retain, nonatomic) NSXPCConnection *sharedConnection; // ivar: _sharedConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // ivar: _sharedConnectionAccessQueue
@property (readonly) Class superclass;


-(id)_connectionProxyForAsync:(BOOL)arg0 accessBlock:(id)arg1 ;
-(id)callService:(id)arg0 then:(id)arg1 ;
-(id)cookieServiceProxy;
-(id)deviceMessengerProxyWithDelegate:(id)arg0 ;
-(id)fraudReportServiceProxy;
-(id)init;
-(id)purchaseServiceProxy;
-(id)pushNotificationService;
-(id)securityServiceProxyWithDelegate:(id)arg0 ;
-(void)_checkInPromise:(id)arg0 ;
-(void)_checkOutPromise:(id)arg0 ;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)addInterruptionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif