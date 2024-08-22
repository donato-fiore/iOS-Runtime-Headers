// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFWALLPAPERDEFAULTS_H
#define SBFWALLPAPERDEFAULTS_H


#import <Foundation/Foundation.h>

#import "SBWallpaperDefaults.h"

@interface SBFWallpaperDefaults : NSObject

@property (readonly, nonatomic) SBWallpaperDefaults *defaultsStore; // ivar: _defaultsStore


+(id)defaults;
-(BOOL)hasVideo;
-(BOOL)hasVideoForVariant:(NSInteger)arg0 ;
-(BOOL)isPortraitForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(BOOL)magnifyEnabledForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(BOOL)proceduralUserSetForVariant:(NSInteger)arg0 ;
-(BOOL)supportsCroppingForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(CGFloat)parallaxFactorForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(CGFloat)stillTimeInVideo;
-(CGFloat)stillTimeInVideoForVariant:(NSInteger)arg0 ;
-(CGFloat)zoomScaleForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)_defaultsWrapperForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)_keyForWallpaperMode:(NSInteger)arg0 ;
-(id)description;
-(id)imageHashForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDefaultsStore:(id)arg0 ;
-(id)nameForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)proceduralIdentifierForVariant:(NSInteger)arg0 ;
-(id)proceduralOptionsForVariant:(NSInteger)arg0 ;
-(id)wallpaperColorDataForVariant:(NSInteger)arg0 ;
-(id)wallpaperColorNameForVariant:(NSInteger)arg0 ;
-(id)wallpaperGradientDataForVariant:(NSInteger)arg0 ;
-(id)wallpaperKitDataForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperOptionsForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(struct CGRect )cropRectForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(void)_setDefaultsWithDictionary:(id)arg0 variant:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)_updateDefaultsForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 updater:(id)arg2 ;
-(void)resetCroppingDefaults;
-(void)resetDefaults;
-(void)resetHasVideoDefaults;
-(void)resetImageHashDefaults;
-(void)resetMagnifyDefaults;
-(void)resetNameDefaults;
-(void)resetParallaxFactorDefaults;
-(void)resetPortraitDefaults;
-(void)resetStillTimeInVideoDefaults;
-(void)resetWallpaperKitDataDefaults;
-(void)resetZoomScaleDefaults;
-(void)setColorData:(id)arg0 forLocations:(NSInteger)arg1 ;
-(void)setColorName:(id)arg0 forLocations:(NSInteger)arg1 ;
-(void)setCropRect:(struct CGRect )arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setGradientData:(id)arg0 forLocations:(NSInteger)arg1 ;
-(void)setHasVideo:(BOOL)arg0 ;
-(void)setImageHash:(id)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setMagnifyEnabled:(BOOL)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setName:(id)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setParallaxFactor:(CGFloat)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setPortrait:(BOOL)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setProceduralIdentifier:(id)arg0 forLocations:(NSInteger)arg1 ;
-(void)setProceduralOptions:(id)arg0 forLocations:(NSInteger)arg1 ;
-(void)setProceduralUserSet:(BOOL)arg0 forLocations:(NSInteger)arg1 ;
-(void)setStillTimeInVideo:(CGFloat)arg0 ;
-(void)setSupportsCropping:(BOOL)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setWallpaperKitData:(id)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setWallpaperOptions:(id)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)setZoomScale:(CGFloat)arg0 forLocations:(NSInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)updateDefaultsForLocations:(NSInteger)arg0 updater:(id)arg1 ;


@end


#endif