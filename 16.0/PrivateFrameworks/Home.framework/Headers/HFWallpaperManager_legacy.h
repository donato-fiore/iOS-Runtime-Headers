// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFWALLPAPERMANAGER_LEGACY_H
#define HFWALLPAPERMANAGER_LEGACY_H

@class NSString, NSUserDefaults;
@protocol HFHomeManagerObserver, HFHomeObserver, HFNamedWallpaperSource;

#import <Foundation/Foundation.h>

#import "HFWallpaperFileManager.h"
#import "HFWallpaperImageCache.h"
#import "HFWallpaperLegacyFileManager.h"
#import "HFReaderWriterCache.h"

@interface HFWallpaperManager_legacy : NSObject <HFHomeManagerObserver, HFHomeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFWallpaperFileManager *fileManager; // ivar: _fileManager
@property (nonatomic) BOOL hasPreheatedCache; // ivar: _hasPreheatedCache
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFWallpaperImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager; // ivar: _legacyFileManager
@property (retain, nonatomic) NSObject<HFNamedWallpaperSource> *namedWallpaperSource; // ivar: _namedWallpaperSource
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) HFReaderWriterCache *wallpaperSlicesCache; // ivar: _wallpaperSlicesCache
@property (readonly, nonatomic) BOOL wallpaperSourceRegistered; // ivar: _wallpaperSourceRegistered
@property (retain, nonatomic) HFReaderWriterCache *wallpapersCache; // ivar: _wallpapersCache


+(id)sharedInstance;
-(NSInteger)_namedCollectionTypeForKey:(id)arg0 ;
-(id)_cachedWallpaperForKey:(id)arg0 ;
-(id)_cachedWallpaperSliceForIdentifier:(id)arg0 ;
-(id)_originalImageForWallpaper:(id)arg0 ;
-(id)_resolveHomeKitObjectForKey:(id)arg0 ;
-(id)_sliceFromWallpaper:(id)arg0 variant:(NSInteger)arg1 preloading:(BOOL)arg2 ;
-(id)_wallpaperForKey:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)allNamedWallpapersForCollection:(NSInteger)arg0 ;
-(id)defaultNamedWallpaperForCollection:(NSInteger)arg0 ;
-(id)generateProcessedImageFromWallpaper:(id)arg0 originalImage:(id)arg1 ;
-(id)imageForNamedWallpaper:(id)arg0 ;
-(id)init;
-(id)sliceFromWallpaper:(id)arg0 variant:(NSInteger)arg1 ;
-(id)wallpaperForHomeKitObject:(id)arg0 ;
-(void)_dispatchWallpaperChangedForKey:(id)arg0 ;
-(void)_logUserMetricsAfterSettingWallpaper;
-(void)_migrateIfNeeded;
-(void)_preloadWallpaperSlicesForKey:(id)arg0 ;
-(void)_preloadWallpapersForHome:(id)arg0 ;
-(void)_pruneUnusedWallpapers;
-(void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg0 ;
-(void)_setWallpaper:(id)arg0 image:(id)arg1 forHomeKitIdentifier:(id)arg2 ;
-(void)_setWallpaper:(id)arg0 image:(id)arg1 forKey:(id)arg2 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;
-(void)preheatCache;
-(void)registerWallpaperSource:(id)arg0 processedSource:(id)arg1 ;
-(void)setWallpaper:(id)arg0 image:(id)arg1 forHomeKitObject:(id)arg2 ;


@end


#endif