// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTPLATFORMSETTINGS_H
#define TSCH3DCHARTPLATFORMSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *_settings;
}




+(BOOL)isMetalExcludedWithCapabilities:(id)arg0 ;
+(BOOL)p_isMetalEnabled;
+(id)p_defaultSettingsDictionary;
+(id)p_platformSettingsDictionary;
+(id)sharedInstance;
-(BOOL)backgroundLayoutUsesTiledRendering;
-(BOOL)buildImageDefaultAntialias;
-(BOOL)buildShouldDiscardBuffers;
-(BOOL)buildTextureRendersAsSingleImage;
-(BOOL)buildsCanUseDynamicShadows;
-(BOOL)buildsUseLowDetailedGeometries;
-(BOOL)interactiveCanvasCanUseHighQualityRenderer;
-(BOOL)interactiveModeUsesFastPerformanceHint;
-(BOOL)knobTrackingUsesRealTimePerformanceHint;
-(BOOL)protectCachedShaders;
-(BOOL)shouldHandleResourceCacheOutOfMemory;
-(BOOL)skipFirstMipmapLevel;
-(BOOL)useHighQualityShadows;
-(BOOL)useInteractiveModeWhileSelected;
-(BOOL)useLayoutInwardForInsertionIcons;
-(BOOL)useMetal;
-(BOOL)useTiledFullSizeInteractiveLayer;
-(CGFloat)backgroundLayoutContentsScaleFactor;
-(CGFloat)buildTargetFPS;
-(CGFloat)printingDPI;
-(NSUInteger)buildFramebufferMemoryLimitInBytes;
-(NSUInteger)buildImageTileSize;
-(NSUInteger)buildMultisamples;
-(NSUInteger)highQualityShadowsSize;
-(NSUInteger)insertionIconSupersamplingSamples;
-(NSUInteger)interactiveCanvasMultisamples;
-(NSUInteger)labelMaxTextureSize;
-(NSUInteger)printingMaxImageSize;
-(NSUInteger)resourceCacheMemoryLimitInBytes;
-(NSUInteger)supersamplingSamples;
-(NSUInteger)supersamplingTileSize;
-(float)normalizedLabelPickingSlackForViewScale:(CGFloat)arg0 viewport:(*void)arg1 ;
-(float)p_labelPickingSlack;
-(float)prefilteredLinesFilterRadius;
-(float)rotationTrackerSpeed;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(int)p_labelPickingSlackMethod;


@end


#endif