// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKLAYEREDSTRIPEWALLPAPER_H
#define WKLAYEREDSTRIPEWALLPAPER_H

@class UIImage, NSString, NSURL;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"
#import "WKLayeredStripeWallpaperInput.h"

@interface WKLayeredStripeWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (retain, nonatomic) WKLayeredStripeWallpaperInput *_wallpaperValue; // ivar: __wallpaperValue
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
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 backgroundColor:(id)arg2 stripeAngleDegrees:(CGFloat)arg3 stripeHeightFactor:(CGFloat)arg4 firstStripeOffsetScaleFactor:(CGFloat)arg5 ;
-(id)propertyListRepresentation;
-(id)wallpaperValue;


@end


#endif