// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONAPPLEIDREQUEST_H
#define ASAUTHORIZATIONAPPLEIDREQUEST_H

@class NSString;


#import "ASAuthorizationOpenIDRequest.h"

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {
    NSString *_user;
    os_unfair_lock_s _internalLock;
}


@property (copy, nonatomic) NSString *user;


-(id)init;


@end


#endif