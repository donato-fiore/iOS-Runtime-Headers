// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILESERVERLOCALPROXYBATCHCONTEXT_H
#define GEOTILESERVERLOCALPROXYBATCHCONTEXT_H


#import <Foundation/Foundation.h>

#import "GEOTileKeyList.h"
#import "GEOTileRequester.h"

@interface GEOTileServerLocalProxyBatchContext : NSObject

@property (retain, nonatomic) GEOTileKeyList *cacheMissNoDataList; // ivar: _cacheMissNoDataList
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList; // ivar: _cacheMissStaleDataList
@property (retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList; // ivar: _cacheMissStaleUnusableDataList
@property (retain, nonatomic) GEOTileKeyList *fullList; // ivar: _fullList
@property (retain, nonatomic) GEOTileKeyList *interestList; // ivar: _interestList
@property (nonatomic) unsigned char loadReason; // ivar: _loadReason
@property (retain, nonatomic) GEOTileKeyList *networkList; // ivar: _networkList
@property (retain, nonatomic) GEOTileKeyList *pendingNetworkList; // ivar: _pendingNetworkList
@property (nonatomic) BOOL proactivelyLoadOnFailure; // ivar: _proactivelyLoadOnFailure
@property (retain, nonatomic) GEOTileRequester *tileRequester; // ivar: _tileRequester




@end


#endif