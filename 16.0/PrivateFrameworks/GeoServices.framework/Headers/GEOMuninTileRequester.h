// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMUNINTILEREQUESTER_H
#define GEOMUNINTILEREQUESTER_H

@protocol GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOMuninTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>





+(unsigned char)tileProviderIdentifier;
-(BOOL)shouldReportAnalyticsOnErrorForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnErrorWithRetryForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnSuccessForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)additionalAnalyticsStatesForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(struct ? )kindForTileKey:(struct _GEOTileKey *)arg0 ;
// -(unk)tileSetForKey:(id)arg0  ;
-(unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg0 ;


@end


#endif