// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVOLTAIRETILEREQUESTER_H
#define GEOVOLTAIRETILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOVoltaireTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>

 {
    BOOL _hasUpdatedManifestForHTTP410;
}




+(unsigned char)tileProviderIdentifier;
-(BOOL)needsLocalizationForKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldAllowEmptyDataForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldDownloadToDiskForTileKey:(struct _GEOTileKey *)arg0 estimatedDataSize:(NSUInteger)arg1 ;
-(id)_deviceRegionSKUQueryItemForTileSet:(id)arg0 ;
-(id)_localizationURLForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)additionalAnalyticsStatesForKey:(struct _GEOTileKey *)arg0 ;
-(id)localizationURLForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg0 ;
-(void)failedLoadingTileForKey:(struct _GEOTileKey )arg0 baseOperation:(id)arg1 error:(id)arg2 ;


@end


#endif