// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSISTANTCONTROLLER_H
#define PXASSISTANTCONTROLLER_H

@class UIViewController, UINavigationController, NSMapTable, NSString;
@protocol PXChangeObserver, PXAssistantViewControllerDelegate, UIAdaptivePresentationControllerDelegate, PXAssistantContext, PXAssistantControllerDelegate;


#import "PXAssistantStepContext.h"

@interface PXAssistantController : UIViewController <PXChangeObserver, PXAssistantViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UINavigationController *_navigationController;
    NSMapTable *_viewControllerToStepContext;
    PXAssistantStepContext *_stepContext;
    BOOL _useTransparentBarAppearance;
}


@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) NSObject<PXAssistantContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXAssistantControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)arg0 ;
-(id)_nextViewControllerFromViewController:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initialStepContexts;
-(id)nextStepContextForStepContextIdentifier:(id)arg0 ;
-(void)_cancelBarButtonItemAction:(id)arg0 ;
-(void)_cancelBarButtonItemDestructiveAction:(id)arg0 ;
-(void)_completeAssistantWithError:(id)arg0 ;
-(void)_completeBarButtonItemAction:(id)arg0 ;
-(void)_confirmCancellationOfAssistantWithDestruction;
-(void)_presentInitialViewControllers;
-(void)_setStepContext:(id)arg0 ;
-(void)_setUseTransparentBarAppearance:(BOOL)arg0 ;
-(void)_stepForwardBarButtonItemAction:(id)arg0 ;
-(void)_stepForwardInAssistantAnimated:(BOOL)arg0 ;
-(void)_updateBarAppearance;
-(void)_updateNextStepContext:(id)arg0 ;
-(void)_updateViewController:(id)arg0 forChangesWithDescriptor:(NSUInteger)arg1 ;
-(void)assistantForAssistantViewController:(id)arg0 failedWithError:(id)arg1 ;
-(void)assistantViewController:(id)arg0 dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)assistantViewController:(id)arg0 presentAlertWithConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)assistantViewController:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)assistantViewController:(id)arg0 pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)cancelAssistantForAssistantViewController:(id)arg0 ;
-(void)cancelAssistantWithDestruction:(BOOL)arg0 ;
-(void)completeAssistantForAssistantViewController:(id)arg0 ;
-(void)completeAssistantWithError:(id)arg0 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)stepContextWithIdentifier:(id)arg0 confirmCancellationWithAlertProperties:(id)arg1 ;
-(void)stepForwardInAssistantForAssistantViewController:(id)arg0 ;


@end


#endif