// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITORP33_D3B5BE58827CE83B51740B96DEF4AF9020EDITORSHORTCUTRUNNER_H
#define _TTC14WORKFLOWEDITORP33_D3B5BE58827CE83B51740B96DEF4AF9020EDITORSHORTCUTRUNNER_H

@protocol WFWorkflowRunnerClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditorP33_D3B5BE58827CE83B51740B96DEF4AF9020EditorShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate>

 {
    ? delegate;
    ? workflow;
    ? runningState;
    ? runnerClient;
    ? actionIndexObservation;
    ? actionFractionCompletedObservation;
    ? workflowRunningProgress;
}




-(id)init;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowRunnerClient:(id)arg0 didStartRunningWorkflowWithProgress:(id)arg1 ;


@end


#endif