// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVOLTAIRESIMPLE3DTILEREQUESTER_H
#define GEOVOLTAIRESIMPLE3DTILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>





+(unsigned char)tileProviderIdentifier;
-(BOOL)shouldDownloadToDiskForTileKey:(struct _GEOTileKey *)arg0 estimatedDataSize:(NSUInteger)arg1 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;
// -(unk)tileSetForKey:(id)arg0  ;
-(unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0 ;


@end


#endif