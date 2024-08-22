// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERPALETTE_H
#define _UINAVIGATIONCONTROLLERPALETTE_H

@class NSArray, NSString;
@protocol _UINavigationPalette;


#import "UIView.h"
#import "_UIBarBackground.h"
#import "_UIBarBackgroundLayoutLegacy.h"
#import "UIViewController.h"
#import "UINavigationController.h"

@interface _UINavigationControllerPalette : UIView <_UINavigationPalette>

 {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    CGFloat _backgroundUnderlapHeight;
    ? _paletteFlags;
}


@property (readonly, nonatomic, getter=_attachmentIsChanging) BOOL _attachmentIsChanging;
@property (retain, nonatomic, setter=_setBackgroundConstraints:) NSArray *_backgroundConstraints; // ivar: __backgroundConstraints
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints; // ivar: __constraints
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar; // ivar: __paletteOverridesPinningBar
@property (nonatomic, getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:) BOOL _palettePinningBarHidden; // ivar: __palettePinningBarHidden
@property (nonatomic, setter=_setPinningBar:) id *_pinningBar; // ivar: __pinningBar
@property (nonatomic, setter=_setRestartPaletteTransitionIfNecessary:) BOOL _restartPaletteTransitionIfNecessary;
@property (nonatomic, setter=_setSize:) CGSize _size; // ivar: __size
@property (nonatomic) UIViewController *_unpinnedController; // ivar: __unpinnedController
@property (readonly, nonatomic) NSUInteger boundaryEdge; // ivar: _boundaryEdge
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navController; // ivar: _navController
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) UIEdgeInsets preferredContentInsets; // ivar: _preferredContentInsets
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden; // ivar: _visibleWhenPinningBarIsHidden


-(BOOL)_shouldUpdateBackground;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(id)_attachedPinningTopBar;
-(id)_initWithNavigationController:(id)arg0 forEdge:(NSUInteger)arg1 ;
-(void)_configureConstraintsForBackground:(id)arg0 ;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_propagateBackgroundToContents;
-(void)_resetConstraintConstants:(CGFloat)arg0 ;
-(void)_resetHeightConstraintConstant;
-(void)_setAttached:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)_setAttachmentIsChanging:(BOOL)arg0 ;
-(void)_setLeftConstraintConstant:(CGFloat)arg0 ;
-(void)_setTopConstraintConstant:(CGFloat)arg0 ;
-(void)_setVisualAltitude:(CGFloat)arg0 ;
-(void)_setVisualAltitudeBias:(struct CGSize )arg0 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_updateBackgroundView;
-(void)_updateLayoutForCurrentConfiguration;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 isAnimating:(BOOL)arg1 ;


@end


#endif