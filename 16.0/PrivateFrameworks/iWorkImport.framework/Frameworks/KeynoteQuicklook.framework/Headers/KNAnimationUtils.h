// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATIONUTILS_H
#define KNANIMATIONUTILS_H


#import <Foundation/Foundation.h>


@interface KNAnimationUtils : NSObject



+(BOOL)allowBlendingMotionBackgroundsDefaultValue;
+(BOOL)isAnimationTestingEnabled;
+(BOOL)isCustomEffectTimingCurveEditingEnabled;
+(BOOL)isDiscreteGPUAquisitionDisabled;
+(BOOL)isDiscreteGPUNeededInShow:(id)arg0 ;
+(BOOL)isDisplayLoggingEnabled;
+(BOOL)isFPSLoggingEnabled;
+(BOOL)isFPSLoggingTimerDisabled;
+(BOOL)isGLStateValidationEnabled;
+(BOOL)isMetalDisabled;
+(BOOL)isMotionBlurCapableWithAnimationContext:(id)arg0 ;
+(BOOL)isRandomNumberSeedAlwaysRandom;
+(BOOL)isRandomNumberSeedAlwaysZero;
+(BOOL)isRandomNumberSeedInspectionEnabled;
+(BOOL)isRenderingLocal;
+(BOOL)isResponsivenessLoggingEnabled;
+(BOOL)isSOATSImageExportTestEnabled;
+(BOOL)isTexturePreCachingDisabled;
+(BOOL)shouldBadgeMetalRendering;
+(BOOL)shouldDisableViewScaling;
+(BOOL)shouldEnableAnimationPluginDevelopment;
+(BOOL)shouldEnableDynamicBackgroundMultisampling;
+(BOOL)shouldEnableFullSpeedDynamicBackgrounds;
+(BOOL)shouldForceDisplayPreferredMode;
+(BOOL)willPluginClassAllowBlendingMotionBackgrounds:(Class)arg0 ;
+(NSUInteger)directionFromCustomAttributesDeliveryOption:(NSUInteger)arg0 ;
+(NSUInteger)randomBasicDirection;
+(NSUInteger)randomDirection;
+(id)CAAccelerationFromSFXActionAcceleration:(NSUInteger)arg0 ;
+(id)customAttributesArrayWithDeliveryOptions:(id)arg0 ;
+(id)customAttributesArrayWithJiggleIntensityOptions:(id)arg0 ;
+(id)customAttributesArrayWithTextDeliveryOptions:(id)arg0 ;
+(id)timingsArrayWithDirection:(NSUInteger)arg0 duration:(CGFloat)arg1 count:(NSUInteger)arg2 chunkDuration:(CGFloat)arg3 randomness:(CGFloat)arg4 randomGenerator:(id)arg5 ;
+(id)videoControllerSignpostLog;
+(struct CGRect )recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize )arg0 inContainerWithBounds:(struct CGRect )arg1 contentsScale:(CGFloat)arg2 isExternalDisplay:(BOOL)arg3 ;
+(void)getRecommendedPosition:(struct CGPoint *)arg0 andTransform:(struct CATransform3D *)arg1 toFitLayer:(id)arg2 inContainerWithBounds:(struct CGRect )arg3 contentsScale:(CGFloat)arg4 ;
+(void)hitPreviewButtonIfExists;
+(void)initialize;
+(void)updateDefaultsValues;


@end


#endif