// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMNOTIFYRECIPIENTCOMMANDPROCESSINGPIPELINECOMPONENT_H
#define IMNOTIFYRECIPIENTCOMMANDPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDiMessagePipelineResources.h"

@interface IMNotifyRecipientCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources; // ivar: _pipelineResources


-(id)_account;
-(id)_idsAccount;
-(id)_messageStore;
-(id)initWithPipelineResources:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;
-(void)_markMessageAsNotifiedRecipientAndNotify:(id)arg0 session:(id)arg1 chat:(id)arg2 ;


@end


#endif