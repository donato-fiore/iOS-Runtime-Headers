// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKCURRENTWALLPAPERMANAGER_H
#define WKCURRENTWALLPAPERMANAGER_H

@class NSFileManager, NSNotificationCenter, NSUserDefaults, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKCurrentWallpaperManager : NSObject

@property (retain, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (retain, nonatomic) NSNotificationCenter *_notificationCenter; // ivar: __notificationCenter
@property (retain, nonatomic) NSUserDefaults *_userDefaults; // ivar: __userDefaults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_wallpaperChangeQueue; // ivar: __wallpaperChangeQueue
@property (readonly, copy, nonatomic) NSURL *wallpaperCollectionsDirectoryURL; // ivar: _wallpaperCollectionsDirectoryURL


+(id)sharedCurrentWallpaperManager;
-(id)initWithFileManager:(id)arg0 notificationCenter:(id)arg1 userDefaults:(id)arg2 wallpaperPhotoLibrary:(id)arg3 ;
-(void)setWallpaperRepresenting:(id)arg0 forWallpaperLocation:(id)arg1 completion:(id)arg2 ;
-(void)setWallpaperRepresenting:(id)arg0 forWallpaperLocation:(id)arg1 desiredCropRect:(struct CGRect )arg2 wallpaperOptions:(id)arg3 completion:(id)arg4 ;


@end


#endif