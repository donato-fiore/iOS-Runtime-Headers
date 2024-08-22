// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDHIDDENVIEWCONTROLLER_H
#define UIKEYBOARDHIDDENVIEWCONTROLLER_H

@class _SFPasswordViewController, NSString;
@protocol UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize;


#import "UIViewController.h"

@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize>

 {
    BOOL _processingSceneDidChange;
}


@property (retain, nonatomic) _SFPasswordViewController *autofillVC; // ivar: _autofillVC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL presentedAutofill; // ivar: _presentedAutofill
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_formSheetObeysContentContainerSize;
-(BOOL)shouldPresentAsPopover;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_deviceWillLock:(id)arg0 ;
-(void)_localAuthenticationUIDismissed;
-(void)_localAuthenticationUIPresented;
-(void)_sceneDidChange;
-(void)dealloc;
-(void)passwordViewControllerDidFinish:(id)arg0 ;
-(void)presentAutofillVCWithAnimation:(BOOL)arg0 ;
-(void)presentSelfWithAnimation:(BOOL)arg0 ;
-(void)presentViewController:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif