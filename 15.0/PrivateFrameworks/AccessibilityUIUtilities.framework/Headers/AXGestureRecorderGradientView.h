// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXGESTURERECORDERGRADIENTVIEW_H
#define AXGESTURERECORDERGRADIENTVIEW_H

@class UIView, CAGradientLayer;



@interface AXGestureRecorderGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;


+(Class)layerClass;
-(id)_copyColorsArrayWithTopColor:(id)arg0 bottomColor:(id)arg1 ;
-(id)_copyLocationsArrayWithTopColorLocation:(float)arg0 bottomColorLocation:(float)arg1 ;
-(void)_configureGradientWithTopColor:(id)arg0 bottomColor:(id)arg1 locations:(id)arg2 animated:(BOOL)arg3 duration:(CGFloat)arg4 completion:(id)arg5 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg0 bottomColor:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)configureGradientAnimatedWithTopColor:(id)arg0 bottomColor:(id)arg1 topColorLocation:(float)arg2 bottomColorLocation:(float)arg3 duration:(CGFloat)arg4 completion:(id)arg5 ;
-(void)configureGradientWithTopColor:(id)arg0 bottomColor:(id)arg1 ;
-(void)configureGradientWithTopColor:(id)arg0 bottomColor:(id)arg1 topColorLocation:(float)arg2 bottomColorLocation:(float)arg3 ;


@end


#endif