// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPHOTOWALLPAPERBUNDLE_H
#define WKPHOTOWALLPAPERBUNDLE_H

@class NSDate, NSString, NSUUID, NSURL;
@protocol NAIdentifiable, WKWallpaperRepresenting;

#import <Foundation/Foundation.h>

#import "WKPhotoAssetWallpaper.h"

@interface WKPhotoWallpaperBundle : NSObject <NAIdentifiable, WKWallpaperRepresenting>



@property (retain, nonatomic) WKPhotoAssetWallpaper *_wallpaper; // ivar: __wallpaper
@property (readonly, nonatomic, getter=isAppearanceAware) BOOL appearanceAware;
@property (readonly, nonatomic) NSUInteger contentSource;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableParallax; // ivar: _disableParallax
@property (readonly, nonatomic, getter=hasDistinctWallpapersForLocations) BOOL distinctWallpapersForLocations;
@property (readonly, nonatomic, getter=isDynamicWallpaperBundle) BOOL dynamicWallpaperBundle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *identifierString;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)wallpaperBackingTypeForLocation:(id)arg0 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 ;
-(id)fileBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;
-(id)initWithPhotosAsset:(id)arg0 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 ;
-(id)valueBasedWallpaperForLocation:(id)arg0 andAppearance:(id)arg1 ;


@end


#endif