// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HFCOMPOUNDCONDITIONMATCH_H
#define _HFCOMPOUNDCONDITIONMATCH_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HFCondition.h"

@interface _HFCompoundConditionMatch : NSObject

@property (retain, nonatomic) HFCondition *matchedCondition; // ivar: _matchedCondition
@property (retain, nonatomic) NSArray *matchedPredicates; // ivar: _matchedPredicates


+(id)matchWithCondition:(id)arg0 matchedPredicates:(id)arg1 ;


@end


#endif