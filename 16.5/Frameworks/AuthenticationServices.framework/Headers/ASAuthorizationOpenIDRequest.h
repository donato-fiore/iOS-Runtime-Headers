// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONOPENIDREQUEST_H
#define ASAUTHORIZATIONOPENIDREQUEST_H

@class NSArray, NSString;


#import "ASAuthorizationRequest.h"

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest {
    NSArray *_requestedScopes;
    NSString *_state;
    NSString *_nonce;
    NSString *_requestedOperation;
    os_unfair_lock_s _internalLock;
}


@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *requestedOperation;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSString *state;


-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)init;


@end


#endif