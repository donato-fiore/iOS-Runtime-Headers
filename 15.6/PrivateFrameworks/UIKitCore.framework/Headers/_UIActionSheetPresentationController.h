// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIONSHEETPRESENTATIONCONTROLLER_H
#define _UIACTIONSHEETPRESENTATIONCONTROLLER_H

@class NSString;
@protocol _UIActionSheetCompactPresentationControllerDelegate, UIActionSheetPresentationControllerDelegate;


#import "UIPopoverPresentationController.h"
#import "_UIActionSheetCompactPresentationController.h"

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate>



@property (nonatomic, setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:) BOOL _shouldUseCompactPresentationControllerWhenPresentedInSheet; // ivar: __shouldUseCompactPresentationControllerWhenPresentedInSheet
@property (weak, nonatomic) NSObject<UIActionSheetPresentationControllerDelegate> *actionSheetDelegate; // ivar: _actionSheetDelegate
@property (nonatomic) BOOL avoidsKeyboardDisabled; // ivar: _avoidsKeyboardDisabled
@property (retain, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController; // ivar: _compactPresentationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dismissActionTitle; // ivar: _dismissActionTitle
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically; // ivar: _dismissActionUsesShorterHeightWhenCompactVertically
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg0 ;
-(BOOL)dimmingViewWasTapped:(id)arg0 withDismissCompletion:(id)arg1 ;
-(NSInteger)_presentationContextForViewController:(id)arg0 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_visualStyleForTraitCollection:(id)arg0 ;
-(void)actionSheetCompactPresentationControllerDidDismiss:(id)arg0 ;
-(void)beginPseudoAlertPresentationMode;
-(void)dealloc;
-(void)endPseudoAlertPresentationMode;


@end


#endif