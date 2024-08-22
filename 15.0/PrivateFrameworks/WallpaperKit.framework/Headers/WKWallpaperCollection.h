// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKWALLPAPERCOLLECTION_H
#define WKWALLPAPERCOLLECTION_H

@class NSBundle, NSFileManager, NSMutableArray, NSMapTable, NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface WKWallpaperCollection : NSObject

@property (retain, nonatomic) NSBundle *_bundleForLocalizationResources; // ivar: __bundleForLocalizationResources
@property (retain, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles; // ivar: __wallpaperBundles
@property (retain, nonatomic) NSMapTable *_wallpaperLookupTable; // ivar: __wallpaperLookupTable
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isDynamicCollection) BOOL dynamicCollection;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSInteger numberOfWallpapers;
@property (readonly, nonatomic) NSUInteger source; // ivar: _source


-(BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg0 ;
-(id)initWithSource:(NSUInteger)arg0 ;
-(id)wallpaperBundleAtIndex:(NSInteger)arg0 ;
-(id)wallpaperRepresentingWithIdentifier:(id)arg0 ;


@end


#endif