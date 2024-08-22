// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPHOTOASSETWALLPAPER_H
#define WKPHOTOASSETWALLPAPER_H

@class PHAsset, NSString;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"

@interface WKPhotoAssetWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) PHAsset *_asset; // ivar: __asset
@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger type;


-(id)initWithPhotoAsset:(id)arg0 ;
-(id)thumbnailImage;
-(id)wallpaperValue;


@end


#endif