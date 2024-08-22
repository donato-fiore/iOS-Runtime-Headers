// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOIDENTIFIEDMAPDATAREQUESTER_H
#define GEOIDENTIFIEDMAPDATAREQUESTER_H

@class NSString;
@protocol NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass;


#import "GEOSimpleTileRequester.h"

@interface GEOIdentifiedMapDataRequester : GEOSimpleTileRequester <NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(unk)tileSetForKey:(id)arg0  ;
+(unsigned char)tileProviderIdentifier;
-(BOOL)shouldDownloadToDiskForTileKey:(struct _GEOTileKey *)arg0 estimatedDataSize:(NSUInteger)arg1 ;
-(id)_urlComponentsForKey:(struct _GEOTileKey *)arg0 url:(id)arg1 ;
-(id)activeTileSetForKey:(struct _GEOTileKey *)arg0 ;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;
-(int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg0 ;


@end


#endif