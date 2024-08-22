// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBADGECONTAINERVIEW_H
#define SFBADGECONTAINERVIEW_H

@class UIView, UIColor;


#import "SFBadge.h"
#import "SFBadgeMaskView.h"

@interface SFBadgeContainerView : UIView {
    SFBadge *_badge;
    SFBadgeMaskView *_badgeMask;
}


@property (retain, nonatomic) UIColor *badgeTintColor; // ivar: _badgeTintColor
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL positionsBadgeRelativeToLayoutMargins; // ivar: _positionsBadgeRelativeToLayoutMargins
@property (nonatomic) BOOL showsBadge; // ivar: _showsBadge


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)pulse;


@end


#endif