// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATURETILEFINDER_H
#define GEOMAPFEATURETILEFINDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_GEOMapFeatureAccessRequestParameters.h"
#import "GEOTileLoader.h"
#import "_GEOMapFeatureAccessRequest.h"

@interface GEOMapFeatureTileFinder : NSObject {
    _GEOMapFeatureAccessRequestParameters *_requestParameters;
    NSUInteger _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
    GEOTileLoader *_tileLoader;
    _GEOMapFeatureAccessRequest *_tileFinderRequest;
}




// -(id)_findTilesInList:(id)arg0 preloadToDiskOnly:(BOOL)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)_tileFinderRequest;
-(id)_tileLoaderClientIdentifier;
// -(id)findTileWithKey:(struct _GEOTileKey )arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTilesAround:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)initWithZoomLevel:(NSUInteger)arg0 tileSize:(int)arg1 tileScale:(int)arg2 tileSetStyle:(int)arg3 requestParameters:(id)arg4 ;
-(id)preloadTilesAround:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 completionHandler:(id)arg3 ;
-(struct _GEOTileKey )tileKeyWithX:(unsigned int)arg0 y:(unsigned int)arg1 ;
-(void)setExistingRequest:(id)arg0 ;


@end


#endif