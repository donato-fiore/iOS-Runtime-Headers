// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKLEGACYWALLPAPERBUNDLELOADER_H
#define WKLEGACYWALLPAPERBUNDLELOADER_H

@class NSFileManager, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKLegacyWallpaperBundleLoader : NSObject

@property (retain, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue; // ivar: __loadingQueue
@property (retain, nonatomic) NSDictionary *_wallpaperBundleLookup; // ivar: __wallpaperBundleLookup


+(id)defaultWallpaperBundleLoader;
+(id)legacyWallpaperDirectories;
-(id)init;
-(id)wallpaperBundleForIdentifier:(NSInteger)arg0 ;
-(void)_loadAllValidWallpaperBundlesFromLegacyLocation;


@end


#endif