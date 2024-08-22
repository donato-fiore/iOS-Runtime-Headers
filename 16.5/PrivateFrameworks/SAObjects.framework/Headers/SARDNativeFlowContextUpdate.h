// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARDNATIVEFLOWCONTEXTUPDATE_H
#define SARDNATIVEFLOWCONTEXTUPDATE_H

@class NSString, NSArray, NSData;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAIntentGroupSiriKitMetrics.h"
#import "SASVSystemDialogActOutput.h"

@interface SARDNativeFlowContextUpdate : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *applicationContext;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *clientFlowUpdateContextList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *pegasusConversationContext;
@property (copy, nonatomic) NSData *promptContextProto;
@property (copy, nonatomic) NSString *refId;
@property (nonatomic) BOOL resetFlowTaskState;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (readonly) Class superclass;
@property (retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif