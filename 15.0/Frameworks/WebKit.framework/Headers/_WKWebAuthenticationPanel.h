// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(id)getAllLocalAuthenticatorCredentials;
+(id)getAllLocalAuthenticatorCredentialsWithAccessGroup:(id)arg0 ;
+(struct PublicKeyCredentialCreationOptions )convertToCoreCreationOptionsWithOptions:(id)arg0 ;
+(struct PublicKeyCredentialRequestOptions )convertToCoreRequestOptionsWithOptions:(id)arg0 ;
+(void)clearAllLocalAuthenticatorCredentials;
+(void)deleteLocalAuthenticatorCredentialWithID:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)getAssertionWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)makeCredentialWithChallenge:(id)arg0 origin:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)setMockConfiguration:(id)arg0 ;


@end


#endif