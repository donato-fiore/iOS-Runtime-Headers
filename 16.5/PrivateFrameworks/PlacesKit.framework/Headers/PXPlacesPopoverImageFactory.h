// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESPOPOVERIMAGEFACTORY_H
#define PXPLACESPOPOVERIMAGEFACTORY_H

@class NSCache, UIColor;

#import <Foundation/Foundation.h>


@interface PXPlacesPopoverImageFactory : NSObject

@property (retain, nonatomic) NSCache *cachedBackgroundImages; // ivar: _cachedBackgroundImages
@property (retain, nonatomic) UIColor *defaultBackgroundColor; // ivar: _defaultBackgroundColor


+(id)sharedInstance;
+(struct CGSize )backgroundImageSizeForType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(CGFloat)thumbnailTopMarginForImageType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg0 ;
-(id)_thumbnailShadowForType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg0 ;
-(id)backgroundImageNameForType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg0 ;
-(id)createPopoverImageForGeotaggable:(id)arg0 withImage:(struct CGImage *)arg1 imageType:(NSUInteger)arg2 imageOptions:(NSUInteger)arg3 usingTraitCollection:(id)arg4 ;
-(id)imageNamed:(id)arg0 ;
-(id)init;
-(struct CGImage *)newImage:(struct CGImage *)arg0 croppedToAspectRatio:(struct CGSize )arg1 ;
-(struct CGSize )backgroundImageSizeForPopoverAnnotation;
-(struct CGSize )backgroundImageSizeForType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 ;
-(struct CGSize )thumbnailImageSizeForImageType:(NSUInteger)arg0 usingTraitCollection:(id)arg1 includeScale:(BOOL)arg2 ;


@end


#endif