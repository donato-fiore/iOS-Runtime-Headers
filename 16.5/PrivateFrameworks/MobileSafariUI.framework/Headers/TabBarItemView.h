// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABBARITEMVIEW_H
#define TABBARITEMVIEW_H

@class UIView, UIVisualEffectView, UIImageView, UILabel, NSString, UIHoverGestureRecognizer, SFAvatarStackView, SFUnreadIndicator, UIButton, UIImage, NSArray;


#import "TabBar.h"

@interface TabBarItemView : UIView {
    UIVisualEffectView *_contentEffectsView;
    UIVisualEffectView *_borderEffectsView;
    UIVisualEffectView *_closeButtonEffectsView;
    UIView *_iconClipperView;
    UIView *_titleClipperView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    NSString *_titleText;
    TabBar *_tabBar;
    NSString *_truncatedTitleText;
    CGSize _truncatedTitleTextSize;
    BOOL _titleWasTruncated;
    UIImageView *_closeButtonImageView;
    UIView *_highlightView;
    UIHoverGestureRecognizer *_hoverRecognizer;
    SFAvatarStackView *_participantsView;
    SFUnreadIndicator *_unreadIndicator;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) CGFloat contentOffset; // ivar: _contentOffset
@property (nonatomic) BOOL hidesTitleText; // ivar: _hidesTitleText
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (readonly, nonatomic) UIButton *mediaStateMuteButton; // ivar: _mediaStateMuteButton
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (nonatomic, getter=isReordering) BOOL reordering; // ivar: _reordering
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (nonatomic) CGFloat titleAnchorAdditionalOffset; // ivar: _titleAnchorAdditionalOffset
@property (nonatomic) NSInteger titleAnchorEdge; // ivar: _titleAnchorEdge
@property (nonatomic) CGFloat titleLayoutWidth; // ivar: _titleLayoutWidth
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread
@property (nonatomic) NSInteger visibleEdge; // ivar: _visibleEdge


-(BOOL)_canUseCachedTitleTruncationOnBoundsChange;
-(BOOL)_hasRoomForIconAndCloseButton;
-(BOOL)_isHovering;
-(BOOL)_isHoveringOverCloseButton;
-(BOOL)_showsCloseButton;
-(BOOL)_showsParticipants;
-(BOOL)_showsUnreadIndicator;
-(CGFloat)_contentWidthIgnoringCollaborationViews;
-(NSInteger)_physicalEdgeForLogicalEdge:(NSInteger)arg0 ;
-(id)_truncatedTitleWithFont:(id)arg0 desiredWidth:(CGFloat)arg1 truncatedSize:(struct CGSize *)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTabBar:(id)arg0 ;
-(struct CGRect )_titleBoundingBox;
-(struct CGRect )_titleBounds;
-(void)_hover:(id)arg0 ;
-(void)_layOutParticipantsView;
-(void)_layOutUnreadIndicator;
-(void)_layoutCloseButton;
-(void)_layoutEdges;
-(void)_layoutMediaStateIndicator;
-(void)_layoutTitleClipperView;
-(void)_layoutTitleLabel;
-(void)_layoutTitleLabelUsingCachedTruncation;
-(void)_showOrHideCloseButton;
-(void)_updateCloseButtonAlpha;
-(void)_updateCloseButtonEffect;
-(void)_updateCloseButtonImage;
-(void)_updateHighlightAlpha;
-(void)_updateIconViewVisibility;
-(void)_updateMediaStateButtonButtonAlpha;
-(void)_updateMediaStateIndicator;
-(void)_updateShowsParticipants;
-(void)_updateShowsUnreadIndicator;
-(void)configureForDragPreview;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTitleText:(id)arg0 ;
-(void)updateTabBarStyle;
-(void)updateTitleTruncation;


@end


#endif