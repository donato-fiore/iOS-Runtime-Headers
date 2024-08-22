// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFCARENDERERIMPL_H
#define SBFCARENDERERIMPL_H


#import <Foundation/Foundation.h>


@interface SBFCARendererImpl : NSObject



+(id)_actuallyRenderImage:(struct CGImage *)arg0 requiresBGRA:(BOOL)arg1 downsampleFactor:(CGFloat)arg2 layerCustomizer:(id)arg3 ;
+(id)luminanceTreatmentFilters;
+(id)renderMaterialImage:(struct CGImage *)arg0 recipeName:(id)arg1 containingBundle:(id)arg2 weighting:(CGFloat)arg3 downsampleFactor:(CGFloat)arg4 ;
+(id)renderTreatedWallpaperImage:(struct CGImage *)arg0 needsLuminanceTreatment:(BOOL)arg1 needsDimmingTreatment:(BOOL)arg2 downsampleFactor:(CGFloat)arg3 averageColor:(id)arg4 ;


@end


#endif