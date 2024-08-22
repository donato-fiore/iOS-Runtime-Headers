// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRIKITRUNTIME21PROXIEDREQUESTCONTEXT_H
#define _TTC14SIRIKITRUNTIME21PROXIEDREQUESTCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC14SiriKitRuntime21ProxiedRequestContext : NSObject <NSSecureCoding>

 {
    ? aceId;
    ? refId;
    ? interactionType;
    ? inputOrigin;
    ? aceMeCard;
    ? sessionHandoffContinuityId;
    ? isMultiUserEnabled;
    ? requiresConditionalMultiUserGrounding;
    ? isEyesFree;
    ? isVoiceTriggerEnabled;
    ? isTextToSpeechEnabled;
    ? isDirectAction;
    ? interactionId;
    ? bargeInContext;
    ? aceRemoteExecution;
    ? resultCandidateId;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif