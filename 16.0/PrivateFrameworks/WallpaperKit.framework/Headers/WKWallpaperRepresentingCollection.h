// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWALLPAPERREPRESENTINGCOLLECTION_H
#define WKWALLPAPERREPRESENTINGCOLLECTION_H

@class NSMutableArray, NSMapTable, NSString, NSUUID;
@protocol WKWallpaperRepresenting;

#import <Foundation/Foundation.h>

#import "WKWallpaperBundleDownloadManager.h"

@interface WKWallpaperRepresentingCollection : NSObject

@property (retain, nonatomic) NSMutableArray *_wallpaperBundles; // ivar: __wallpaperBundles
@property (retain, nonatomic) NSMapTable *_wallpaperLookupTable; // ivar: __wallpaperLookupTable
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) WKWallpaperBundleDownloadManager *downloadManager; // ivar: _downloadManager
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger numberOfWallpapers;
@property (readonly, nonatomic) NSObject<WKWallpaperRepresenting> *previewWallpaperRepresenting; // ivar: _previewWallpaperRepresenting
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (readonly, nonatomic) BOOL supportsDownloading;
@property (retain, nonatomic) NSString *wallpaperCollectionIdentifier; // ivar: _wallpaperCollectionIdentifier
@property (readonly, nonatomic) BOOL wallpapersShareBaseAppearance; // ivar: _wallpapersShareBaseAppearance


+(BOOL)shouldLoadWallpaperCollectionAtURL:(id)arg0 ;
+(id)_loadCollectionMetadataWithURL:(id)arg0 ;
+(id)_loadWallpaperRepresentingContentFromURL:(id)arg0 collectionMetadata:(id)arg1 isLegacyContent:(BOOL)arg2 ;
+(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg0 collectionURL:(id)arg1 ;
-(BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg0 ;
-(id)initWithURL:(id)arg0 downloadManager:(id)arg1 ;
-(id)initWithWallpaperCollectionIdentifier:(id)arg0 displayName:(id)arg1 previewWallpaperRepresenting:(id)arg2 wallpapersShareBaseAppearance:(BOOL)arg3 wallpaperRepresentingCollection:(id)arg4 downloadManager:(id)arg5 ;
-(id)wallpaperBundleAtIndex:(NSInteger)arg0 ;
-(id)wallpaperRepresentingWithIdentifier:(id)arg0 ;
-(void)cancelDownloadForWallpaperRepresentingWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)downloadWallpaperRepresentingWithIdentifier:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;


@end


#endif