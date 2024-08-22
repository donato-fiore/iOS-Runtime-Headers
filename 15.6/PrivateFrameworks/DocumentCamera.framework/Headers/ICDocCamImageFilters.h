// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMIMAGEFILTERS_H
#define ICDOCCAMIMAGEFILTERS_H


#import <Foundation/Foundation.h>


@interface ICDocCamImageFilters : NSObject



+(id)bradleyAdaptiveThreshold:(id)arg0 ;
+(id)bradleyAdaptiveThreshold:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)bradleyAdaptiveThresholdWithBlur:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)colorDocument:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)convertImageToGrayScale:(id)arg0 ;
+(id)filteredImage:(id)arg0 imageFilterType:(short)arg1 ;
+(id)filteredImage:(id)arg0 orientation:(NSInteger)arg1 imageFilterType:(short)arg2 ;
+(id)grayscale:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)grayscaleDocument:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)imageFilterNames;
+(id)imageWithRGBColorspaceFromImage:(id)arg0 ;
+(id)localizedImageFilterNameForName:(id)arg0 ;
+(id)localizedImageFilterNameForType:(short)arg0 ;
+(id)nonLocalizedImageFilterNameForType:(short)arg0 ;
+(id)nonLocalizedImageFilterNames;
+(id)perspectiveCorrectedCIImageFromCIImage:(id)arg0 imageQuad:(id)arg1 ;
+(id)perspectiveCorrectedImageFromImage:(id)arg0 imageQuad:(id)arg1 ;
+(id)perspectiveCorrectedImageFromImage:(id)arg0 normalizedImageQuad:(id)arg1 ;
+(id)sharedCoreImageContext;
+(id)whiteboardAndSaturation:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)whiteboardFilter:(id)arg0 orientation:(NSInteger)arg1 ;
+(short)imageFilterTypeFromName:(id)arg0 ;
+(short)imageFilterTypeFromNonLocalizedName:(id)arg0 ;


@end


#endif