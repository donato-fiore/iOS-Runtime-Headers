// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVISUALLOCALIZATIONMETADATATILEREQUESTER_H
#define GEOVISUALLOCALIZATIONMETADATATILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOVisualLocalizationMetadataTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>





+(unsigned char)tileProviderIdentifier;
-(BOOL)downloadsDataToDisk;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif