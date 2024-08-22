// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKRATINGVIEW_H
#define GKRATINGVIEW_H

@class UIView, UIImageView, NSLayoutConstraint;



@interface GKRatingView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) UIImageView *foregroundImageView; // ivar: _foregroundImageView
@property (retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint; // ivar: _foregroundWidthConstraint
@property (nonatomic) CGFloat value; // ivar: _value


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)awakeFromNib;
-(void)commonSetup;


@end


#endif