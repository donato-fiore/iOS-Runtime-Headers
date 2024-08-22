// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMUNINMESHREQUESTER_H
#define GEOMUNINMESHREQUESTER_H



#import "GEOMuninTileRequester.h"

@interface GEOMuninMeshRequester : GEOMuninTileRequester



+(unsigned char)tileProviderIdentifier;
-(id)urlForTileKey:(struct _GEOTileKey *)arg0 ;


@end


#endif