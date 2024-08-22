// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKVIEWWITHHAIRLINE_H
#define MKVIEWWITHHAIRLINE_H

@class UIView, UIColor;


#import "MKVibrantView.h"

@interface MKViewWithHairline : UIView {
    MKVibrantView *_bottomHairline;
    MKVibrantView *_topHairline;
}


@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (retain, nonatomic) UIColor *hairlineColor; // ivar: _hairlineColor
@property (nonatomic) CGFloat leftHairlineInset; // ivar: _leftHairlineInset
@property (nonatomic) CGFloat rightHairlineInset; // ivar: _rightHairlineInset
@property (nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif