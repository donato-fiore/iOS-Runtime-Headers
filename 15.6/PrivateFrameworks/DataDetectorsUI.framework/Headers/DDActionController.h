// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDACTIONCONTROLLER_H
#define DDACTIONCONTROLLER_H

@class UIViewController, UIWindow, NSString, UIAlertController, UIView;
@protocol DDActionDelegate, UIPopoverPresentationControllerDelegate, DDDetectionControllerInteractionDelegate;

#import <Foundation/Foundation.h>

#import "DDAction.h"

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate>

 {
    UIViewController *_presentedViewController;
    UIViewController *_currentBaseViewController;
    UIWindow *_originalWindow;
    NSString *_idsListenerID;
}


@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) UIView *baseView; // ivar: _baseView
@property (retain) DDAction *currentAction; // ivar: _currentAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<DDDetectionControllerInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (readonly) Class superclass;


-(?)actionsForURL:(?)arg0 result:(?)arg1 enclosingResultcontext;
-(?)actionsForURL:(?)arg0 resultcontext;
-(?)defaultActionForURL:(?)arg0 resultcontext;
-(BOOL)actionIsCancellable;
-(BOOL)facetimeAvailable;
-(BOOL)isPerformingAction;
-(BOOL)isPresentingInPopover;
-(BOOL)presentingAreaIsLargeEnough;
-(id)init;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(void)_cleanup;
-(void)_didDismissActionViewController;
-(void)_dismissCurrentViewControllerOurselves;
-(void)_presentController:(id)arg0 ;
-(void)_presentCurrentViewControllerOurselves;
-(void)_willPresentViewController;
-(void)action:(id)arg0 presentationShouldBeModal:(BOOL)arg1 ;
-(void)action:(id)arg0 viewControllerReady:(id)arg1 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)actionDidFinish:(id)arg0 shouldDismiss:(BOOL)arg1 ;
-(void)cancelAction;
-(void)cleanupNoDismiss;
-(void)dealloc;
-(void)dismissCurrentController;
-(void)failedToPrepareViewControllerForAction:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)tellDelegateActionDidFinish;
-(void)tellDelegateActionDidFinishShouldDismiss:(BOOL)arg0 ;
-(void)viewControllerRequiresModalInPopover:(BOOL)arg0 ;


@end


#endif