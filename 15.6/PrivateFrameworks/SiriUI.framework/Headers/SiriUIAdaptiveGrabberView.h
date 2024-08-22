// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIADAPTIVEGRABBERVIEW_H
#define SIRIUIADAPTIVEGRABBERVIEW_H

@class UIControl;



@interface SiriUIAdaptiveGrabberView : UIControl

@property (nonatomic) NSInteger style; // ivar: _style


+(Class)layerClass;
-(id)_bezierPathForStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)shapeLayer;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_setupWithStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif