// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLAUTHENTICATIONCHALLENGE_H
#define NSURLAUTHENTICATIONCHALLENGE_H

@class NSError;
@protocol NSSecureCoding, NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>

#import "NSURLAuthenticationChallengeInternal.h"
#import "NSURLResponse.h"
#import "NSURLCredential.h"
#import "NSURLProtectionSpace.h"

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>

 {
    NSURLAuthenticationChallengeInternal *_internal;
}


@property (readonly, copy) NSError *error;
@property (readonly, copy) NSURLResponse *failureResponse;
@property (readonly) NSInteger previousFailureCount;
@property (readonly, copy) NSURLCredential *proposedCredential;
@property (readonly, copy) NSURLProtectionSpace *protectionSpace;
@property (readonly, retain) NSObject<NSURLAuthenticationChallengeSender> *sender;


+(BOOL)supportsSecureCoding;
+(id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg0 sender:(id)arg1 ;
+(id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg0 sender:(id)arg1 ;
-(id)_initWithListOfProtectionSpaces:(id)arg0 CurrentProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(NSInteger)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)init;
-(id)initWithAuthenticationChallenge:(id)arg0 sender:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtectionSpace:(id)arg0 proposedCredential:(id)arg1 previousFailureCount:(NSInteger)arg2 failureResponse:(id)arg3 error:(id)arg4 sender:(id)arg5 ;
-(struct _CFURLAuthChallenge *)_createCFAuthChallenge;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif