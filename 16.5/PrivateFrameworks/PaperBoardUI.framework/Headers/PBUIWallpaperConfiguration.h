// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERCONFIGURATION_H
#define PBUIWALLPAPERCONFIGURATION_H

@class NSString, NSURL, NSDictionary, UIColor, NSData, UIImage;
@protocol NSCopying, BSDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PBUIWallpaperGradient.h"
#import "PBUIWallpaperImage.h"
#import "PBUIWallpaperOptions.h"

@interface PBUIWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsInactiveAppearanceTreatment; // ivar: _needsInactiveAppearanceTreatment
@property (nonatomic) BOOL needsWallpaperDimmingTreatment; // ivar: _needsWallpaperDimmingTreatment
@property (copy, nonatomic) NSURL *originalVideoURL; // ivar: _originalVideoURL
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property (copy, nonatomic) NSDictionary *proceduralWallpaperInfo; // ivar: _proceduralWallpaperInfo
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant
@property (copy, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (copy, nonatomic) UIColor *wallpaperColor; // ivar: _wallpaperColor
@property (copy, nonatomic) NSString *wallpaperColorName; // ivar: _wallpaperColorName
@property (copy, nonatomic) PBUIWallpaperGradient *wallpaperGradient; // ivar: _wallpaperGradient
@property (retain, nonatomic) PBUIWallpaperImage *wallpaperImage; // ivar: _wallpaperImage
@property (copy, nonatomic) NSData *wallpaperImageHashData; // ivar: _wallpaperImageHashData
@property (copy, nonatomic) PBUIWallpaperOptions *wallpaperOptions; // ivar: _wallpaperOptions
@property (retain, nonatomic) UIImage *wallpaperOriginalImage; // ivar: _wallpaperOriginalImage
@property (retain, nonatomic) UIImage *wallpaperThumbnailImage; // ivar: _wallpaperThumbnailImage
@property (copy, nonatomic) NSData *wallpaperThumbnailImageData; // ivar: _wallpaperThumbnailImageData
@property (readonly, nonatomic) NSInteger wallpaperType; // ivar: _wallpaperType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariant:(NSInteger)arg0 type:(NSInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif