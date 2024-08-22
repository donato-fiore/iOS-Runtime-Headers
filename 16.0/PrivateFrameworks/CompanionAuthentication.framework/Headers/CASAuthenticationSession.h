// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CASAUTHENTICATIONSESSION_H
#define CASAUTHENTICATIONSESSION_H

@class NSXPCConnection, NSString;
@protocol CASAuthenticationServiceClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CASAuthenticationRequest.h"

@interface CASAuthenticationSession : NSObject <CASAuthenticationServiceClientInterface>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_serviceConnection;
    BOOL _activateCalled;
    BOOL _invalidateDone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *deviceAcceptedNotificationHandler; // ivar: _deviceAcceptedNotificationHandler
@property (copy, nonatomic) id *deviceStartedAuthenticationHandler; // ivar: _deviceStartedAuthenticationHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CASAuthenticationRequest *request; // ivar: _request
@property (copy, nonatomic) id *sessionCompletionHandler; // ivar: _sessionCompletionHandler
@property (copy, nonatomic) id *sessionFailedHandler; // ivar: _sessionFailedHandler
@property (copy, nonatomic) id *sessionFinishedHandler; // ivar: _sessionFinishedHandler
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(void)authenticationSessionDeviceStartedAuthentication:(id)arg0 ;
-(void)authenticationSessionDeviceTappedNotification:(id)arg0 ;
-(void)authenticationSessionDidFailWithError:(id)arg0 ;
-(void)authenticationSessionDidFinishWithResponse:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif