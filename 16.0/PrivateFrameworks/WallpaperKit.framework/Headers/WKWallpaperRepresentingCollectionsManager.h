// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWALLPAPERREPRESENTINGCOLLECTIONSMANAGER_H
#define WKWALLPAPERREPRESENTINGCOLLECTIONSMANAGER_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>

#import "WKWallpaperBundleDownloadManager.h"

@interface WKWallpaperRepresentingCollectionsManager : NSObject

@property (retain, nonatomic) WKWallpaperBundleDownloadManager *_downloadManager; // ivar: __downloadManager
@property (nonatomic) BOOL _loadLegacyContent; // ivar: __loadLegacyContent
@property (retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable; // ivar: __wallpaperCollectionLookupTable
@property (retain, nonatomic) NSMutableArray *_wallpaperCollections; // ivar: __wallpaperCollections
@property (readonly, nonatomic) NSInteger numberOfWallpaperCollections;


+(id)defaultLegacyManager;
+(id)defaultManager;
-(id)initWithDownloadManager:(id)arg0 loadLegacyContent:(BOOL)arg1 ;
-(id)wallpaperCollectionAtIndex:(NSInteger)arg0 ;
-(id)wallpaperCollectionWithIdentifier:(id)arg0 ;
-(void)_loadCollections;
-(void)_loadLegacySystemWallpaperCollections;
-(void)_loadSystemWallpaperCollections;


@end


#endif