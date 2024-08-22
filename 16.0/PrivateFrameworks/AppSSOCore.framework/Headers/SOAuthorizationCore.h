// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOAUTHORIZATIONCORE_H
#define SOAUTHORIZATIONCORE_H

@class NSDictionary;
@protocol SOAuthorizationCoreDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SOClient.h"
#import "SOAuthorizationRequestParametersCore.h"

@interface SOAuthorizationCore : NSObject {
    SOClient *_client;
    SOAuthorizationRequestParametersCore *_requestParametersCore;
}


@property (retain, nonatomic) NSDictionary *authorizationOptions; // ivar: _authorizationOptions
@property (weak) NSObject<SOAuthorizationCoreDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // ivar: _delegateDispatchQueue
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction; // ivar: _enableUserInteraction
@property (retain) SOAuthorizationRequestParametersCore *requestParametersCore;


+(BOOL)_canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 useInternalExtensions:(BOOL)arg3 ;
+(BOOL)_doAKshouldProcessURL:(id)arg0 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 useInternalExtensions:(BOOL)arg3 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 useInternalExtensions:(BOOL)arg2 ;
+(void)isExtensionProcessWithAuditToken:(struct ? )arg0 completion:(id)arg1 ;
-(id)createSecKeysFromSecKeyProxyEndpoints:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)kerberosProfiles;
-(id)realms;
-(void)_addNoUserInterfaceToAuthorizationOptionsInRequestParameters;
-(void)_cancelAuthorization;
-(void)_finishAuthorizationWithCredential:(id)arg0 error:(id)arg1 ;
-(void)beginAuthorizationWithOperation:(id)arg0 url:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(void)beginAuthorizationWithParameters:(id)arg0 ;
-(void)beginAuthorizationWithParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationWithURL:(id)arg0 httpHeaders:(id)arg1 httpBody:(id)arg2 ;
-(void)cancelAuthorization;
-(void)debugHintsWithCompletion:(id)arg0 ;
-(void)finishAuthorizationWithCompletion:(id)arg0 ;
-(void)getAuthorizationHintsWithURL:(id)arg0 responseCode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)performBlockOnDelegateQueue:(id)arg0 ;


@end


#endif