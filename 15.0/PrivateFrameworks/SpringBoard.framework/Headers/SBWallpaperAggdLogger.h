// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWALLPAPERAGGDLOGGER_H
#define SBWALLPAPERAGGDLOGGER_H

@class SBWallpaperDefaults;

#import <Foundation/Foundation.h>


@interface SBWallpaperAggdLogger : NSObject {
    NSInteger _aggd_lockscreenWallpaperType;
    NSInteger _aggd_lockscreenWallpaperIdentifier;
    NSInteger _aggd_homescreenWallpaperType;
    NSInteger _aggd_homescreenWallpaperIdentifier;
    NSInteger _aggd_irisWallpaperEnabled;
    NSInteger _aggd_sharedWallpaper;
    SBWallpaperDefaults *_wallpaperDefaults;
}




-(NSUInteger)_bucketedPlayCount;
-(id)_valueString;
-(id)init;
-(void)_clearAggdKeysForLocations:(NSInteger)arg0 ;
-(void)_resetPlayCountDate;
-(void)incrementIrisPlayCount;
-(void)saveWallpaperAggdCurrentValues;
-(void)updateWallpaperAggdKeysForLocations:(NSInteger)arg0 withHasVideo:(BOOL)arg1 hasProcedural:(BOOL)arg2 name:(id)arg3 ;


@end


#endif