// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSYSTEMSHELLWALLPAPERMANAGER_H
#define WKSYSTEMSHELLWALLPAPERMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKSystemShellWallpaperManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_setWallpaperQueue; // ivar: __setWallpaperQueue


+(NSInteger)_currentWallpaperMode;
+(id)sharedManager;
-(id)init;
-(void)setHomeScreenWallpaperRepresenting:(id)arg0 completion:(id)arg1 ;
-(void)setLockScreenWallpaperRepresenting:(id)arg0 mirrorToHomeScreen:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif