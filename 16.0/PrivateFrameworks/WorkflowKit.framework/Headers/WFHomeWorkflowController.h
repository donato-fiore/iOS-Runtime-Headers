// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHOMEWORKFLOWCONTROLLER_H
#define WFHOMEWORKFLOWCONTROLLER_H

@class NSString;
@protocol WFOutOfProcessWorkflowControllerDelegate;

#import <Foundation/Foundation.h>

#import "WFHomeWorkflow.h"
#import "WFOutOfProcessWorkflowController.h"

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFHomeWorkflow *workflow; // ivar: _workflow
@property (readonly, nonatomic) WFOutOfProcessWorkflowController *workflowController; // ivar: _workflowController


-(id)init;
-(id)initWithWorkflow:(id)arg0 ;
-(void)cancel;
-(void)outOfProcessWorkflowController:(id)arg0 didFinishWithResult:(id)arg1 dialogAttribution:(id)arg2 ;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif