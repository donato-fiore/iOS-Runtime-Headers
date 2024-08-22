// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSTILEVIEW_H
#define PKPASSTILEVIEW_H

@class UIButton, UIImageView, UILabel, UIActivityIndicatorView, PKPassTileState, NSMutableArray, UIFont, PKPassTile;
@protocol OS_dispatch_source;


#import "PKPassthroughView.h"
#import "PKContinuousButton.h"
#import "PKPassTileView_State.h"

@interface PKPassTileView : UIButton {
    PKPassthroughView *_contentView;
    ? _animationState;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_body;
    UIActivityIndicatorView *_spinner;
    PKContinuousButton *_button;
    ? _layoutState;
    PKPassTileState *_contentState;
    PKPassTileView_State *_state;
    NSObject<OS_dispatch_source> *_effectiveContentTimeout;
    BOOL _enabled;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _selectable;
    BOOL _highlightable;
    CGSize _labelContainerSize;
    NSMutableArray *_snapshots;
    UIFont *_significantFont;
    UIFont *_regularFont;
    UIFont *_titleFont;
    UIFont *_bodyFont;
    UIFont *_buttonFont;
    BOOL _animated;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
    NSObject<OS_dispatch_source> *_actionStateTimeout;
}


@property (nonatomic, getter=isCompact) BOOL compact; // ivar: _compact
@property (retain, nonatomic) PKPassTile *content; // ivar: _content
@property (nonatomic, getter=isInActionState) BOOL inActionState; // ivar: _inActionState


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)beginActionStateTimeout:(NSInteger)arg0 ;
-(void)dealloc;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
// -(void)performBatchUpdates:(id)arg0 animated:(unk)arg1  ;
-(void)prepareForReuse;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif