// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEARCHKEYWORDCOMPUTERKEYWORDAGGREGATOR_H
#define PGSEARCHKEYWORDCOMPUTERKEYWORDAGGREGATOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PGSearchKeywordComputerKeywordAggregator : NSObject {
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}


@property (readonly) NSDictionary *aggregatedKeywords;


-(id)init;
-(void)aggregateKeywordArraysByCategoryMask:(id)arg0 forMomentUUID:(id)arg1 fromUniversalStartDate:(id)arg2 toEndDate:(id)arg3 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg0 forMomentNode:(id)arg1 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg0 forMomentUUID:(id)arg1 duringDateInterval:(id)arg2 ;


@end


#endif