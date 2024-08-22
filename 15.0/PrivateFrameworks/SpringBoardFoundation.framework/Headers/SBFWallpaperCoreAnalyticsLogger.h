// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFWALLPAPERCOREANALYTICSLOGGER_H
#define SBFWALLPAPERCOREANALYTICSLOGGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBWallpaperDefaults.h"

@interface SBFWallpaperCoreAnalyticsLogger : NSObject {
    SBWallpaperDefaults *_wallpaperDefaults;
    NSString *_homeName;
    NSString *_homeType;
    NSString *_lockName;
    NSString *_lockType;
    BOOL _irisEnabled;
    BOOL _sharedWallpaper;
}


@property (nonatomic) NSUInteger ageOfWallpaper; // ivar: _ageOfWallpaper


-(id)init;
-(void)saveStateOfWallpaperToCoreAnalytics:(NSInteger)arg0 withHasVideo:(BOOL)arg1 hasProcedural:(BOOL)arg2 name:(id)arg3 ;
-(void)sendStateOfWallpaperToCoreAnalytics;


@end


#endif