// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKPUBLICKEYCREDENTIALREQUESTOPTIONS_H
#define _WKPUBLICKEYCREDENTIALREQUESTOPTIONS_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "_WKAuthenticationExtensionsClientInputs.h"

@interface _WKPublicKeyCredentialRequestOptions : NSObject

@property (copy, nonatomic) NSArray *allowCredentials; // ivar: _allowCredentials
@property (nonatomic) NSInteger authenticatorAttachment; // ivar: _authenticatorAttachment
@property (retain, nonatomic) _WKAuthenticationExtensionsClientInputs *extensions; // ivar: _extensions
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (copy, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (nonatomic) NSInteger userVerification; // ivar: _userVerification


-(id)init;
-(void)dealloc;


@end


#endif