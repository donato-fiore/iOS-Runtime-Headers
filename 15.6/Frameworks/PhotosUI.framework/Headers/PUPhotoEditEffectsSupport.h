// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITEFFECTSSUPPORT_H
#define PUPHOTOEDITEFFECTSSUPPORT_H


#import <Foundation/Foundation.h>


@interface PUPhotoEditEffectsSupport : NSObject



+(NSInteger)lightingEffectTypeForIdentifier:(id)arg0 ;
+(id)identifierForLightingType:(NSInteger)arg0 lightingVersion:(NSInteger)arg1 ;
+(id)lightingEffectTypesByIdentifier;
+(void)_clearPortraitEffectsWithCompositionController:(id)arg0 ;
+(void)_clearStandardEffectsWithCompositionController:(id)arg0 ;
+(void)_setEffectFilterName:(id)arg0 withIntensity:(CGFloat)arg1 withVersion:(NSUInteger)arg2 forCompositionController:(id)arg3 ;
+(void)_setPortraitEffectEnabled:(BOOL)arg0 forCompositionController:(id)arg1 ;
+(void)_setPortraitEffectFilterName:(id)arg0 withVersion:(NSUInteger)arg1 forCompositionController:(id)arg2 portraitInfo:(id)arg3 spillMatteAllowed:(id)arg4 ;
+(void)updateCompositionController:(id)arg0 withDepthEnabled:(BOOL)arg1 ;
+(void)updateCompositionController:(id)arg0 withEffect:(id)arg1 intensity:(CGFloat)arg2 updateVersion:(BOOL)arg3 ;
+(void)updateCompositionController:(id)arg0 withEffect:(id)arg1 updateVersion:(BOOL)arg2 ;
+(void)updateCompositionController:(id)arg0 withLightingIdentifier:(id)arg1 portraitInfo:(id)arg2 spillMatteAllowed:(id)arg3 ;


@end


#endif