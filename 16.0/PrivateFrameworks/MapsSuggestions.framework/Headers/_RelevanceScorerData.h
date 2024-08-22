// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RELEVANCESCORERDATA_H
#define _RELEVANCESCORERDATA_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _RelevanceScorerData : NSObject

@property (retain, nonatomic) NSMutableArray *addresses; // ivar: _addresses
@property (retain, nonatomic) NSMutableArray *finalRelevanceScores; // ivar: _finalRelevanceScores
@property (retain, nonatomic) NSMutableArray *indexMapping; // ivar: _indexMapping
@property (nonatomic) NSUInteger inputCount; // ivar: _inputCount
@property (retain, nonatomic) NSMutableArray *mapItems; // ivar: _mapItems
@property (retain, nonatomic) NSMutableArray *names; // ivar: _names


-(id)initWithNames:(id)arg0 addresses:(id)arg1 mapItems:(id)arg2 ;


@end


#endif