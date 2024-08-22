// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIGROUPAGGREGATEITEM_H
#define PSIGROUPAGGREGATEITEM_H

@class NSArray, NSValue;

#import <Foundation/Foundation.h>

#import "PSIGroup.h"
#import "PSIQueryToken.h"

@interface PSIGroupAggregateItem : NSObject

@property (retain, nonatomic) NSArray *assetIds; // ivar: _assetIds
@property (retain, nonatomic) NSArray *collectionIds; // ivar: _collectionIds
@property (retain, nonatomic) PSIGroup *group; // ivar: _group
@property (retain, nonatomic) NSValue *rangeMatchingToken; // ivar: _rangeMatchingToken
@property (retain, nonatomic) PSIQueryToken *searchToken; // ivar: _searchToken


-(void)reset;


@end


#endif