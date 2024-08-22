// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXACTIONPERFORMER_H
#define PXACTIONPERFORMER_H

@class NSString, NSUndoManager;
@protocol PXActivityActionDelegate, PXActionPerformerDelegate, PXAnonymousViewController, PXPresentationEnvironment;

#import <Foundation/Foundation.h>


@interface PXActionPerformer : NSObject <PXActivityActionDelegate>

 {
    id *_completionHandler;
}


@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *activitySystemImageName;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL canPresentAlertInBackgroudState; // ivar: _canPresentAlertInBackgroudState
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable; // ivar: _cancellable
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXActionPerformerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (retain, nonatomic) NSObject<PXPresentationEnvironment> *presentationEnvironment; // ivar: _presentationEnvironment
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController; // ivar: _presentedViewController
@property (readonly, nonatomic) BOOL presentsMenu;
@property (weak, nonatomic) id *sender; // ivar: _sender
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUndoManager *undoManager;


-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(BOOL)dismissAlertWithToken:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)dismissViewController:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)performerResetsAfterCompletion;
-(BOOL)presentAlertWithTitle:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)presentAlertWithTitle:(id)arg0 message:(id)arg1 radarConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)presentViewController:(id)arg0 ;
-(BOOL)pushViewController:(id)arg0 ;
-(BOOL)requiresUnlockedDevice;
-(id)activity;
-(id)alertAction;
-(id)barButtonItemWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)init;
-(id)initWithActionType:(id)arg0 ;
-(id)localizedSubtitleForUseCase:(NSUInteger)arg0 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(id)menuElement;
-(id)presentAlertWithConfigurationHandler:(id)arg0 ;
-(void)_completeStateWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_completeUnlockTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleStepFinished:(NSUInteger)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_performUnlockIfNeeded;
-(void)_transitionToState:(NSUInteger)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)cancelActionWithCompletionHandler:(id)arg0 ;
-(void)completeBackgroundTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performActionWithCompletionHandler:(id)arg0 ;
-(void)performActivity:(id)arg0 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif