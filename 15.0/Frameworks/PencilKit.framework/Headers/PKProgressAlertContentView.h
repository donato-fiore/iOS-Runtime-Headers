// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROGRESSALERTCONTENTVIEW_H
#define PKPROGRESSALERTCONTENTVIEW_H

@class UIView;


#import "_PKAnimatableBorderCornerRadiusView.h"
#import "_PKPathView.h"

@interface PKProgressAlertContentView : UIView {
    _PKAnimatableBorderCornerRadiusView *_outerRingView;
    _PKPathView *_innerPieView;
}


@property (nonatomic) CGFloat progress; // ivar: _progress


-(id)_shapeLayerPathForProgress:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif