// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDAEMONCONNECTION_H
#define AMSDAEMONCONNECTION_H

@class NSString, NSMutableArray, NSXPCConnection;
@protocol AMSDServiceBrokerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers; // ivar: _interruptionHandlers
@property (retain, nonatomic) NSXPCConnection *sharedConnection; // ivar: _sharedConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // ivar: _sharedConnectionAccessQueue
@property (readonly) Class superclass;


-(id)_connectionProxyWithAccessBlock:(id)arg0 ;
-(id)_serviceInterfaceForSelector:(SEL)arg0 ;
-(id)callService:(id)arg0 then:(id)arg1 ;
-(id)cookieServiceProxy;
-(id)cookieServiceProxySyncWithError:(*id)arg0 ;
-(id)deviceMessengerProxyWithDelegate:(id)arg0 ;
-(id)fraudReportServiceProxy;
-(id)init;
-(id)purchaseServiceProxy;
-(id)pushNotificationService;
-(id)securityServiceProxyWithDelegate:(id)arg0 ;
-(void)_connectionSyncProxyWithAccessBlock:(id)arg0 ;
-(void)_errorForwardingProxyForServiceProxy:(id)arg0 proxyReplyError:(id)arg1 interface:(id)arg2 proxyPromise:(id)arg3 ;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)_initializeConnection;
-(void)addInterruptionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif