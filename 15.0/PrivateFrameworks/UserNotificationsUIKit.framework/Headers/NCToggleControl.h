// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCTOGGLECONTROL_H
#define NCTOGGLECONTROL_H

@class PLGlyphControl, NSString, UIPointerInteraction, UILabel;
@protocol NCClickInteractionPresenterDelegate, UIPointerInteractionDelegate, PLContentSizeCategoryAdjusting, NCToggleControlDelegate;


#import "NCToggleControlPair.h"
#import "NCClickInteractionPresenter.h"

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, UIPointerInteractionDelegate, PLContentSizeCategoryAdjusting>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) unsigned int anchorEdge; // ivar: _anchorEdge
@property (readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) CGSize cachedEffectiveMaxExpandedSize; // ivar: _cachedEffectiveMaxExpandedSize
@property (readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) CGSize cachedEffectiveMaxUnexpandedSize; // ivar: _cachedEffectiveMaxUnexpandedSize
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCToggleControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic, getter=_wasExpandedPriorToControlEvent) BOOL expandedPriorToControlEvent; // ivar: _expandedPriorToControlEvent
@property (nonatomic, getter=isGlyphAlwaysVisible) BOOL glyphAlwaysVisible; // ivar: _glyphAlwaysVisible
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, getter=_managingPair, setter=_setManagingPair:) NCToggleControlPair *managingPair; // ivar: _managingPair
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (retain, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter; // ivar: _previewInteractionPlatterPresenter
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic, getter=_toggleControlType) NSUInteger toggleControlType; // ivar: _toggleControlType


+(CGFloat)effectiveHeight:(BOOL)arg0 ;
+(id)_labelFont:(BOOL)arg0 ;
+(id)dismissControlWithMaterialRecipe:(NSInteger)arg0 ;
+(id)showLessControlWithMaterialRecipe:(NSInteger)arg0 ;
// +(void)performWithDefaultExpansionAnimation:(id)arg0 completion:(unk)arg1  ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)clickInteractionPresenterShouldBegin:(id)arg0 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_cornerRadius;
-(CGFloat)_effectiveHeight;
-(CGFloat)_effectiveInternalPadding;
-(CGFloat)_effectiveLeadingTrailingPadding;
-(CGFloat)_effectiveValueForMinValue:(CGFloat)arg0 withFont:(id)arg1 ;
-(id)_labelFont;
-(id)containerViewForClickInteractionPresenter:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_unexpandedFrame;
-(struct CGSize )_effectiveExpandedSize;
-(struct CGSize )_effectiveGlyphSize;
-(struct CGSize )_effectiveUnexpandedSize;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 whenExpanded:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureTitleLabelIfNecessaryWithTitle:(id)arg0 ;
-(void)_handleSecondaryClickEventForGestureRecognizer:(id)arg0 ;
-(void)_handleTouchUpInsideWithEvent:(id)arg0 ;
-(void)_sendActionsForEvents:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)_updateTitleLabelTextAttributes;
-(void)_updateTitleLabelVisualStyling;
-(void)addTarget:(id)arg0 forPreviewInteractionPresentedContentWithAction:(SEL)arg1 ;
-(void)clickInteractionPresenterDidBeginInteraction:(id)arg0 ;
-(void)clickInteractionPresenterDidCommitToPresentation:(id)arg0 ;
-(void)clickInteractionPresenterDidDismiss:(id)arg0 ;
-(void)clickInteractionPresenterDidPresent:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif