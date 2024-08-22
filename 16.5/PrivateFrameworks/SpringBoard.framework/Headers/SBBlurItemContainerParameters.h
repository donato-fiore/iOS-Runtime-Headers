// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBLURITEMCONTAINERPARAMETERS_H
#define SBBLURITEMCONTAINERPARAMETERS_H

@class SBFFluidBehaviorSettings;

#import <Foundation/Foundation.h>


@interface SBBlurItemContainerParameters : NSObject

@property (readonly, nonatomic) SBFFluidBehaviorSettings *blurAnimationSettings; // ivar: _blurAnimationSettings
@property (readonly, nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (readonly, nonatomic) NSInteger inputIntermediateBitDepth; // ivar: _inputIntermediateBitDepth
@property (readonly, nonatomic) NSInteger inputQuality; // ivar: _inputQuality
@property (readonly, nonatomic) CGFloat rasterizationScale; // ivar: _rasterizationScale
@property (readonly, nonatomic) BOOL shouldRasterize; // ivar: _shouldRasterize


+(id)defaultCrossblurBlurParameters;
-(id)initWithBlurRadius:(CGFloat)arg0 shouldRasterize:(BOOL)arg1 rasterizationScale:(CGFloat)arg2 inputQuality:(NSInteger)arg3 inputIntermediateBitDepth:(NSInteger)arg4 blurAnimationSettings:(id)arg5 ;


@end


#endif