// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTLAYOUTHOSTINGITEM_H
#define UIINPUTLAYOUTHOSTINGITEM_H

@class NSLayoutConstraint, NSString, NSArray;
@protocol UIGestureRecognizerDelegate;


#import "UIInputWindowControllerHostingItem.h"
#import "UILayoutGuide.h"
#import "UIView.h"
#import "UIInputWindowControllerHosting.h"
#import "UIInputViewSet.h"
#import "UIPinchGestureRecognizer.h"
#import "UIKBInputBackdropView.h"

@interface UIInputLayoutHostingItem : UIInputWindowControllerHostingItem <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UILayoutGuide *accessoryLayoutGuide; // ivar: _accessoryLayoutGuide
@property (retain, nonatomic) UILayoutGuide *assistantLayoutGuide; // ivar: _assistantLayoutGuide
@property (retain, nonatomic) UILayoutGuide *belowInputLayoutGuide; // ivar: _belowInputLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *guideConstraints; // ivar: _guideConstraints
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIInputWindowControllerHosting *hosting; // ivar: _hosting
@property (retain, nonatomic) UIView *inputLayoutAccessoryView; // ivar: _inputLayoutAccessoryView
@property (retain, nonatomic) UIView *inputLayoutAssistantView; // ivar: _inputLayoutAssistantView
@property (retain, nonatomic) UIView *inputLayoutView; // ivar: _inputLayoutView
@property (retain, nonatomic) NSArray *inputSetConstraints; // ivar: _inputSetConstraints
@property (retain, nonatomic) UILayoutGuide *inputViewLayoutGuide; // ivar: _inputViewLayoutGuide
@property (retain, nonatomic) UIInputViewSet *inputViewSet; // ivar: _inputViewSet
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (nonatomic) BOOL isOnScreen; // ivar: _isOnScreen
@property (retain, nonatomic) NSLayoutConstraint *keyplaneWidthConstraint; // ivar: _keyplaneWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint; // ivar: _leftConstraint
@property (retain, nonatomic) NSArray *offscreenConstraints; // ivar: _offscreenConstraints
@property (retain, nonatomic) NSArray *onscreenConstraints; // ivar: _onscreenConstraints
@property (retain, nonatomic) UIView *pillView; // ivar: _pillView
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint; // ivar: _rightConstraint
@property (retain, nonatomic) UIKBInputBackdropView *standardBackgroundView; // ivar: _standardBackgroundView
@property (readonly) Class superclass;


+(BOOL)requiresConstraintBasedLayout;
-(id)constraintsForView:(id)arg0 embeddedInGuide:(id)arg1 ;
-(id)constraintsForView:(id)arg0 embeddedInView:(id)arg1 insets:(struct UIEdgeInsets )arg2 ;
-(id)initWithContainer:(id)arg0 ;
-(id)initWithInputViewSet:(id)arg0 container:(id)arg1 ;
-(id)inputAccessoryView;
-(id)inputAssistantView;
-(id)inputView;
-(struct CGRect )visibleFrame;
-(void)_updateBackdropViews;
-(void)changeOnScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)clearInputViewEdgeConstraints;
-(void)clearVisibilityConstraints;
-(void)constrainGuidesIfNeeded;
-(void)constrainViewsToGuidesIfNeeded;
-(void)createBackdropView;
-(void)createPlatterBackdropView;
-(void)disableViewSizingConstraints:(NSUInteger)arg0 forNewView:(id)arg1 ;
-(void)hideBackdrop:(BOOL)arg0 ;
-(void)refreshApplicator;
-(void)reloadForPlacement;
-(void)resetPlacement;
-(void)setInputAccessoryView:(id)arg0 ;
-(void)setInputAssistantView:(id)arg0 ;
-(void)setInputView:(id)arg0 ;
-(void)setPlacement;
-(void)someViewDidLayoutSubviews;
-(void)trackPinch:(id)arg0 ;
-(void)unloadForPlacement;
-(void)updateConstraintInsets;
-(void)updateEmptyHeightConstraint;
-(void)updateInputAccessoryBackdropView;
-(void)updateInputAssistantBackdropView;
-(void)updateInputBackdropView;
-(void)updateInputBackdropViewVisibility;
-(void)updateInputViewSet:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViewSizingConstraints;
-(void)updateViewSizingConstraints:(id)arg0 ;
-(void)updateVisibilityConstraintsForPlacement:(id)arg0 ;


@end


#endif