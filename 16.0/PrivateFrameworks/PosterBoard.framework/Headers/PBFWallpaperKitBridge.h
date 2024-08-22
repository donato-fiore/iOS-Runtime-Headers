// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFWALLPAPERKITBRIDGE_H
#define PBFWALLPAPERKITBRIDGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PBFWallpaperKitBridge : NSObject

@property (readonly, nonatomic) BOOL dataMigratorDeterminedLegacyWallpaperMigrationRequired;
@property (readonly, nonatomic) NSString *defaultWallpaperIdentifier;
@property (readonly, nonatomic) BOOL shouldInstallCollectionsPosterAsDefaultLockScreenWallpaper;


+(id)defaultBridge;
-(void)clearLegacyWallpaperMigrationKeys;


@end


#endif