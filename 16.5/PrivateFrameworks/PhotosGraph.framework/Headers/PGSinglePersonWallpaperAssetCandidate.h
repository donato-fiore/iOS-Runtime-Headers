// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSINGLEPERSONWALLPAPERASSETCANDIDATE_H
#define PGSINGLEPERSONWALLPAPERASSETCANDIDATE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PGSinglePersonWallpaperAssetCandidate : NSObject

@property (readonly) CGFloat aestheticScore; // ivar: _aestheticScore
@property (readonly) NSString *assetUUID; // ivar: _assetUUID
@property (readonly) NSDate *creationDate; // ivar: _creationDate
@property (readonly) BOOL isFavorite; // ivar: _isFavorite
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) CGFloat wallpaperScore; // ivar: _wallpaperScore


-(id)initWithFace:(id)arg0 inAsset:(id)arg1 ;


@end


#endif