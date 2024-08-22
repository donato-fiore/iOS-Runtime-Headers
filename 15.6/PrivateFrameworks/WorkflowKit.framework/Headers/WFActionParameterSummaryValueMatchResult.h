// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONPARAMETERSUMMARYVALUEMATCHRESULT_H
#define WFACTIONPARAMETERSUMMARYVALUEMATCHRESULT_H


#import <Foundation/Foundation.h>

#import "WFActionParameterSummaryValue.h"

@interface WFActionParameterSummaryValueMatchResult : NSObject

@property (readonly, nonatomic) NSUInteger matchType; // ivar: _matchType
@property (readonly, nonatomic) NSUInteger numberOfMatchingParameters; // ivar: _numberOfMatchingParameters
@property (readonly, nonatomic) WFActionParameterSummaryValue *value; // ivar: _value


+(id)noMatchWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 matchType:(NSUInteger)arg1 numberOfMatchingParameters:(NSUInteger)arg2 ;


@end


#endif