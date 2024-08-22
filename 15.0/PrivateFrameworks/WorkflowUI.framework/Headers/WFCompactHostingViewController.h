// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOMPACTHOSTINGVIEWCONTROLLER_H
#define WFCOMPACTHOSTINGVIEWCONTROLLER_H

@class UIViewController, WFActionUserInterfaceListener, NSString, UIView, MTMaterialView, WFDialogRequest, NSProgress, WFDialogAttribution, WFWorkflowRunningContext, WFDebouncer, NSTimer;
@protocol WFActionUserInterfaceDelegate, WFCompactDialogViewControllerDelegate;


#import "WFCompactStatusViewController.h"
#import "WFCompactUnlockService.h"

@interface WFCompactHostingViewController : UIViewController <WFActionUserInterfaceDelegate, WFCompactDialogViewControllerDelegate>



@property (retain, nonatomic) WFActionUserInterfaceListener *actionInterfaceListener; // ivar: _actionInterfaceListener
@property (nonatomic) NSUInteger allowedInterfaceOrientations; // ivar: _allowedInterfaceOrientations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (nonatomic) BOOL handlingRequest; // ivar: _handlingRequest
@property (nonatomic) BOOL hasViewAppeared; // ivar: _hasViewAppeared
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (retain, nonatomic) WFDialogRequest *pendingRequest; // ivar: _pendingRequest
@property (nonatomic) BOOL preparingToPresentDialog; // ivar: _preparingToPresentDialog
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) id *progressSubscriber; // ivar: _progressSubscriber
@property (copy, nonatomic) id *requestCompletionHandler; // ivar: _requestCompletionHandler
@property (retain, nonatomic) WFDialogAttribution *runningAttribution; // ivar: _runningAttribution
@property (retain, nonatomic) WFWorkflowRunningContext *runningContext; // ivar: _runningContext
@property (readonly, nonatomic) BOOL screenIsLocked; // ivar: _screenIsLocked
@property (retain, nonatomic) WFDebouncer *singleStepShortcutCompletionDialogDebouncer; // ivar: _singleStepShortcutCompletionDialogDebouncer
@property (retain, nonatomic) WFCompactStatusViewController *statusViewController; // ivar: _statusViewController
@property (retain, nonatomic) NSTimer *statusViewTimer; // ivar: _statusViewTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService; // ivar: _unlockService


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithScreenLocked:(BOOL)arg0 ;
-(id)viewControllerForPresentingActionUserInterface:(id)arg0 ;
-(void)actionUserInterface:(id)arg0 setSupportedInterfaceOrientations:(NSUInteger)arg1 ;
-(void)actionUserInterface:(id)arg0 showViewControllerInPlatter:(id)arg1 ;
-(void)cancelAndDismiss;
-(void)clearStatusViewTimer;
-(void)dealloc;
-(void)dialogViewController:(id)arg0 didFinishWithResponse:(id)arg1 waitForFollowUpRequest:(BOOL)arg2 ;
-(void)dismissPersistentChromeWithSuccess:(BOOL)arg0 customAttributions:(id)arg1 completionHandler:(id)arg2 ;
-(void)dismissPlatterForActionUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissPlatterViewControllerAndUpdateChromeAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissPlatterViewControllerIfNecessaryAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)handlePendingRequest;
-(void)handleRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)keyboardWillChange;
-(void)loadView;
-(void)preparePersistentChromeWithContext:(id)arg0 attributions:(id)arg1 ;
-(void)presentChromeIfPossible;
-(void)presentStatusViewController;
-(void)scheduleStatusViewToAppear;
-(void)setTouchPassthrough:(BOOL)arg0 ;
-(void)updateChromeVisibilityWithCompletionHandler:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif