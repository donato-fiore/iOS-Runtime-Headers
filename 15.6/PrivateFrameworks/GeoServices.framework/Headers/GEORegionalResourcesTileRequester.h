// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREGIONALRESOURCESTILEREQUESTER_H
#define GEOREGIONALRESOURCESTILEREQUESTER_H

@class NSMutableArray, geo_isolater;


#import "GEOTileRequester.h"
#import "GEOTileKeyMap.h"

@interface GEORegionalResourcesTileRequester : GEOTileRequester {
    NSMutableArray *_loaders;
    geo_isolater *_loadersIsolater;
    GEOTileKeyMap *_signpostIDs;
    geo_isolater *_signpostIDsIsolater;
}




+(unsigned char)tileProviderIdentifier;
-(id)initWithTileRequest:(id)arg0 delegateQueue:(id)arg1 delegate:(id)arg2 ;
-(void)_generateEndSignpostEventIfNecessary:(struct _GEOTileKey )arg0 ;
-(void)cancel;
-(void)start;


@end


#endif