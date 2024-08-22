// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWALLPAPERCOLLECTIONSMANAGER_H
#define WKWALLPAPERCOLLECTIONSMANAGER_H

@class NSFileManager, NSNotificationCenter, NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WKWallpaperCollectionsManager : NSObject

@property (retain, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (retain, nonatomic) NSNotificationCenter *_notificationCenter; // ivar: __notificationCenter
@property (retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable; // ivar: __wallpaperCollectionLookupTable
@property (retain, nonatomic) NSMutableArray *_wallpaperCollections; // ivar: __wallpaperCollections
@property (readonly, nonatomic) NSInteger numberOfWallpaperCollections;


+(id)defaultWallpaperCollectionsManager;
-(id)init;
-(id)wallpaperCollectionAtIndex:(NSInteger)arg0 ;
-(id)wallpaperCollectionWithIdentifier:(id)arg0 ;
-(void)_loadCollections;
-(void)_loadSystemWallpaperCollections;


@end


#endif