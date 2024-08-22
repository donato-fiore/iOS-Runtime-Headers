// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVISUALLOCALIZATIONTILEREQUESTER_H
#define GEOVISUALLOCALIZATIONTILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOVisualLocalizationTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>





+(unsigned char)tileProviderIdentifier;
-(BOOL)downloadsDataToDisk;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)additionalAnalyticsStatesForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif