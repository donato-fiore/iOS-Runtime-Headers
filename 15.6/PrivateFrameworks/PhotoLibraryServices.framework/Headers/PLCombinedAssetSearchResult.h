// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOMBINEDASSETSEARCHRESULT_H
#define PLCOMBINEDASSETSEARCHRESULT_H

@class NSArray, NSMutableArray;


#import "PLAssetSearchResult.h"

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
    NSUInteger _assetCount;
    NSArray *_assetUUIDs;
}


@property (retain, nonatomic) NSMutableArray *assetSearchResults; // ivar: _assetSearchResults
@property (readonly, nonatomic) NSArray *groupResults;
@property (nonatomic) BOOL resultsCanOverlap; // ivar: _resultsCanOverlap


-(NSUInteger)assetCount;
-(NSUInteger)categoryMask;
-(id)assetUUIDs;
-(id)groupDescription;
-(id)initWithAssetSearchResult:(id)arg0 ;
-(id)initWithAssetSearchResults:(id)arg0 canOverlap:(BOOL)arg1 ;
-(void)addAssetSearchResult:(id)arg0 isMainSearchResult:(BOOL)arg1 ;


@end


#endif