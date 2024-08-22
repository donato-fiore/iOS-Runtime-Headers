// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWALLPAPERBUNDLECOLLECTION_H
#define WKWALLPAPERBUNDLECOLLECTION_H

@class NSMutableArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "WKWallpaperBundle.h"

@interface WKWallpaperBundleCollection : NSObject

@property (retain, nonatomic) NSMutableArray *_wallpaperBundles; // ivar: __wallpaperBundles
@property (retain, nonatomic) NSMutableDictionary *_wallpaperLookup; // ivar: __wallpaperLookup
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (retain, nonatomic) WKWallpaperBundle *previewBundle; // ivar: _previewBundle
@property (nonatomic) NSUInteger wallpaperType; // ivar: _wallpaperType


-(id)initWithWallpaperType:(NSUInteger)arg0 previewBundle:(id)arg1 ;
-(id)wallpaperBundleAtIndex:(NSInteger)arg0 ;
-(id)wallpaperBundleWithIdentifier:(NSInteger)arg0 ;
-(void)appendWallpaperBundle:(id)arg0 ;


@end


#endif