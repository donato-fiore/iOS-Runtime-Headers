// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONNECTEDCIRCLEEMPTYVIEW_H
#define PKCONNECTEDCIRCLEEMPTYVIEW_H

@class UIView, UIColor;



@interface PKConnectedCircleEmptyView : UIView

@property (readonly, nonatomic) UIColor *innerColor; // ivar: _innerColor
@property (readonly, nonatomic) UIColor *outerColor; // ivar: _outerColor


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOuterColor:(id)arg0 innerColor:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif