// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLHIGHLIGHTPILLVIEW_H
#define SLHIGHLIGHTPILLVIEW_H

@class UIControl, NSArray, NSString, UIVisualEffectView, UIVisualEffect, NSSet, UIAction, UIImageView, UISSlotStyle, UILabel, UIPointerInteraction, UIColor, _UISlotView;
@protocol SLDServiceProxyDelegate, UIPointerInteractionDelegate, SLHighlightPillViewCrossPlatform, SLHighlightPillViewDelegate;


#import "SLHighlight.h"
#import "SLDServiceProxy.h"
#import "SLDHighlightPillEmptySlotContent.h"

@interface SLHighlightPillView : UIControl <SLDServiceProxyDelegate, UIPointerInteractionDelegate, SLHighlightPillViewCrossPlatform>



@property (retain, nonatomic) NSArray *attributionIdentifiers; // ivar: _attributionIdentifiers
@property (retain, nonatomic) NSString *blurEffectGroupName; // ivar: _blurEffectGroupName
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) NSArray *chevronConstraints; // ivar: _chevronConstraints
@property (retain, nonatomic) UIVisualEffect *chevronEffect; // ivar: _chevronEffect
@property (retain, nonatomic) UIVisualEffectView *chevronImageView; // ivar: _chevronImageView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SLHighlightPillViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers; // ivar: _excludedContextMenuIdentifiers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAction *hideAction; // ivar: _hideAction
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (retain, nonatomic) UIImageView *lastChevronImageView; // ivar: _lastChevronImageView
@property (retain, nonatomic) UISSlotStyle *lastRenderedSlotStyle; // ivar: _lastRenderedSlotStyle
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) UILabel *noAttributionsDebugLabel; // ivar: _noAttributionsDebugLabel
@property (retain, nonatomic) SLDServiceProxy *pillProxy; // ivar: _pillProxy
@property (retain, nonatomic) SLDHighlightPillEmptySlotContent *placeholderSlotContent; // ivar: _placeholderSlotContent
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (retain, nonatomic) UIColor *preferredBackgroundColor; // ivar: _preferredBackgroundColor
@property (nonatomic) BOOL remoteContentIsLoaded; // ivar: _remoteContentIsLoaded
@property (nonatomic) BOOL remoteRenderingEnabled; // ivar: _remoteRenderingEnabled
@property (retain, nonatomic) UIAction *replyAction; // ivar: _replyAction
@property (nonatomic) BOOL shouldDrawBackgroundBlur; // ivar: _shouldDrawBackgroundBlur
@property (retain, nonatomic) _UISlotView *slotView; // ivar: _slotView
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger variant; // ivar: _variant


+(void)openMessagesForMessageGUID:(id)arg0 ;
-(BOOL)_shouldDisplayDebugPillLabel;
-(BOOL)shouldShowContextMenu;
-(BOOL)shouldShowReplyContextMenu;
-(CGFloat)expectedHeightForMaxWidth:(CGFloat)arg0 ;
-(id)_contentProviderForCurrentConfiguration:(SEL)arg0 ;
-(id)_finalSlotStyleForStyle:(id)arg0 ;
-(id)_targetedPreviewForInteraction:(id)arg0 ;
-(id)_uiActionItems;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuItems;
-(id)initWithHighlight:(id)arg0 maxWidth:(CGFloat)arg1 variant:(NSUInteger)arg2 shouldDrawBlur:(BOOL)arg3 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_configureChevronForSlotStyle:(id)arg0 ;
-(void)_hideMenuItemSelected;
-(void)_pillTapped:(id)arg0 forEvent:(id)arg1 ;
-(void)_replyMenuItemSelected;
-(void)_setupBlurView;
-(void)_setupDebugPillLabel;
-(void)excludeContextMenuItemsWithIdentifiers:(id)arg0 ;
-(void)layoutSubviews;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif