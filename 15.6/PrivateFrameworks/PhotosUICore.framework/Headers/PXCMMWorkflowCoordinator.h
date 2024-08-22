// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMWORKFLOWCOORDINATOR_H
#define PXCMMWORKFLOWCOORDINATOR_H

@class UINavigationController, UIViewController, NSString;
@protocol PXCMMViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXCMMActionPerformerDelegate, PXCMMActionControllerDelegate, PXCMMWorkflowPresenting, PXCMMWorkflowCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PXCMMGridController.h"
#import "PXCMMSession.h"
#import "PXCMMViewController.h"
#import "PXCPLStatusProvider.h"

@interface PXCMMWorkflowCoordinator : NSObject <PXCMMViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXCMMActionPerformerDelegate, PXCMMActionControllerDelegate, PXCMMWorkflowPresenting>

 {
    UINavigationController *_navigationController;
    PXCMMGridController *_gridController;
    UIViewController *_rootWorkflowViewController;
    PXCMMSession *_rootWorkflowSession;
    PXCMMViewController *_sendBackWorkflowViewController;
}


@property (retain, nonatomic) PXCPLStatusProvider *cplStatusProvider; // ivar: _cplStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMWorkflowCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)_alertControllerForSession:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(id)_createRootWorkflowViewControllerWithSession:(id)arg0 willBeEmbeddedInNavigationController:(BOOL)arg1 assetActionManager:(id)arg2 assetCollectionActionManager:(id)arg3 photosViewConfigurationBlock:(id)arg4 ;
-(id)_createSendBackWorkflowViewControllerWithContext:(id)arg0 ;
-(id)_performActionWithType:(id)arg0 forSession:(id)arg1 ;
-(id)_performDeleteActionForSession:(id)arg0 ;
-(id)_performPublishActionForSession:(id)arg0 ;
-(id)_performReceiveActionForSession:(id)arg0 ;
-(id)_presentingViewControllerForViewController:(id)arg0 ;
-(id)completeMyMomentViewController:(id)arg0 performActionForSession:(id)arg1 ;
-(id)completeMyMomentViewController:(id)arg0 performSendBackActionForSession:(id)arg1 ;
-(id)init;
-(id)workflowViewControllerWithContext:(id)arg0 ;
-(id)workflowViewControllerWithContext:(id)arg0 embedInNavigationControllerOfClass:(Class)arg1 ;
-(id)workflowViewControllerWithContext:(id)arg0 embedInNavigationControllerOfClass:(Class)arg1 photosViewConfigurationBlock:(id)arg2 ;
-(id)workflowViewControllerWithSession:(id)arg0 embedInNavigationControllerOfClass:(Class)arg1 assetActionManager:(id)arg2 assetCollectionActionManager:(id)arg3 photosViewConfigurationBlock:(id)arg4 ;
-(void)_completeActionForSession:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_completeMessageComposeActionForSession:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_completePhotosPickerActionForSession:(id)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_completePublishForSession:(id)arg0 withURL:(id)arg1 error:(id)arg2 ;
-(void)_completeSendBackActionForSession:(id)arg0 withContext:(id)arg1 error:(id)arg2 ;
-(void)_didFinishSession:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)_didFinishSession:(id)arg0 withState:(NSUInteger)arg1 avoidDismissal:(BOOL)arg2 ;
-(void)_performCleanupActionForSession:(id)arg0 ;
-(void)_performMessageComposeActionForSession:(id)arg0 shareURL:(id)arg1 ;
-(void)_performNotifyIfNeededActionForSession:(id)arg0 ;
-(void)_performPhotosPickerActionForSession:(id)arg0 gridPresentation:(id)arg1 ;
-(void)_performSendBackActionForSession:(id)arg0 ;
-(void)_presentAlertController:(id)arg0 ;
-(void)_presentSendBackFlowWithContext:(id)arg0 ;
-(void)_session:(id)arg0 finishedAccepting:(BOOL)arg1 withError:(id)arg2 ;
-(void)cancelWorkflow;
-(void)completeMyMomentViewController:(id)arg0 showPhotoPickerForSession:(id)arg1 ;
-(void)didCancelCompleteMyMomentViewController:(id)arg0 ;
-(void)performQuickSaveForContext:(id)arg0 completion:(id)arg1 ;
-(void)startPreloadingTasksForCompleteMyMomentViewController:(id)arg0 ;


@end


#endif