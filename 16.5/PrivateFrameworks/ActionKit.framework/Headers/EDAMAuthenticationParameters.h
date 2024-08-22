// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMAUTHENTICATIONPARAMETERS_H
#define EDAMAUTHENTICATIONPARAMETERS_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMAuthenticationParameters : FATObject

@property (retain, nonatomic) NSString *consumerKey; // ivar: _consumerKey
@property (retain, nonatomic) NSString *consumerSecret; // ivar: _consumerSecret
@property (retain, nonatomic) NSString *deviceDescription; // ivar: _deviceDescription
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *ssoLoginToken; // ivar: _ssoLoginToken
@property (retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts; // ivar: _supportsBusinessOnlyAccounts
@property (retain, nonatomic) NSNumber *supportsTwoFactor; // ivar: _supportsTwoFactor
@property (retain, nonatomic) NSString *usernameOrEmail; // ivar: _usernameOrEmail


+(id)structFields;
+(id)structName;


@end


#endif