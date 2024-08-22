// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKSYSTEMWALLPAPERCOLLECTION_H
#define _WKSYSTEMWALLPAPERCOLLECTION_H

@class NSBundle, NSUUID, NSString, NSURL;


#import "WKWallpaperCollection.h"

@interface _WKSystemWallpaperCollection : WKWallpaperCollection

@property (retain, nonatomic) NSBundle *_bundleForLocalizationResources; // ivar: __bundleForLocalizationResources
@property (copy, nonatomic) NSUUID *_identifier; // ivar: __identifier
@property (copy, nonatomic) NSString *displayNameKey; // ivar: _displayNameKey
@property (readonly, nonatomic, getter=isLegacyContent) BOOL legacyContent; // ivar: _legacyContent
@property (readonly, nonatomic) NSURL *wallpaperCollectionURL; // ivar: _wallpaperCollectionURL


+(BOOL)shouldLoadWallpaperCollectionAtURL:(id)arg0 ;
+(id)_createTemporaryWallpaperCollectionWithImages:(id)arg0 videoAssetURLs:(id)arg1 wallpaperOptions:(id)arg2 error:(*id)arg3 ;
+(id)dynamicWallpaperCollection;
-(BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg0 ;
-(BOOL)isDynamicCollection;
-(NSInteger)numberOfWallpapers;
-(id)displayName;
-(id)identifier;
-(id)initWithURL:(id)arg0 ;
-(id)wallpaperBundleAtIndex:(NSInteger)arg0 ;
-(id)wallpaperRepresentingWithIdentifier:(id)arg0 ;
-(void)_loadCollectionContents;
-(void)_loadSystemContentForCollectionWithMetadata:(id)arg0 isLegacyContent:(BOOL)arg1 ;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg0 ;


@end


#endif