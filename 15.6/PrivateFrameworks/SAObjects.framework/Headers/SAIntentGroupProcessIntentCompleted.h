// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPPROCESSINTENTCOMPLETED_H
#define SAINTENTGROUPPROCESSINTENTCOMPLETED_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SAIntentGroupBatchSlotResolutionResult.h"
#import "SAIntentGroupConfirmIntentCompleted.h"
#import "SAIntentGroupHandleIntentCompleted.h"

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (retain, nonatomic) SAIntentGroupBatchSlotResolutionResult *batchSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupConfirmIntentCompleted *confirmIntentCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAIntentGroupHandleIntentCompleted *handleIntentCompleted;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastAttemptedStep;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)processIntentCompleted;
+(id)processIntentCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif