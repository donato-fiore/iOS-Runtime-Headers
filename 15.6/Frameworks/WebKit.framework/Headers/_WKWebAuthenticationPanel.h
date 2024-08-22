// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(id)getAllLocalAuthenticatorCredentials;
+(id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)arg0 ;
+(id)getClientDataJSONForAuthenticationType:(NSInteger)arg0 challenge:(id)arg1 origin:(id)arg2 ;
+(struct PublicKeyCredentialCreationOptions )convertToCoreCreationOptionsWithOptions:(id)arg0 ;
+(struct PublicKeyCredentialRequestOptions )convertToCoreRequestOptionsWithOptions:(id)arg0 ;
+(void)clearAllLocalAuthenticatorCredentials;
+(void)deleteLocalAuthenticatorCredentialWithID:(id)arg0 ;
+(void)setUsernameForLocalCredentialWithID:(id)arg0 username:(id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)getAssertionWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)getAssertionWithClientDataHash:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeCredentialWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)makeCredentialWithClientDataHash:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)setMockConfiguration:(id)arg0 ;


@end


#endif