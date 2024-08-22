// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREDEYEINDICATORVIEW_H
#define PUREDEYEINDICATORVIEW_H

@class UIView;



@interface PURedEyeIndicatorView : UIView

@property (nonatomic) NSUInteger animationType; // ivar: _animationType


-(id)init;
-(void)animateWithDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif