// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOFEATURESPECIFICSIMPLETILEREQUESTER_H
#define GEOFEATURESPECIFICSIMPLETILEREQUESTER_H



#import "GEOVoltaireTileRequester.h"

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireTileRequester



+(unsigned char)tileProviderIdentifier;
-(BOOL)tileDataIsCacheableForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)_localizationURLForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct _GEOTileKey )_regularTileKeyForTransitLineSelectionTileKey:(struct _GEOTileKey *)arg0 muid:(*NSUInteger)arg1 ;


@end


#endif