// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAURLSESSIONCONTEXT_H
#define AAURLSESSIONCONTEXT_H

@class AKAppleIDSession, NSString;
@protocol NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AAAbsintheSigner.h"
#import "AAAttestationSigner.h"
#import "AARemoteServer.h"

@interface AAURLSessionContext : NSObject <NSCoding, NSCopying, NSSecureCoding, NSURLSessionAppleIDContext>

 {
    AKAppleIDSession *_appleIDSession;
    os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
}


@property (retain, nonatomic) AAAbsintheSigner *absintheSigner; // ivar: _absintheSigner
@property (retain, nonatomic) AAAttestationSigner *attestationSigner; // ivar: _attestationSigner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AARemoteServer *remoteServer; // ivar: _remoteServer
@property (readonly, nonatomic) BOOL requiresSigning; // ivar: _requiresSigning
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_relevantHTTPStatusCodes;
-(id)_initRequiringSigning:(BOOL)arg0 appleIDSession:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initRequiringSigning:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg0 task:(id)arg1 getAppleIDHeadersForResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_additionalAbsintheHeadersForData:(id)arg0 completion:(id)arg1 ;
-(void)_additionalAttestationHeadersForData:(id)arg0 withValidity:(id)arg1 completion:(id)arg2 ;
-(void)_additionalHeadersForRequest:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif