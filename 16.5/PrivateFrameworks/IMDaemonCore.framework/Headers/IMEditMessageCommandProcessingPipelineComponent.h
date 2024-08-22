// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMEDITMESSAGECOMMANDPROCESSINGPIPELINECOMPONENT_H
#define IMEDITMESSAGECOMMANDPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDiMessagePipelineResources.h"

@interface IMEditMessageCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources; // ivar: _pipelineResources


-(CGFloat)_messageEditReceivedTimeout;
-(CGFloat)_messageRetractionReceivedTimeoutEnforcingExactTimeoutInterval:(BOOL)arg0 ;
-(CGFloat)_timeoutIntervalForEditType:(NSUInteger)arg0 enforceExactRetractionTimeoutInterval:(BOOL)arg1 ;
-(NSInteger)_messageEditHistoryLimit;
-(id)_account;
-(id)_applyEditsToMessage:(id)arg0 preEditFullMessageText:(id)arg1 editType:(NSUInteger)arg2 editedPartIndex:(NSInteger)arg3 editedMessagePartText:(id)arg4 shouldRetractSubject:(BOOL)arg5 editTimestamp:(id)arg6 chat:(id)arg7 updatedAssociatedMessageItems:(*id)arg8 ;
-(id)_idsAccount;
-(id)_messageStore;
-(id)initWithPipelineResources:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif