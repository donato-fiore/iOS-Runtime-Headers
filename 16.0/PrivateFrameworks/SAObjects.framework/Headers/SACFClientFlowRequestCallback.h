// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACFCLIENTFLOWREQUESTCALLBACK_H
#define SACFCLIENTFLOWREQUESTCALLBACK_H

@class NSArray, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAIntentGroupSiriKitMetrics.h"
#import "SASVSystemDialogActOutput.h"

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *applicationContextObjects;
@property (copy, nonatomic) NSArray *conversationStateAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *dictationPromptAbortValues;
@property (copy, nonatomic) NSString *dictationPromptTargetDomain;
@property (copy, nonatomic) NSArray *dictationPromptTargetNodes;
@property (copy, nonatomic) NSArray *disambiguationPromptAbortValues;
@property (copy, nonatomic) NSNumber *disambiguationPromptAmbiguityId;
@property (copy, nonatomic) NSArray *disambiguationPromptResponseTargets;
@property (copy, nonatomic) NSString *disambiguationPromptTargetDomain;
@property (copy, nonatomic) NSArray *displayHintsAsJson;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *nlInput;
@property (copy, nonatomic) NSNumber *objectDisambiguation;
@property (nonatomic) BOOL shouldResetFlowTaskState;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (readonly) Class superclass;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property (copy, nonatomic) NSArray *weightedPromptAbortValues;
@property (copy, nonatomic) NSArray *weightedPromptResponseOptions;
@property (copy, nonatomic) NSArray *weightedPromptResponseTargets;
@property (copy, nonatomic) NSNumber *weightedPromptStrict;
@property (copy, nonatomic) NSString *weightedPromptTargetDomain;


+(id)clientFlowRequestCallback;
+(id)clientFlowRequestCallbackWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif