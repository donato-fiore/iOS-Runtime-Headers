// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDSIGNINGCONTROLLER_H
#define AKAPPLEIDSIGNINGCONTROLLER_H

@class NSXPCListenerEndpoint, NSXPCConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationController.h"

@interface AKAppleIDSigningController : NSObject {
    os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
}


@property (retain, nonatomic) AKAppleIDAuthenticationController *authenticationController; // ivar: _authenticationController
@property (retain, nonatomic) NSString *initialURLKey; // ivar: _initialURLKey
@property (nonatomic) BOOL isProxy; // ivar: _isProxy
@property (nonatomic) BOOL shouldSendAbsintheHeader; // ivar: _shouldSendAbsintheHeader


-(id)_connection;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg0 ;
-(void)_additionalAbsintheHeadersForRequest:(id)arg0 completion:(id)arg1 ;
-(void)_additionalAttestationHeadersForRequest:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)absintheSignatureForData:(id)arg0 completion:(id)arg1 ;
-(void)attestationDataForRequest:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)signWithBAAHeaders:(id)arg0 completion:(id)arg1 ;
-(void)signaturesForData:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)signingHeadersForRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif