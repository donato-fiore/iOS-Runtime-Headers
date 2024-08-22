// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSUIWALLPAPER_H
#define CRSUIWALLPAPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRSUIWallpaper : NSObject

@property (readonly, nonatomic) BOOL iconLabelsRequireBackground; // ivar: _iconLabelsRequireBackground
@property (readonly, nonatomic) BOOL supportsDashboardPlatterMaterials; // ivar: _supportsDashboardPlatterMaterials
@property (readonly, nonatomic) BOOL supportsDynamicAppearance; // ivar: _supportsDynamicAppearance
@property (retain, nonatomic) NSString *thumbnailAssetCatalogName; // ivar: _thumbnailAssetCatalogName
@property (retain, nonatomic) NSString *wallpaperAssetCatalogName; // ivar: _wallpaperAssetCatalogName
@property (readonly, copy, nonatomic) NSString *wallpaperIdentifier; // ivar: _wallpaperIdentifier


+(id)_wallpaperInfo;
-(id)description;
-(id)initWithWallpaperIdentifier:(id)arg0 ;
-(id)thumbnailColor;
-(id)thumbnailImageCompatibleWithTraitCollection:(id)arg0 ;
-(id)wallpaperColor;
-(id)wallpaperImageCompatibleWithTraitCollection:(id)arg0 ;


@end


#endif