// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPFEATURETILEFINDER_H
#define GEOMAPFEATURETILEFINDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOTileLoader.h"
#import "_GEOMapFeatureAccessRequest.h"

@interface GEOMapFeatureTileFinder : NSObject {
    NSUInteger _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
    GEOTileLoader *_tileLoader;
    _GEOMapFeatureAccessRequest *_tileFinderRequest;
}


@property (nonatomic) BOOL allowStaleData; // ivar: _allowStaleData


// -(id)_findTilesInList:(id)arg0 allowNetwork:(BOOL)arg1 preloadToDiskOnly:(BOOL)arg2 queue:(id)arg3 handler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)_tileFinderRequest;
-(id)_tileLoaderClientIdentifier;
// -(id)findTileWithKey:(struct _GEOTileKey )arg0 allowNetwork:(BOOL)arg1 queue:(id)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findTilesAround:(struct ? )arg0 radius:(CGFloat)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)initWithZoomLevel:(NSUInteger)arg0 tileSize:(int)arg1 tileScale:(int)arg2 tileSetStyle:(int)arg3 tileLoader:(id)arg4 ;
-(id)preloadTilesAround:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(struct _GEOTileKey )tileKeyWithX:(unsigned int)arg0 y:(unsigned int)arg1 ;
-(void)setExistingRequest:(id)arg0 ;


@end


#endif