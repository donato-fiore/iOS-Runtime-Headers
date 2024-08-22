// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECONTENTRANKINGRESULT_H
#define RECONTENTRANKINGRESULT_H


#import <Foundation/Foundation.h>


@interface REContentRankingResult : NSObject

@property (nonatomic) CGFloat negativePolarity; // ivar: _negativePolarity
@property (nonatomic) CGFloat positivePolarity; // ivar: _positivePolarity
@property (nonatomic) CGFloat unbiasedNegativePolarity; // ivar: _unbiasedNegativePolarity
@property (nonatomic) CGFloat unbiasedPositivePolarity; // ivar: _unbiasedPositivePolarity
@property (nonatomic) int unknownCount; // ivar: _unknownCount
@property (nonatomic) BOOL valid; // ivar: _valid




@end


#endif