// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLEGACYVISUALLOCALIZATIONTILEREQUESTER_H
#define GEOLEGACYVISUALLOCALIZATIONTILEREQUESTER_H



#import "GEOVisualLocalizationTileRequester.h"

@interface GEOLegacyVisualLocalizationTileRequester : GEOVisualLocalizationTileRequester



+(unsigned char)tileProviderIdentifier;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif