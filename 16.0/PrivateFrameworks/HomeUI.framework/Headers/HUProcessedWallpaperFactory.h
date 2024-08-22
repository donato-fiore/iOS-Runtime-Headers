// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPROCESSEDWALLPAPERFACTORY_H
#define HUPROCESSEDWALLPAPERFACTORY_H

@class NSString, NSArray;
@protocol HFProcessedWallpaperSource;

#import <Foundation/Foundation.h>


@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger processVersionNumber;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *supportedVariants;


+(id)_defaultBackdropSettings;
-(id)_croppedImageFromWallpaper:(id)arg0 image:(id)arg1 ;
-(id)_darkContentBlurredImageForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)_imageByApplyingLayerEffects:(id)arg0 toImage:(id)arg1 ;
-(id)_layerWithCompositingFilterType:(id)arg0 color:(id)arg1 ;
-(id)_lightContentBlurredImageForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)_processedImageForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)applyCustomFilterForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)generateFilteredImageForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)processedImageForVariant:(NSInteger)arg0 wallpaper:(id)arg1 image:(id)arg2 ;
-(struct CGRect )_scaledCropRectForBounds:(struct CGRect )arg0 wallpaper:(id)arg1 image:(id)arg2 ;


@end


#endif