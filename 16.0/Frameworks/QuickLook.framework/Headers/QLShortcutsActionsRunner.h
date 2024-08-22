// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLSHORTCUTSACTIONSRUNNER_H
#define QLSHORTCUTSACTIONSRUNNER_H

@class NSString;
@protocol WFContextualActionRunnerClientDelegate;

#import <Foundation/Foundation.h>


@interface QLShortcutsActionsRunner : NSObject <WFContextualActionRunnerClientDelegate>

 {
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)runAction:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg0 didFinishRunningWorkflowWithOutputFiles:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;


@end


#endif