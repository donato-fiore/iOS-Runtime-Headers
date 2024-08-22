// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKDYNAMICWALLPAPER_H
#define WKDYNAMICWALLPAPER_H

@class NSDictionary, UIImage, NSString;
@protocol WKValueBasedWallpaper;


#import "WKAbstractWallpaper.h"

@interface WKDynamicWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>



@property (retain, nonatomic) NSDictionary *_dynamicDictionary; // ivar: __dynamicDictionary
@property (retain, nonatomic) UIImage *_thumbnailImage; // ivar: __thumbnailImage
@property (readonly, nonatomic) NSUInteger backingType;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger type;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 dictionary:(id)arg1 ;
-(id)initWithIdentifier:(NSInteger)arg0 name:(id)arg1 ;
-(id)thumbnailImage;
-(id)wallpaperValue;


@end


#endif