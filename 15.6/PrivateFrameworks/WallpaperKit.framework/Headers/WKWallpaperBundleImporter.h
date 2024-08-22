// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKWALLPAPERBUNDLEIMPORTER_H
#define WKWALLPAPERBUNDLEIMPORTER_H

@class NSDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKWallpaperBundleImporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue; // ivar: __bundleImportQueue
@property (retain, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection; // ivar: __wallpaperTypeToBundleCollection
@property (retain, nonatomic) NSArray *_wallpaperTypesOrdering; // ivar: __wallpaperTypesOrdering
@property (readonly, nonatomic) NSInteger numberOfWallpaperBundleCollections;


+(id)defaultWallpaperBundleImporter;
+(id)wallpapersConfigurationFileURL;
-(NSUInteger)wallpaperTypeAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)wallpaperBundleCollectionForWallpaperType:(NSUInteger)arg0 ;
-(id)wallpaperBundleWithIdentifier:(NSInteger)arg0 ;
-(void)_loadWallpapersFromDisk;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg0 ;


@end


#endif