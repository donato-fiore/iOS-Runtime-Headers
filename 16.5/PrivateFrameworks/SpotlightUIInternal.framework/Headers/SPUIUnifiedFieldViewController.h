// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUIUNIFIEDFIELDVIEWCONTROLLER_H
#define SPUIUNIFIEDFIELDVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, UIView, MTMaterialView, UIKBVisualEffectView, NSLayoutConstraint, CALayer, SBFFeatherBlurView;
@protocol SPUIUnifiedFieldNavigationDelegate, SPUIUnifiedFieldViewControllerDelegate;


#import "SPUITextField.h"
#import "SPUISearchHeader.h"
#import "SPUINavigationController.h"
#import "SPUINavigationSwipeRecognizerDelegate.h"

@interface SPUIUnifiedFieldViewController : UIViewController <SPUIUnifiedFieldNavigationDelegate>



@property (retain) UIButton *backButton; // ivar: _backButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPUIUnifiedFieldViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) CGSize dockedUnifiedFieldSize;
@property (retain) UIView *fakeOriginalLeftView; // ivar: _fakeOriginalLeftView
@property (retain) SPUITextField *fakeTextField; // ivar: _fakeTextField
@property (retain) MTMaterialView *featheredBlur; // ivar: _featheredBlur
@property BOOL handlingKeyboardFrameChange; // ivar: _handlingKeyboardFrameChange
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat keyboardProtectorHeight;
@property (retain) UIKBVisualEffectView *keyboardVisualEffectView; // ivar: _keyboardVisualEffectView
@property (retain) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain) UIView *originalLeftView; // ivar: _originalLeftView
@property (readonly) SPUISearchHeader *searchHeader; // ivar: _searchHeader
@property (readonly) SPUINavigationController *searchNavigationController; // ivar: _searchNavigationController
@property (readonly) CALayer *searchProtectorLayer; // ivar: _searchProtectorLayer
@property (readonly) Class superclass;
@property (retain) SPUINavigationSwipeRecognizerDelegate *swipeRecognizer; // ivar: _swipeRecognizer
@property (retain) SBFFeatherBlurView *topBlur; // ivar: _topBlur
@property (retain) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (readonly) CGFloat unifiedFieldCornerRadius;
@property (readonly, getter=isUnifiedFieldDocked) BOOL unifiedFieldDocked;
@property (readonly) CGSize unifiedFieldSize;


+(CGFloat)insetMarginsForSearchField;
+(id)viewIsCanvasForField:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)generateBackButton;
-(id)initWithNavigationController:(id)arg0 ;
-(void)dealloc;
-(void)dismissSingleLevelViewController;
-(void)keyboardFrameChanged:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)resetSearchFieldContentWithSearchToken:(id)arg0 text:(id)arg1 wantsBackButton:(BOOL)arg2 transitionCoordinator:(id)arg3 ;
-(void)viewDidLayoutSubviews;


@end


#endif