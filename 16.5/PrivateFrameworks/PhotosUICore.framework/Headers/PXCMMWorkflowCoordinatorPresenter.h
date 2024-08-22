// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMWORKFLOWCOORDINATORPRESENTER_H
#define PXCMMWORKFLOWCOORDINATORPRESENTER_H

@class NSString;
@protocol PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting;

#import <Foundation/Foundation.h>

#import "PXGadgetNavigationHelper.h"
#import "PXCMMWorkflowCoordinator.h"

@interface PXCMMWorkflowCoordinatorPresenter : NSObject <PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting>

 {
    PXGadgetNavigationHelper *_navigationHelper;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)shareOriginForSession:(id)arg0 workflowCoordinator:(id)arg1 ;
-(id)init;
-(id)initWithNavigationHelper:(id)arg0 ;
-(id)workflowViewControllerWithContext:(id)arg0 ;
-(void)cancelWorkflow;
-(void)workflowCoordinator:(id)arg0 workflowViewController:(id)arg1 didFinishSession:(id)arg2 withActivityState:(NSUInteger)arg3 ;


@end


#endif