// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDAUTHENTICATIONDIALOGREQUEST_H
#define ACDAUTHENTICATIONDIALOGREQUEST_H

@class ACAccount, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ACDAuthenticationDialogRequest : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *authDelegateClassBundlePath; // ivar: _authDelegateClassBundlePath
@property (copy, nonatomic) NSString *authDelegateClassName; // ivar: _authDelegateClassName
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) BOOL confirmationRequired; // ivar: _confirmationRequired
@property (copy, nonatomic) NSURL *url; // ivar: _url




@end


#endif