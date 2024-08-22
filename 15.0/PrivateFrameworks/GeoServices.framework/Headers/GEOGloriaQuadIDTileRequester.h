// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGLORIAQUADIDTILEREQUESTER_H
#define GEOGLORIAQUADIDTILEREQUESTER_H



#import "GEOSimpleTileRequester.h"

@interface GEOGloriaQuadIDTileRequester : GEOSimpleTileRequester



+(unsigned char)tileProviderIdentifier;
-(BOOL)_shouldReportAnalyticsForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)downloadsDataToDisk;
-(BOOL)shouldReportAnalyticsOnErrorForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnErrorWithRetryForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)shouldReportAnalyticsOnSuccessForTileKey:(struct _GEOTileKey *)arg0 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)processTileData:(id)arg0 forKey:(struct _GEOTileKey *)arg1 error:(*id)arg2 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif