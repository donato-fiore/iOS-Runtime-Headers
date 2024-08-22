// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPOINTEREFFECT_H
#define UIPOINTEREFFECT_H

@class NSValue;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface UIPointerEffect : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL allowsSanitization;
@property (readonly, nonatomic) NSUInteger constrainedAxes;
@property (readonly, nonatomic) CGFloat dampedAnimationDampingRatio;
@property (readonly, nonatomic) CGFloat dampedAnimationResponse;
@property (readonly, nonatomic) CGFloat defaultPointerCornerRadius;
@property (readonly, nonatomic) CGFloat maxSlip;
@property (readonly, nonatomic) NSUInteger options;
@property (readonly, nonatomic) NSValue *overrideSlipPoints;
@property (readonly, nonatomic) CGFloat parallaxAmount;
@property (copy, nonatomic) UITargetedPreview *preview; // ivar: _preview
@property (readonly, nonatomic) CGFloat scaleUpAnimationDampingRatio;
@property (readonly, nonatomic) CGFloat scaleUpAnimationResponse;
@property (readonly, nonatomic) CGFloat scaleUpPoints;
@property (readonly, nonatomic) CGPoint slipFactor;
@property (readonly, nonatomic) id *tintColorMatrixProvider;
@property (readonly, nonatomic) BOOL useSoftShadow;
@property (readonly, nonatomic) BOOL usesPointerArbiter;


+(id)effectWithPreview:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)settings;


@end


#endif