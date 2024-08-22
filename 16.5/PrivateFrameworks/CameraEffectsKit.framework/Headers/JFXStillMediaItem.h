// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXSTILLMEDIAITEM_H
#define JFXSTILLMEDIAITEM_H

@class PVColorSpace;


#import "JTAssetMediaItem.h"

@interface JFXStillMediaItem : JTAssetMediaItem

@property (nonatomic) BOOL hasGainMap; // ivar: _hasGainMap
@property (retain, nonatomic) PVColorSpace *imageColorSpace; // ivar: _imageColorSpace
@property (nonatomic) float meteorPlusHeadroom; // ivar: _meteorPlusHeadroom
@property (nonatomic) CGSize sourceImageSize; // ivar: _sourceImageSize


+(void)stillMediaItemWithLocalURL:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasPhotoCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isImageValid:(id)arg0 renderingIntent:(int)arg1 size:(struct CGSize *)arg2 ;
-(CGFloat)JT_maximumPixelsForStillImage:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)assetURL;
-(id)colorSpace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)info;
-(int)durationAt30fps;
-(struct CGImage *)hdrGainMapImageForURL:(id)arg0 renderingIntent:(int)arg1 ;
-(struct CGImage *)imageForURL:(id)arg0 renderingIntent:(int)arg1 ;
-(struct CGImage *)imageForURL:(id)arg0 renderingIntent:(int)arg1 useAuxillaryMap:(BOOL)arg2 ;
-(struct CGSize )exportImageSize:(struct CGSize )arg0 ;
-(struct CGSize )imageSizeForRenderingIntent:(int)arg0 originalSize:(struct CGSize )arg1 ;
-(struct CGSize )playBackImageSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeForMaxPixels:(CGFloat)arg0 sourceSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeForQuality:(int)arg0 ;
-(struct CGSize )thumbImageSize:(struct CGSize )arg0 ;
-(void)commonInit;
-(void)generateLocalURLForAsset;


@end


#endif