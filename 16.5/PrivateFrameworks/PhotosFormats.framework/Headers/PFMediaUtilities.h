// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFMEDIAUTILITIES_H
#define PFMEDIAUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFMediaUtilities : NSObject



+(BOOL)canGenerateImageDerivativesFromType:(id)arg0 ;
+(BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg0 ;
+(BOOL)embeddedJPEGSuitableForDerivativesInImageOfType:(id)arg0 url:(id)arg1 imageProperties:(id)arg2 ;
+(BOOL)embeddedJPEGSuitableForDerivativesInRawImageProperties:(id)arg0 enforcePixelCountLimits:(BOOL)arg1 ;
+(BOOL)isValidAVFileForURL:(id)arg0 ;
+(BOOL)isValidImageFileForURL:(id)arg0 ;
+(BOOL)typeRequiresRasterizationDPI:(id)arg0 ;
+(NSInteger)defaultRasterizationDPI;
+(NSInteger)devicePerformanceMemoryClass;
+(NSInteger)rawSourceMaximumPixelCountForBackgroundProcessing;
+(NSInteger)rawSourceMaximumPixelCountForInteractiveEditing;
+(id)formattedCameraModelFromCameraModel:(id)arg0 cameraMake:(id)arg1 ;
+(id)imagePropertiesFromImageSource:(struct CGImageSource *)arg0 ;
+(id)imagePropertiesFromImageSource:(struct CGImageSource *)arg0 atIndex:(NSUInteger)arg1 ;
+(id)mainVideoTrackForAsset:(id)arg0 ;
+(id)stringFromFourCharCode:(unsigned int)arg0 ;
+(struct CGSize )maximumImageSizeFromProperties:(id)arg0 ;


@end


#endif