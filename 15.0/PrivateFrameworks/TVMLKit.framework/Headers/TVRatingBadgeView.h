// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRATINGBADGEVIEW_H
#define TVRATINGBADGEVIEW_H

@class UIView;


#import "TVRatingBadgeLayout.h"

@interface TVRatingBadgeView : UIView

@property (retain, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout; // ivar: _ratingBadgeLayout
@property (nonatomic) CGFloat ratingValue; // ivar: _ratingValue


+(id)ratingBadgeViewWithValue:(CGFloat)arg0 layout:(id)arg1 existingBadgeView:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(CGFloat)_circleRadius;
-(CGFloat)_interitemSpacing;
-(CGFloat)_starHeight;
-(id)_halfStarImage;
-(id)_ratingStyle;
-(id)_starImage;
-(id)_tintColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_starSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif