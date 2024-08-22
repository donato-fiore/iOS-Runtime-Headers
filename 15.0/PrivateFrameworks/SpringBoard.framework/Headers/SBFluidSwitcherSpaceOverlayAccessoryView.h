// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERSPACEOVERLAYACCESSORYVIEW_H
#define SBFLUIDSWITCHERSPACEOVERLAYACCESSORYVIEW_H

@class SBFTouchPassThroughClippingView, SBFTouchPassThroughView, CAShapeLayer, NSString, NSArray;
@protocol SBFluidSwitcherItemContainerFooterViewDelegate, SBFluidSwitcherSpaceOverlayAccessoryViewDelegate;


#import "SBAppSwitcherSettings.h"
#import "SBFluidSwitcherItemContainerFooterView.h"
#import "SBFluidSwitcherIconOverlayView.h"
#import "SBHomeGrabberRotationView.h"
#import "SBSwitcherShelfViewController.h"

@interface SBFluidSwitcherSpaceOverlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerFooterViewDelegate>

 {
    SBFTouchPassThroughView *_contentView;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherItemContainerFooterView *_footerView;
    CAShapeLayer *_focusIndicatorLayer;
    SBFluidSwitcherIconOverlayView *_iconOverlayView;
}


@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (nonatomic) CGPoint contentViewOffset; // ivar: _contentViewOffset
@property (nonatomic) CGFloat contentViewScale; // ivar: _contentViewScale
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherSpaceOverlayAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsFocusIndicator; // ivar: _drawsFocusIndicator
@property (nonatomic) BOOL drawsFooter; // ivar: _drawsFooter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGrabberRotationView *homeGrabberView; // ivar: _homeGrabberView
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) NSUInteger multiWindowIndicatorRoleMask; // ivar: _multiWindowIndicatorRoleMask
@property (retain, nonatomic) SBSwitcherShelfViewController *shelfViewController; // ivar: _shelfViewController
@property (readonly) Class superclass;
@property (nonatomic) CGFloat titleAndIconOpacity; // ivar: _titleAndIconOpacity
@property (copy, nonatomic) NSArray *titleItems; // ivar: _titleItems
@property (nonatomic) CGFloat titleOpacity; // ivar: _titleOpacity


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_inverseContentScale;
-(id)initWithDelegate:(id)arg0 ;
-(void)_configureDebugBorder;
-(void)_updateContentViewLayout;
-(void)_updateFocusIndicator;
-(void)_updateFooterAnimated:(BOOL)arg0 ;
-(void)_updateFooterVisibility;
-(void)configureOverlayForIconZoomWithView:(id)arg0 crossfadeViews:(id)arg1 ;
-(void)dealloc;
-(void)itemContainerFooterView:(id)arg0 didSelectTitleItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeIconOverlay;


@end


#endif