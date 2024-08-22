// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSACCOUNTAUTHENTICATION_H
#define VSACCOUNTAUTHENTICATION_H

@class NSString, VSOptional;

#import <Foundation/Foundation.h>


@interface VSAccountAuthentication : NSObject

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) VSOptional *authenticationToken; // ivar: _authenticationToken
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)init;


@end


#endif