// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSYNDICATIONACTIONPROCESSINGPIPELINECOMPONENT_H
#define IMSYNDICATIONACTIONPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDiMessagePipelineResources.h"

@interface IMSyndicationActionProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources; // ivar: _pipelineResources


-(id)_account;
-(id)_broadcaster;
-(id)_chatRegistry;
-(id)_messageStore;
-(id)findSMSChatForInput:(id)arg0 ;
-(id)handleChatSyndicationAction:(id)arg0 chat:(id)arg1 ;
-(id)handleMessageSyndicationAction:(id)arg0 chat:(id)arg1 ;
-(id)initWithPipelineResources:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif