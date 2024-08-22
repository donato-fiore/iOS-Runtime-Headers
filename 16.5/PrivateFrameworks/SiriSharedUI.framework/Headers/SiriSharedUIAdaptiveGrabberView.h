// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIADAPTIVEGRABBERVIEW_H
#define SIRISHAREDUIADAPTIVEGRABBERVIEW_H

@class UIControl;



@interface SiriSharedUIAdaptiveGrabberView : UIControl

@property (nonatomic) NSInteger style; // ivar: _style


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)shapeLayer;
-(struct CGPath *)_pathForStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_setupWithStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif