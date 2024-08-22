// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONWEBBROWSERPLATFORMPUBLICKEYCREDENTIAL_H
#define ASAUTHORIZATIONWEBBROWSERPLATFORMPUBLICKEYCREDENTIAL_H

@class WBSWebBrowserPasskey, NSData, NSString;

#import <Foundation/Foundation.h>


@interface ASAuthorizationWebBrowserPlatformPublicKeyCredential : NSObject

@property (readonly, nonatomic) WBSWebBrowserPasskey *corePasskey; // ivar: _corePasskey
@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *relyingParty;
@property (readonly, nonatomic) NSData *userHandle;


-(id)initWithCorePasskey:(id)arg0 ;


@end


#endif