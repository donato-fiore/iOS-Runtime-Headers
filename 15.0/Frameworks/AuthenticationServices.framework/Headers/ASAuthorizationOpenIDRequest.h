// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONOPENIDREQUEST_H
#define ASAUTHORIZATIONOPENIDREQUEST_H

@class NSString, NSArray;


#import "ASAuthorizationRequest.h"

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest

@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *requestedOperation; // ivar: _requestedOperation
@property (copy, nonatomic) NSArray *requestedScopes; // ivar: _requestedScopes
@property (copy, nonatomic) NSString *state; // ivar: _state




@end


#endif