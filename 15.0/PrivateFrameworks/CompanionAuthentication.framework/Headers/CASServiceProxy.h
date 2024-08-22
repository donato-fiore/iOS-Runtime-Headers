// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASSERVICEPROXY_H
#define CASSERVICEPROXY_H

@class NSXPCConnection, NSString;
@protocol CASServiceClientInterface, CASServiceServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CASServiceProxy : NSObject <CASServiceClientInterface, CASServiceServerInterface>

 {
    NSXPCConnection *_connection;
    uint8_t _activateCalledAtomic;
    BOOL _invalidateDone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceAcceptedNotificationHandler; // ivar: _deviceAcceptedNotificationHandler
@property (copy, nonatomic) id *deviceStartedAuthenticationHandler; // ivar: _deviceStartedAuthenticationHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *sessionFailedHandler; // ivar: _sessionFailedHandler
@property (copy, nonatomic) id *sessionFinishedHandler; // ivar: _sessionFinishedHandler
@property (readonly) Class superclass;


-(id)init;
-(void)_activated;
-(void)_fetchDaemonStatusWithCompletionHandler:(id)arg0 ;
-(void)_invalidated;
-(void)_noteConnectionInterrupted;
-(void)_startAuthenticationSessionWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)activate;
-(void)authenticationSessionDeviceAcceptedNotification:(id)arg0 ;
-(void)authenticationSessionDeviceStartedAuthentication:(id)arg0 ;
-(void)authenticationSessionDidFailWithError:(id)arg0 ;
-(void)authenticationSessionDidFinishWithResponse:(id)arg0 ;
-(void)fetchDaemonStatusWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)startAuthenticationSessionWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif