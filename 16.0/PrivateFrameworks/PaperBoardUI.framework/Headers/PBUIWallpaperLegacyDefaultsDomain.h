// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERLEGACYDEFAULTSDOMAIN_H
#define PBUIWALLPAPERLEGACYDEFAULTSDOMAIN_H

@class BSAbstractDefaultDomain, NSData, NSString, NSDictionary;



@interface PBUIWallpaperLegacyDefaultsDomain : BSAbstractDefaultDomain

@property (retain, nonatomic) NSData *homeScreenColorData;
@property (retain, nonatomic) NSString *homeScreenColorName;
@property (retain, nonatomic) NSString *homeScreenCropRectString;
@property (retain, nonatomic) NSData *homeScreenGradientData;
@property (retain, nonatomic) NSData *homeScreenImageHashData;
@property (nonatomic) BOOL homeScreenMagnifyEnabled;
@property (nonatomic) CGFloat homeScreenParallaxFactor;
@property (nonatomic) BOOL homeScreenPortrait;
@property (nonatomic) BOOL homeScreenSupportsCropping;
@property (retain, nonatomic) NSString *homeScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *homeScreenWallpaperKitData;
@property (retain, nonatomic) NSString *homeScreenWallpaperName;
@property (retain, nonatomic) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) BOOL homeScreenWallpaperWasUserSet;
@property (nonatomic) CGFloat homeScreenZoomScale;
@property (retain, nonatomic) NSData *lockScreenColorData;
@property (retain, nonatomic) NSString *lockScreenColorName;
@property (retain, nonatomic) NSString *lockScreenCropRectString;
@property (retain, nonatomic) NSData *lockScreenGradientData;
@property (nonatomic) BOOL lockScreenHasVideo;
@property (retain, nonatomic) NSData *lockScreenImageHashData;
@property (nonatomic) BOOL lockScreenMagnifyEnabled;
@property (nonatomic) CGFloat lockScreenParallaxFactor;
@property (nonatomic) BOOL lockScreenPortrait;
@property (nonatomic) CGFloat lockScreenStillTimeInVideo;
@property (nonatomic) BOOL lockScreenSupportsCropping;
@property (retain, nonatomic) NSString *lockScreenWallpaperIdentifier;
@property (retain, nonatomic) NSDictionary *lockScreenWallpaperKitData;
@property (retain, nonatomic) NSString *lockScreenWallpaperName;
@property (retain, nonatomic) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) BOOL lockScreenWallpaperWasUserSet;
@property (nonatomic) CGFloat lockScreenZoomScale;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif