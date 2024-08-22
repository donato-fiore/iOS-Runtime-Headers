// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPROGRESSVIEW_H
#define SFPROGRESSVIEW_H

@class UIView, UIColor;


#import "SFRingView.h"

@interface SFProgressView : UIView {
    SFRingView *_trackRing;
    SFRingView *_progressRing;
    UIView *_rectangularFillView;
}


@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *trackTintColor;
@property (nonatomic) CGFloat trackWidth; // ivar: _trackWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateRectangularProgressFill;
-(void)layoutSubviews;


@end


#endif