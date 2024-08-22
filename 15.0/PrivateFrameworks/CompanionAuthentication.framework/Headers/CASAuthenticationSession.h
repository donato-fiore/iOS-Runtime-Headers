// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASAUTHENTICATIONSESSION_H
#define CASAUTHENTICATIONSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CASServiceProxy.h"
#import "CASAuthenticationRequest.h"

@interface CASAuthenticationSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CASServiceProxy *_service;
    BOOL _invalidateDone;
}


@property (copy, nonatomic) id *deviceAcceptedNotificationHandler; // ivar: _deviceAcceptedNotificationHandler
@property (copy, nonatomic) id *deviceStartedAuthenticationHandler; // ivar: _deviceStartedAuthenticationHandler
@property (readonly, nonatomic) CASAuthenticationRequest *request; // ivar: _request
@property (copy, nonatomic) id *sessionFailedHandler; // ivar: _sessionFailedHandler
@property (copy, nonatomic) id *sessionFinishedHandler; // ivar: _sessionFinishedHandler


-(id)initWithRequest:(id)arg0 ;
-(void)_activated;
-(void)_invalidated;
-(void)_notifyDeviceAcceptedNotification:(id)arg0 ;
-(void)_notifyDeviceStartedAuthentication:(id)arg0 ;
-(void)_sessionFailedWithError:(id)arg0 ;
-(void)_sessionFinishedWithResponse:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif