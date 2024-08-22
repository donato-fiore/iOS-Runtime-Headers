// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLAUTHENTICATIONCHALLENGEINTERNAL_H
#define NSURLAUTHENTICATIONCHALLENGEINTERNAL_H

@class NSError, NSArray;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>

#import "NSURLProtectionSpace.h"
#import "NSURLCredential.h"
#import "NSURLResponse.h"

@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    NSInteger previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    id<NSURLAuthenticationChallengeSender> *sender;
    NSArray *protectionSpacesForChallenge;
    NSInteger preferredProtSpaceIndex;
}




-(void)dealloc;


@end


#endif