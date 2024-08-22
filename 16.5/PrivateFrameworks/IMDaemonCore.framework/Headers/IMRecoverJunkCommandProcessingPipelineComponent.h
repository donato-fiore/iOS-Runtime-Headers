// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMRECOVERJUNKCOMMANDPROCESSINGPIPELINECOMPONENT_H
#define IMRECOVERJUNKCOMMANDPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDiMessagePipelineResources.h"

@interface IMRecoverJunkCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources; // ivar: _pipelineResources


-(id)initWithPipelineResources:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;


@end


#endif