// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUIWALLPAPERSERVICE_H
#define SBSUIWALLPAPERSERVICE_H


#import <Foundation/Foundation.h>


@interface SBSUIWallpaperService : NSObject



+(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forLocations:(id)arg2 ;
+(BOOL)setWallpaperGradient:(id)arg0 forLocations:(id)arg1 ;
+(BOOL)setWallpaperImage:(id)arg0 adjustedImage:(id)arg1 thumbnailData:(id)arg2 imageHashData:(id)arg3 wallpaperOptions:(id)arg4 forLocations:(id)arg5 currentWallpaperMode:(id)arg6 ;
+(BOOL)setWallpaperWithVideo:(id)arg0 sandboxToken:(id)arg1 cropRect:(id)arg2 wallpaperMode:(id)arg3 ;
+(id)_remoteTargetForServiceClientConnection:(id)arg0 ;
+(id)_setupAndActivateServiceClientConnection;
+(id)getWallpaperLegibilitySettingsForVariant:(id)arg0 ;
+(id)getWallpaperOptionsForVariant:(id)arg0 ;
+(void)removeWallpaperVideo;
+(void)restoreDefaultWallpaper;
+(void)setProceduralWallpaperIdentifier:(id)arg0 options:(id)arg1 locations:(id)arg2 ;


@end


#endif