// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSEARCHRESULT_H
#define PLASSETSEARCHRESULT_H

@class NSArray, NSDate;


#import "PLSearchResult.h"

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSDate *sortDate; // ivar: _sortDate


-(NSUInteger)assetCount;
-(NSUInteger)type;
-(id)keyAssetUUID;


@end


#endif