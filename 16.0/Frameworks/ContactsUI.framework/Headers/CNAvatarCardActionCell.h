// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCARDACTIONCELL_H
#define CNAVATARCARDACTIONCELL_H

@class UITableViewCell, UIImageView, UIButton, NSLayoutConstraint, UILabel, UIPageControl, UIView;


#import "CNQuickAction.h"
#import "CNAvatarCardHighlightView.h"

@interface CNAvatarCardActionCell : UITableViewCell {
    CGPoint _initialLocation;
    CGPoint _lastLocation;
}


@property (retain, nonatomic) CNQuickAction *action; // ivar: _action
@property (retain, nonatomic) UIImageView *actionImageView; // ivar: _actionImageView
@property (nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) CNAvatarCardHighlightView *defaultHighlightView; // ivar: _defaultHighlightView
@property (retain, nonatomic) UIButton *expandButton; // ivar: _expandButton
@property (retain, nonatomic) NSLayoutConstraint *expandButtonWidthConstraint; // ivar: _expandButtonWidthConstraint
@property (nonatomic) BOOL gestureActivated; // ivar: _gestureActivated
@property (nonatomic) CGFloat initialTranslatingViewLeadingConstraintConstant; // ivar: _initialTranslatingViewLeadingConstraintConstant
@property (nonatomic) NSUInteger lastScrollDirection; // ivar: _lastScrollDirection
@property (nonatomic) CGFloat lastScrollDirectionTimestamp; // ivar: _lastScrollDirectionTimestamp
@property (retain, nonatomic) CNAvatarCardHighlightView *moreHighlightView; // ivar: _moreHighlightView
@property (retain, nonatomic) NSLayoutConstraint *moreHighlightViewHiddingConstraint; // ivar: _moreHighlightViewHiddingConstraint
@property (nonatomic) BOOL moreHighlighted; // ivar: _moreHighlighted
@property (retain, nonatomic) UILabel *moreLabel; // ivar: _moreLabel
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) NSLayoutConstraint *pageControlLeadingConstraint; // ivar: _pageControlLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *punchOutLeftConstraint; // ivar: _punchOutLeftConstraint
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (nonatomic) BOOL swipped; // ivar: _swipped
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) UIView *translatingView; // ivar: _translatingView
@property (retain, nonatomic) NSLayoutConstraint *translatingViewLeadingConstraint; // ivar: _translatingViewLeadingConstraint


+(id)cellNibForActions;
+(id)cellNibForContacts;
-(void)_updateFonts;
-(void)_updateHighlightAnimated:(BOOL)arg0 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)reloadData;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startTrackingWithGestureRecognizer:(id)arg0 ;
-(void)stopTrackingWithGestureRecognizer:(id)arg0 ;
-(void)trackHighlight:(id)arg0 ;


@end


#endif