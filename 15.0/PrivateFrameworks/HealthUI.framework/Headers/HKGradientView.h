// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRADIENTVIEW_H
#define HKGRADIENTVIEW_H

@class UIView;


#import "HKGradient.h"

@interface HKGradientView : UIView

@property (retain, nonatomic) HKGradient *gradient; // ivar: _gradient


+(Class)layerClass;
+(id)hk_verticalWaveformMaskGradientWithInsetLocation:(CGFloat)arg0 ;
-(id)initWithGradient:(id)arg0 ;
-(void)_updateGradientLayer;
-(void)maskAllCornersWithRadius:(CGFloat)arg0 ;
-(void)maskCorners:(NSUInteger)arg0 radius:(CGFloat)arg1 ;


@end


#endif