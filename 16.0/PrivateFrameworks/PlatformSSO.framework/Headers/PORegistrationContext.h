// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POREGISTRATIONCONTEXT_H
#define POREGISTRATIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "POExtension.h"

@interface PORegistrationContext : NSObject

@property int authMethod; // ivar: _authMethod
@property (retain) NSString *containerAppBundleIdentifier; // ivar: _containerAppBundleIdentifier
@property (retain) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property int failureCount; // ivar: _failureCount
@property (retain) NSString *loginUserName; // ivar: _loginUserName
@property NSUInteger options; // ivar: _options
@property (retain) NSString *registrationToken; // ivar: _registrationToken
@property (getter=isRepair) BOOL repair; // ivar: _repair
@property BOOL resetKeys; // ivar: _resetKeys
@property (getter=isRetry) BOOL retry; // ivar: _retry
@property (retain) POExtension *ssoExtension; // ivar: _ssoExtension
@property NSInteger state; // ivar: _state
@property (retain) NSString *userName; // ivar: _userName
@property BOOL userNotified; // ivar: _userNotified


-(BOOL)isUserNotification;
-(id)init;


@end


#endif