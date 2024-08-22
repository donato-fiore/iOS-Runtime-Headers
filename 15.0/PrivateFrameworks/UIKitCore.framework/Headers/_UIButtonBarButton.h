// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBARBUTTON_H
#define _UIBUTTONBARBUTTON_H

@class NSLayoutConstraint, NSDate, NSString;
@protocol UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting;


#import "UIControl.h"
#import "_UIBarButtonItemData.h"
#import "_UIButtonBarButtonVisualProvider.h"

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting>

 {
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    BOOL _autolayoutIsCleanForBoundsChange;
    NSDate *_appearanceDate;
    NSString *_removeFromSuperviewCallStackStringPart1;
    NSString *_removeFromSuperviewCallStackStringPart2;
    NSString *_lastNonNilNewWindowCallStackStringPart1;
    NSString *_lastNonNilNewWindowCallStackStringPart2;
}


@property (readonly, nonatomic) CGRect _buttonBarHitRect;
@property (retain, nonatomic) _UIBarButtonItemData *appearanceData; // ivar: _appearanceData
@property (readonly, nonatomic, getter=isBackButton) BOOL backButton; // ivar: _backButton
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // ivar: _visualProvider
@property (readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;


-(BOOL)__isKindOfUIButtonBarButton;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)updatePresentedMenuFrom:(id)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)focusEffect;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithVisualProvider:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_accessibilitySettingsChanged:(id)arg0 ;
-(void)_configureFromBarItem:(id)arg0 appearanceDelegate:(id)arg1 isBackButton:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_is_setNeedsLayout;
-(void)_prepareForWindowDealloc;
-(void)_setTouchHasHighlighted:(BOOL)arg0 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)configureBackButtonFromBarItem:(id)arg0 withAppearanceDelegate:(id)arg1 ;
-(void)configureFromBarItem:(id)arg0 withAppearanceDelegate:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)pasteTouchDown;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)removeFromSuperview;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNeedsAppearanceUpdate;
-(void)setSelected:(BOOL)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif