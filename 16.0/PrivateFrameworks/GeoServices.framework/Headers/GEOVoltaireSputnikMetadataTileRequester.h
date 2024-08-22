// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVOLTAIRESPUTNIKMETADATATILEREQUESTER_H
#define GEOVOLTAIRESPUTNIKMETADATATILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOVoltaireSputnikMetadataTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>





+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;
// -(unk)tileSetForKey:(id)arg0  ;
-(unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0 ;


@end


#endif