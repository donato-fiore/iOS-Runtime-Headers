// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASAUTHORIZATIONSINGLESIGNONREQUEST_H
#define ASAUTHORIZATIONSINGLESIGNONREQUEST_H

@class NSArray;


#import "ASAuthorizationOpenIDRequest.h"

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest

@property (copy, nonatomic) NSArray *authorizationOptions; // ivar: _authorizationOptions
@property (nonatomic, getter=isUserInterfaceEnabled) BOOL userInterfaceEnabled; // ivar: _userInterfaceEnabled


-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)initWithProvider:(id)arg0 ;


@end


#endif