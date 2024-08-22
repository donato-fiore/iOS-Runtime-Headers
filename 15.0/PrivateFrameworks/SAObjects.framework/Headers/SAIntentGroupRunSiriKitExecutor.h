// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPRUNSIRIKITEXECUTOR_H
#define SAINTENTGROUPRUNSIRIKITEXECUTOR_H

@class NSString, NSArray;
@protocol SATurnIdContaining;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupSiriKitAppSelectionState.h"
#import "SAIntentGroupAceBargeInState.h"
#import "SAPerson.h"
#import "SAIntentGroupParse.h"
#import "SAIntentGroupSiriKitListPosition.h"
#import "SAIntentGroupSiriKitRemoteExecution.h"
#import "SAIntentGroupSiriKitMetrics.h"

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand <SATurnIdContaining>



@property (retain, nonatomic) SAIntentGroupSiriKitAppSelectionState *appSelectionState;
@property (retain, nonatomic) SAIntentGroupAceBargeInState *bargeInState;
@property (copy, nonatomic) NSString *confirmationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL directAction;
@property (nonatomic) BOOL eyesFree;
@property (copy, nonatomic) NSString *goalID;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAPerson *identifiedUserMeCard;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;
@property (nonatomic) BOOL multiUser;
@property (copy, nonatomic) NSArray *parameterMetadata;
@property (copy, nonatomic) NSArray *parameterPrompts;
@property (copy, nonatomic) NSString *parentGoalID;
@property (retain, nonatomic) SAIntentGroupParse *parse;
@property (retain, nonatomic) SAIntentGroupSiriKitListPosition *readingListPosition;
@property (retain, nonatomic) SAIntentGroupSiriKitRemoteExecution *remoteExecution;
@property (nonatomic) BOOL requiresConditionalMultiUserGrounding;
@property (copy, nonatomic) NSString *sessionHandOffContinuityID;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (readonly) Class superclass;
@property (nonatomic) BOOL textToSpeechEnabled;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *userInitiatedAction;
@property (copy, nonatomic) NSString *usoVerb;
@property (nonatomic) BOOL voiceTriggerEnabled;


+(id)runSiriKitExecutor;
+(id)runSiriKitExecutorWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif