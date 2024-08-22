// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCTRIGGEREVENTRUNNER_H
#define VCTRIGGEREVENTRUNNER_H

@class NSString, WFWorkflowRunEvent, WFWorkflowRunningContext, WFConfiguredTrigger;
@protocol WFWorkflowRunCoordinatorObserver, WFDatabaseProvider, VCTriggerEventRunnerDelegate;

#import <Foundation/Foundation.h>

#import "WFWorkflowRunCoordinator.h"

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<VCTriggerEventRunnerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent; // ivar: _inProgressRunEvent
@property (retain, nonatomic) WFWorkflowRunningContext *inProgressRunningContext; // ivar: _inProgressRunningContext
@property (retain, nonatomic) WFConfiguredTrigger *inProgressTrigger; // ivar: _inProgressTrigger
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator; // ivar: _runCoordinator
@property (readonly) Class superclass;


-(BOOL)isRunningWorkflowWithIdentifier:(id)arg0 ;
-(BOOL)startRunningWorkflow:(id)arg0 forTrigger:(id)arg1 eventInfo:(id)arg2 ;
-(id)initWithDatabaseProvider:(id)arg0 delegate:(id)arg1 runCoordinator:(id)arg2 ;
-(void)logPowerLogEventForConfiguredTrigger:(id)arg0 workflowReference:(id)arg1 ;
-(void)runCoordinator:(id)arg0 didFinishRunningWorkflowWithError:(id)arg1 runningContext:(id)arg2 cancelled:(BOOL)arg3 ;


@end


#endif