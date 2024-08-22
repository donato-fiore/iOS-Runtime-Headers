// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONNECTEDCIRCLEVIEW_H
#define PKCONNECTEDCIRCLEVIEW_H

@class UIView;


#import "PKGradientVerticalConnector.h"

@interface PKConnectedCircleView : UIView

@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector; // ivar: _bottomConnector
@property (retain, nonatomic) UIView *targetView; // ivar: _targetView
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector; // ivar: _topConnector


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGRect )_targetViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif