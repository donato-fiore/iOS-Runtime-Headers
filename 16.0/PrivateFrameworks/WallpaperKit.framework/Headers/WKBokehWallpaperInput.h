// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBOKEHWALLPAPERINPUT_H
#define WKBOKEHWALLPAPERINPUT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKBokehWallpaperInput : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *backgroundColors; // ivar: _backgroundColors
@property (readonly, copy, nonatomic) NSArray *bubbleColors; // ivar: _bubbleColors
@property (readonly, nonatomic) NSUInteger bubbleCount; // ivar: _bubbleCount
@property (readonly, nonatomic) CGFloat bubbleScale; // ivar: _bubbleScale
@property (readonly, nonatomic) CGFloat parallaxMultiplier; // ivar: _parallaxMultiplier
@property (readonly, nonatomic) NSUInteger thumbnailSeed; // ivar: _thumbnailSeed


+(id)na_identity;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)init;
-(id)initWithBackgroundColors:(id)arg0 bubbleColors:(id)arg1 bubbleCount:(NSUInteger)arg2 bubbleScale:(CGFloat)arg3 parallaxMultiplier:(CGFloat)arg4 thumbnailSeed:(NSUInteger)arg5 ;
-(id)wk_descriptionBuilder;


@end


#endif