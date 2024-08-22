// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOMPOSITIONHELPER_H
#define PLCOMPOSITIONHELPER_H


#import <Foundation/Foundation.h>


@interface PLCompositionHelper : NSObject



+(BOOL)compositionController:(id)arg0 isCropConstraintEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isDepthIntensityEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isEffectFilterEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isEffectFilterIntensityEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isGeometryEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isPortraitEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg0 isPortraitIntensityEqualToCompositionController:(id)arg1 ;
+(BOOL)compositionControllerHasAnyAutoEnhancement:(id)arg0 ;
+(BOOL)compositionHasOvercaptureSourceSelection:(id)arg0 ;
+(BOOL)isIdentityCompositionController:(id)arg0 ;
+(BOOL)isIdentityCompositionController:(id)arg0 forKeys:(id)arg1 ;
+(BOOL)wantsSemanticEnhanceForCameraMetadata:(id)arg0 ;
+(id)activeEffectAdjustmentForCompositionController:(id)arg0 ;
+(id)adjustmentConstants;
+(id)defaultValueForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
+(id)identityValueForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
+(id)maxValueForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
+(id)minMaxValueForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
+(id)minValueForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
+(id)newIdentityCompositionController;
+(id)photosSchema;
+(id)updateReframeStateForAdjustmentData:(id)arg0 formatIdentifier:(id)arg1 formatVersion:(id)arg2 outFormatIdentifier:(*id)arg3 outFormatVersion:(*id)arg4 isReframed:(BOOL)arg5 ;
+(id)validatedCompositionCopyFor:(id)arg0 ;
+(id)validatedCompositionCopyFor:(id)arg0 mediaType:(NSInteger)arg1 ;
+(id)valueForCompositionController:(id)arg0 adjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)valueForType:(NSInteger)arg0 adjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(struct CGSize )synchronousInputSizeForCompositionController:(id)arg0 ;
+(void)compositionController:(id)arg0 setEffectFilterName:(id)arg1 version:(NSInteger)arg2 ;
+(void)compositionController:(id)arg0 setInputOrientation:(NSInteger)arg1 ;
+(void)compositionController:(id)arg0 updateSemanticEnhanceFromCameraMetadata:(id)arg1 exportProperties:(id)arg2 ;


@end


#endif