// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRENAMEFILEACTION_H
#define WFRENAMEFILEACTION_H

@class WFAction, WFFileRepresentation;



@interface WFRenameFileAction : WFAction

@property (retain, nonatomic) WFFileRepresentation *parentDirectory; // ivar: _parentDirectory


-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)finishRunningWithFile:(id)arg0 error:(id)arg1 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)renameFile:(id)arg0 name:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif