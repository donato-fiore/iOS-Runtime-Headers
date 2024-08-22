// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFORMSHEETPRESENTATIONCONTROLLER_H
#define _UIFORMSHEETPRESENTATIONCONTROLLER_H



#import "UISheetPresentationController.h"

@interface _UIFormSheetPresentationController : UISheetPresentationController {
    BOOL _layoutStateShouldAvoidKeyboard;
    CGFloat _keyboardYOrigin;
}




+(NSInteger)_initialMode;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_shouldHideBottomCorner;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)shouldSubscribeToKeyboardNotifications;
-(NSInteger)_defaultPresentationStyleForTraitCollection:(id)arg0 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg0 withOrigin:(CGFloat)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;


@end


#endif