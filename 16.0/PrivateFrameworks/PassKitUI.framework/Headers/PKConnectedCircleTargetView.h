// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONNECTEDCIRCLETARGETVIEW_H
#define PKCONNECTEDCIRCLETARGETVIEW_H

@class UIView, UIColor;



@interface PKConnectedCircleTargetView : UIView

@property (readonly, nonatomic) UIColor *innerColor; // ivar: _innerColor
@property (readonly, nonatomic) UIColor *outerColor; // ivar: _outerColor


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOuterColor:(id)arg0 innerColor:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif