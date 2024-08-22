// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSAUTHORIZATIONREQUEST_H
#define SSAUTHORIZATIONREQUEST_H

@class NSNumber, NSString;
@protocol SSXPCCoding, SSAuthorizationRequestDelegate;


#import "SSRequest.h"

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding>

 {
    id *_token;
}


@property (copy) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL allowSilentAuthentication; // ivar: _allowSilentAuthentication
@property (readonly) id *authorizationToken;
@property (copy) NSString *clientIdentifierHeader; // ivar: _clientIdentifierHeader
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSAuthorizationRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *familyAccountIdentifier; // ivar: _familyAccountIdentifier
@property (readonly) NSUInteger hash;
@property (copy) NSString *keybagPath; // ivar: _keybagPath
@property (copy) NSString *reason; // ivar: _reason
@property (nonatomic) BOOL shouldAddKeysToKeyBag; // ivar: _shouldAddKeysToKeyBag
@property (nonatomic) BOOL shouldPromptForCredentials; // ivar: _shouldPromptForCredentials
@property (readonly) Class superclass;
@property (copy) NSString *userAgent; // ivar: _userAgent


-(BOOL)start;
-(id)_init;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAuthorizationToken:(id)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithAuthorizationResponseBlock:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif