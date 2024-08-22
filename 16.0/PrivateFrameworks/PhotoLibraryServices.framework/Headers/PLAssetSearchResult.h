// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSEARCHRESULT_H
#define PLASSETSEARCHRESULT_H

@class NSArray, NSString, NSDate;


#import "PLSearchResult.h"

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *sortDate; // ivar: _sortDate


-(NSUInteger)assetCount;
-(NSUInteger)type;
-(id)description;
-(id)keyAssetUUID;


@end


#endif