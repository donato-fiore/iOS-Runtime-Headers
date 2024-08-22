// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERDEFAULTCONFIGURATION_H
#define PBUIWALLPAPERDEFAULTCONFIGURATION_H

@class NSString, NSDictionary, NSURL, UIColor;
@protocol NSCopying, BSDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PBUIWallpaperGradient.h"

@interface PBUIWallpaperDefaultConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier; // ivar: _proceduralWallpaperIdentifier
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions; // ivar: _proceduralWallpaperOptions
@property (readonly, copy, nonatomic) NSURL *staticImageURL; // ivar: _staticImageURL
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, copy, nonatomic) UIColor *wallpaperColor; // ivar: _wallpaperColor
@property (readonly, copy, nonatomic) NSString *wallpaperColorName; // ivar: _wallpaperColorName
@property (readonly, copy, nonatomic) PBUIWallpaperGradient *wallpaperGradient; // ivar: _wallpaperGradient
@property (readonly, nonatomic) NSInteger wallpaperType; // ivar: _wallpaperType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initColorWithColor:(id)arg0 ;
-(id)initColorWithColorName:(id)arg0 ;
-(id)initGradientWithGradient:(id)arg0 ;
-(id)initProceduralWithIdentifier:(id)arg0 options:(id)arg1 ;
-(id)initStaticWithImageURL:(id)arg0 ;
-(id)initVideoWithStaticImageURL:(id)arg0 videoURL:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif