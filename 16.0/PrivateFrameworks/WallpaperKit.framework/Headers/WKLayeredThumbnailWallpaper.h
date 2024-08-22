// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKLAYEREDTHUMBNAILWALLPAPER_H
#define WKLAYEREDTHUMBNAILWALLPAPER_H

@class UIImage, NSString, NSURL;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"
#import "WKLayeredThumbnailWallpaperInput.h"

@interface WKLayeredThumbnailWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (retain, nonatomic) WKLayeredThumbnailWallpaperInput *_wallpaperValue; // ivar: __wallpaperValue
@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger representedType;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) NSUInteger type;


+(id)na_identity;
-(BOOL)copyWallpaperContentsToDestinationDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 type:(NSUInteger)arg2 representedType:(NSUInteger)arg3 backgroundThumbnailImageURL:(id)arg4 foregroundThumbnailImageURL:(id)arg5 floatingThumbnailImageURL:(id)arg6 ;
-(id)propertyListRepresentation;
-(id)wallpaperValue;


@end


#endif