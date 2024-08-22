// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOS2MAPTILEREQUESTER_H
#define GEOS2MAPTILEREQUESTER_H



#import "GEOSimpleTileRequester.h"

@interface GEOS2MapTileRequester : GEOSimpleTileRequester



+(unsigned char)tileProviderIdentifier;
-(BOOL)shouldDownloadToDiskForTileKey:(struct _GEOTileKey *)arg0 estimatedDataSize:(NSUInteger)arg1 ;
-(id)_localizationURLForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif