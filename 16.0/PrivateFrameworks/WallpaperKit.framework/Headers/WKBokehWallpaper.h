// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBOKEHWALLPAPER_H
#define WKBOKEHWALLPAPER_H

@class UIImage, NSString, NSURL;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"
#import "WKBokehWallpaperInput.h"

@interface WKBokehWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (retain, nonatomic) WKBokehWallpaperInput *_wallpaperValue; // ivar: __wallpaperValue
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
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 backgroundColors:(id)arg2 bubbleColors:(id)arg3 bubbleCount:(NSUInteger)arg4 bubbleScale:(CGFloat)arg5 parallaxMultiplier:(CGFloat)arg6 thumbnailSeed:(NSUInteger)arg7 ;
-(id)propertyListRepresentation;
-(id)wallpaperValue;


@end


#endif