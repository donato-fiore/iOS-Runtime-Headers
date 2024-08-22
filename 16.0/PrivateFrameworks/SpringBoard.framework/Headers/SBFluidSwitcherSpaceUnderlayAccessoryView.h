// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERSPACEUNDERLAYACCESSORYVIEW_H
#define SBFLUIDSWITCHERSPACEUNDERLAYACCESSORYVIEW_H

@class SBFTouchPassThroughClippingView, SBFTouchPassThroughView, UIView, NSString, UIBezierPath, NSArray;
@protocol SBFluidSwitcherItemContainerHeaderViewDelegate, SBSystemPointerInteractionDelegate, SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate;


#import "SBAppSwitcherSettings.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBFluidSwitcherItemContainerHeaderView.h"
#import "SBAppSwitcherPageShadowView.h"
#import "SBSeparatorView.h"

@interface SBFluidSwitcherSpaceUnderlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerHeaderViewDelegate, SBSystemPointerInteractionDelegate>

 {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    SBFluidSwitcherItemContainerHeaderView *_headerView;
    BOOL _headerNeedsNonAnimatedLayout;
    UIView *_backgroundView;
    SBAppSwitcherPageShadowView *_shadowView;
    SBSeparatorView *_resizeGrabber;
    BOOL _resizeGrabberNeedsNonAnimatedLayout;
}


@property (nonatomic) CGFloat backgroundOpacity; // ivar: _backgroundOpacity
@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (nonatomic) CGPoint contentViewOffset; // ivar: _contentViewOffset
@property (nonatomic) CGFloat contentViewScale; // ivar: _contentViewScale
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat headerOpacity; // ivar: _headerOpacity
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) CGRect resizeGrabberBounds; // ivar: _resizeGrabberBounds
@property (nonatomic) CGPoint resizeGrabberCenter; // ivar: _resizeGrabberCenter
@property (nonatomic) CGFloat resizeGrabberOpacity; // ivar: _resizeGrabberOpacity
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (nonatomic) CGFloat shadowOffset; // ivar: _shadowOffset
@property (retain, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath
@property (nonatomic) NSInteger shadowStyle; // ivar: _shadowStyle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *titleItems; // ivar: _titleItems
@property (nonatomic) CGFloat titleOpacity; // ivar: _titleOpacity


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 systemPointerInteractionManager:(id)arg1 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)_configureDebugBorder;
-(void)_updateBackgroundView;
-(void)_updateBackgroundViewVisibility;
-(void)_updateContentView;
-(void)_updateHeaderAnimated:(BOOL)arg0 ;
-(void)_updateResizeGrabber;
-(void)_updateResizeGrabberVisibility;
-(void)_updateShadowView;
-(void)_updateShadowVisibility;
-(void)dealloc;
-(void)itemContainerHeaderView:(id)arg0 didSelectTitleItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif