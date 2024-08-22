// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTWINDOWCONTROLLERHOSTINGITEM_H
#define UIINPUTWINDOWCONTROLLERHOSTINGITEM_H

@class NSLayoutConstraint, NSMutableDictionary, TUIInputAssistantHostView, NSString;
@protocol UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardViewSource, UIInputViewSetPlacementDelegate, _UIRemoteKeyboardDistributedViewSource, UIInputViewSetPlacementApplicator, _UIRemoteKeyboardControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIScrollToDismissSupport.h"
#import "UIView.h"
#import "UISystemKeyboardDockController.h"
#import "UIInputViewSetPlacement.h"
#import "UIKBInputBackdropView.h"
#import "UIViewController.h"
#import "UIInputWindowControllerHosting.h"
#import "UIFlickingAssistantViewSupport.h"
#import "UIInputSetHostView.h"
#import "UIInputViewSet.h"
#import "UIInputWindowController.h"
#import "UISplitKeyboardSupport.h"

@interface UIInputWindowControllerHostingItem : NSObject <UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardViewSource, UIInputViewSetPlacementDelegate, _UIRemoteKeyboardDistributedViewSource>

 {
    UIScrollToDismissSupport *_cachedScrollDismissController;
    id *_interactiveTransitionCleanupBlock;
    CGFloat _backdropHeightDelta;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_emptyHeightConstraint;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_assistantViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropBackgroundViewEdgeConstraints;
    NSMutableDictionary *_inputDockViewEdgeConstraints;
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_inputBackdropBackgroundView;
    UISystemKeyboardDockController *_dockViewController;
    CGFloat _verticalTranslationForSplitKeyboard;
    UIInputViewSetPlacement *_cachedPlacement;
    BOOL _supportsDockViewController;
    TUIInputAssistantHostView *_inputAssistantHostView;
}


@property (retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // ivar: _inputAccessoryBackdropView
@property (retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView; // ivar: _inputAssistantBackdropView
@property (retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // ivar: _inputBackdropView
@property (readonly, retain, nonatomic) UIViewController *_inputViewController;
@property (retain, nonatomic) NSObject<UIInputViewSetPlacementApplicator> *applicator; // ivar: _applicator
@property (readonly, weak, nonatomic) UIInputWindowControllerHosting *container; // ivar: _container
@property (readonly, retain) UIView *containerView;
@property (retain, nonatomic) NSObject<_UIRemoteKeyboardControllerDelegate> *controllerDelegate; // ivar: _controllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *dockView;
@property (nonatomic) BOOL dontDismissReachability;
@property (readonly, retain, nonatomic) UIFlickingAssistantViewSupport *flickingAssistantViewSupport; // ivar: _cachedFlickingAssistantViewController
@property (retain, nonatomic) UIView *floatingKeyboardMaskView; // ivar: _floatingKeyboardMaskView
@property (readonly) NSUInteger hash;
@property BOOL hideInputAssistantBackdrop;
@property BOOL hideInputView;
@property BOOL hideInputViewBackdrops;
@property (retain, nonatomic) UIInputSetHostView *hostView; // ivar: _hostView
@property (nonatomic) UIView *inputAccessoryView;
@property (readonly) TUIInputAssistantHostView *inputAssistantHostView;
@property (nonatomic) UIView *inputAssistantView;
@property (nonatomic) UIView *inputView;
@property (readonly) NSInteger inputViewBackdropStyle;
@property (readonly) UIEdgeInsets inputViewPadding;
@property (readonly, retain) UIInputViewSet *inputViewSet;
@property (readonly, nonatomic) BOOL isChangingPlacement;
@property (readonly, nonatomic) BOOL isOnScreenRotating;
@property (readonly) BOOL keyboardController;
@property (readonly, weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain) UIInputViewSetPlacement *placement;
@property (readonly, nonatomic) CGPoint positionConstraintConstant;
@property (readonly, nonatomic) BOOL scrollKeyboardActive; // ivar: _scrolling
@property (readonly, retain, nonatomic) UISplitKeyboardSupport *splitKeyboardController; // ivar: _cachedSplitKeyboardController
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) UIView *view;


-(BOOL)_isForDragToDismiss;
-(BOOL)_isForSelf:(id)arg0 ;
-(BOOL)_isForSplitKeyboard;
-(BOOL)_shouldShowInputDockView;
-(id)_updateOrCreateConstraintInDict:(id)arg0 key:(id)arg1 fromView:(id)arg2 toView:(id)arg3 tracker:(id)arg4 creator:(id)arg5 ;
-(id)constructNotificationInfoForScrollWithMode:(NSUInteger)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(id)viewMatchingConstraintForAttribute:(NSInteger)arg0 primaryView:(id)arg1 secondaryView:(id)arg2 ;
-(struct CGRect )visibleFrame;
-(struct UIEdgeInsets )_aligningInsetsForChildInputViewController:(id)arg0 includeSceneBounds:(BOOL)arg1 ;
-(void)_fillInNotificationInfo:(id)arg0 forDismissMode:(NSUInteger)arg1 ;
-(void)_updateBackdropViews;
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)clearInputViewEdgeConstraints;
-(void)clearInteractiveTransitionStateIfNecessary;
-(void)clearVisibilityConstraints;
-(void)completeTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)configureDockViewController:(BOOL)arg0 ;
-(void)configureFlickingAssistantViewController:(BOOL)arg0 ;
-(void)configureScrollDismissController:(BOOL)arg0 ;
-(void)configureSplitKeyboardController:(BOOL)arg0 ;
-(void)dealloc;
-(void)didFinishTranslation;
-(void)didFinishTranslationFromPlacement:(id)arg0 to:(id)arg1 ;
-(void)disableViewSizingConstraints:(NSUInteger)arg0 forNewView:(id)arg1 ;
-(void)enumerateBoundingRects:(id)arg0 ;
-(void)extendKeyboardBackdropHeight:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)finishScrollViewTransition;
-(void)finishSplitTransition;
-(void)finishSplitTransition:(BOOL)arg0 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(void)placementNeedsUpdate:(id)arg0 ;
-(void)prepareForSplitTransition;
-(void)prepareTranslationFromPlacement:(id)arg0 to:(id)arg1 ;
-(void)rebuildConstraints:(id)arg0 forView:(id)arg1 toMatchView:(id)arg2 tracker:(id)arg3 ;
-(void)refreshApplicator;
-(void)resetBackdropHeight;
-(void)resetVerticalConstraint;
-(void)setAccessoryViewVisible:(BOOL)arg0 delay:(CGFloat)arg1 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg0 ;
-(void)startTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)transitionDidFinish:(BOOL)arg0 ;
-(void)updateConstraintInsets;
-(void)updateEmptyHeightConstraint;
-(void)updateForKeyplaneChangeWithContext:(id)arg0 ;
-(void)updateInputAccessoryBackdropView;
-(void)updateInputAssistantBackdropView;
-(void)updateInputBackdropView;
-(void)updateInputBackdropViewVisibility;
-(void)updateKeyboardDockViewVisibility;
-(void)updateProgress:(CGFloat)arg0 startHeight:(CGFloat)arg1 endHeight:(CGFloat)arg2 ;
-(void)updateSupportsDockViewController;
-(void)updateTransition:(id)arg0 withInfo:(id)arg1 ;
-(void)updateViewConstraints;
-(void)updateViewSizingConstraints;
-(void)updateViewSizingConstraints:(id)arg0 ;
-(void)updateVisibilityConstraintsForPlacement:(id)arg0 ;
-(void)willBeginTranslation;
-(void)willBeginTranslationFromPlacement:(id)arg0 to:(id)arg1 ;


@end


#endif