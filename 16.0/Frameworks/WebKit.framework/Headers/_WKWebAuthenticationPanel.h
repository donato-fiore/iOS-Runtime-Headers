// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKWEBAUTHENTICATIONPANEL_H
#define _WKWEBAUTHENTICATIONPANEL_H

@class NSString, NSSet;
@protocol WKObject, _WKWebAuthenticationPanelDelegate;

#import <Foundation/Foundation.h>


@interface _WKWebAuthenticationPanel : NSObject <WKObject>

 {
    ObjectStorage<API::WebAuthenticationPanel> _panel;
    WeakPtr<WebKit::WebAuthenticationPanelClient, WTF::EmptyCounter> _client;
    RetainPtr<NSMutableSet> _transports;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_WKWebAuthenticationPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *relyingPartyID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *transports;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, copy, nonatomic) NSString *userName;


+(BOOL)isUserVerifyingPlatformAuthenticatorAvailable;
+(id)encodeGetAssertionCommandWithClientDataHash:(id)arg0 options:(id)arg1 userVerificationAvailability:(NSInteger)arg2 ;
+(id)encodeGetAssertionCommandWithClientDataJSON:(id)arg0 options:(id)arg1 userVerificationAvailability:(NSInteger)arg2 ;
+(id)encodeMakeCredentialCommandWithClientDataHash:(id)arg0 options:(id)arg1 userVerificationAvailability:(NSInteger)arg2 ;
+(id)encodeMakeCredentialCommandWithClientDataJSON:(id)arg0 options:(id)arg1 userVerificationAvailability:(NSInteger)arg2 ;
+(id)exportLocalAuthenticatorCredentialWithGroupAndID:(id)arg0 credential:(id)arg1 error:(*id)arg2 ;
+(id)exportLocalAuthenticatorCredentialWithID:(id)arg0 error:(*id)arg1 ;
+(id)getAllLocalAuthenticatorCredentials;
+(id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)arg0 ;
+(id)getAllLocalAuthenticatorCredentialsWithCredentialID:(id)arg0 ;
+(id)getAllLocalAuthenticatorCredentialsWithCredentialIDAndAccessGroup:(id)arg0 credentialID:(id)arg1 ;
+(id)getAllLocalAuthenticatorCredentialsWithRPID:(id)arg0 ;
+(id)getAllLocalAuthenticatorCredentialsWithRPIDAndAccessGroup:(id)arg0 rpID:(id)arg1 ;
+(id)getClientDataJSONForAuthenticationType:(NSInteger)arg0 challenge:(id)arg1 origin:(id)arg2 ;
+(id)importLocalAuthenticatorCredential:(id)arg0 error:(*id)arg1 ;
+(id)importLocalAuthenticatorWithAccessGroup:(id)arg0 credential:(id)arg1 error:(*id)arg2 ;
+(struct PublicKeyCredentialCreationOptions )convertToCoreCreationOptionsWithOptions:(id)arg0 ;
+(struct PublicKeyCredentialRequestOptions )convertToCoreRequestOptionsWithOptions:(id)arg0 ;
+(void)clearAllLocalAuthenticatorCredentials;
+(void)deleteLocalAuthenticatorCredentialWithGroupAndID:(id)arg0 credential:(id)arg1 ;
+(void)deleteLocalAuthenticatorCredentialWithID:(id)arg0 ;
+(void)setDisplayNameForLocalCredentialWithGroupAndID:(id)arg0 credential:(id)arg1 displayName:(id)arg2 ;
+(void)setNameForLocalCredentialWithGroupAndID:(id)arg0 credential:(id)arg1 name:(id)arg2 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)getAssertionWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)getAssertionWithClientDataHash:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAssertionWithMediationRequirement:(NSInteger)arg0 clientDataHash:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)makeCredentialWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)makeCredentialWithClientDataHash:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeCredentialWithMediationRequirement:(NSInteger)arg0 clientDataHash:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)setMockConfiguration:(id)arg0 ;


@end


#endif