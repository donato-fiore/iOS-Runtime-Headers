// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONPOLICY_H
#define _CDINTERACTIONPOLICY_H


#import <Foundation/Foundation.h>

#import "_CDRateLimiter.h"

@interface _CDInteractionPolicy : NSObject

@property NSUInteger lifespanInSeconds; // ivar: _lifespanInSeconds
@property NSUInteger maxNumberOfAttachments; // ivar: _maxNumberOfAttachments
@property NSUInteger maxNumberOfKeywords; // ivar: _maxNumberOfKeywords
@property NSUInteger maxNumberOfRecipients; // ivar: _maxNumberOfRecipients
@property NSUInteger maxNumberStored; // ivar: _maxNumberStored
@property (retain) _CDRateLimiter *rateLimiter; // ivar: _rateLimiter
@property NSUInteger timeResolutionInSeconds; // ivar: _timeResolutionInSeconds


+(NSUInteger)defaultLifespan;
+(NSUInteger)defaultMaxNumberOfAttachments;
+(NSUInteger)defaultMaxNumberOfKeywords;
+(NSUInteger)defaultMaxNumberOfRecipients;
+(NSUInteger)defaultMaxNumberStored;
+(NSUInteger)defaultTimeResolutionInSeconds;
+(id)defaultPolicy;
+(id)defaultPolicyForCalls;
+(id)defaultPolicyForEmail;
+(id)defaultPolicyForMeetings;
+(id)defaultPolicyForMessages;
+(id)policyFromDictionary:(id)arg0 ;
+(id)policyWithRateLimiter:(id)arg0 lifespanInSeconds:(NSUInteger)arg1 maxNumberStored:(NSUInteger)arg2 timeResolutionInSeconds:(NSUInteger)arg3 maxNumberOfRecipients:(NSUInteger)arg4 maxNumberOfKeywords:(NSUInteger)arg5 maxNumberOfAttachments:(NSUInteger)arg6 ;
+(id)specialPolicyForFirstPartyApps;
-(id)description;
-(id)initWithRateLimiter:(id)arg0 lifespanInSeconds:(NSUInteger)arg1 maxNumberStored:(NSUInteger)arg2 timeResolutionInSeconds:(NSUInteger)arg3 maxNumberOfRecipients:(NSUInteger)arg4 maxNumberOfKeywords:(NSUInteger)arg5 maxNumberOfAttachments:(NSUInteger)arg6 ;


@end


#endif