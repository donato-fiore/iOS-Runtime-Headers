// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSIDENTITYPROVIDERINFOQUERYRESULT_H
#define VSIDENTITYPROVIDERINFOQUERYRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VSIdentityProvider.h"

@interface VSIdentityProviderInfoQueryResult : NSObject

@property (copy, nonatomic) NSString *designatedAppBundleIdentifier; // ivar: _designatedAppBundleIdentifier
@property (copy, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider


-(id)description;


@end


#endif