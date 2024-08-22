// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERDEFAULTSWRAPPER_H
#define PBUIWALLPAPERDEFAULTSWRAPPER_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperDefaultsWrapper : NSObject

@property (retain, nonatomic) NSData *colorData; // ivar: _colorData
@property (retain, nonatomic) NSString *colorName; // ivar: _colorName
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (retain, nonatomic) NSData *gradientData; // ivar: _gradientData
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (retain, nonatomic) NSData *imageHashData; // ivar: _imageHashData
@property (nonatomic) BOOL magnifyEnabled; // ivar: _magnifyEnabled
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (nonatomic) BOOL portrait; // ivar: _portrait
@property (nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (nonatomic) BOOL supportsCropping; // ivar: _supportsCropping
@property (retain, nonatomic) NSString *wallpaperIdentifier; // ivar: _wallpaperIdentifier
@property (retain, nonatomic) NSDictionary *wallpaperKitData; // ivar: _wallpaperKitData
@property (nonatomic) NSInteger wallpaperMode; // ivar: _wallpaperMode
@property (retain, nonatomic) NSString *wallpaperName; // ivar: _wallpaperName
@property (retain, nonatomic) NSDictionary *wallpaperOptions; // ivar: _wallpaperOptions
@property (nonatomic) BOOL wallpaperWasUserSet; // ivar: _wallpaperWasUserSet
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


+(id)homeScreenWrapperForLegacyDefaults:(id)arg0 ;
+(id)lockScreenWrapperForLegacyDefaults:(id)arg0 ;
-(id)initWithWallpaperDefaultsDict:(id)arg0 ;
-(id)wallpaperDefaultsDict;


@end


#endif