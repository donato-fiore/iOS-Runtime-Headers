// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDEFAULTWALLPAPERMANAGER_H
#define WKDEFAULTWALLPAPERMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "WKWallpaperRepresentingCollectionsManager.h"
#import "WKWallpaperBundle.h"

@interface WKDefaultWallpaperManager : NSObject

@property (retain, nonatomic) WKWallpaperRepresentingCollectionsManager *_collectionsManager; // ivar: __collectionsManager
@property (retain, nonatomic) WKWallpaperBundle *_defaultWallpaperBundle; // ivar: __defaultWallpaperBundle
@property (retain, nonatomic) NSDictionary *_defaultWallpaperLookup; // ivar: __defaultWallpaperLookup


+(id)defaultWallpaperLookupURL;
+(id)defaultWallpaperManager;
-(id)_wallpaperRepresentingWithIdentifier:(id)arg0 ;
-(id)defaultWallpaperBundle;
-(id)deviceColor;
-(id)deviceEnclosureColor;
-(id)deviceLogicalScreenClass;
-(id)deviceProductType;
-(id)initWithCollectionsManager:(id)arg0 ;
-(void)_loadDefaultWallpaperFile;
-(void)_loadDefaultWallpaperInformation;


@end


#endif