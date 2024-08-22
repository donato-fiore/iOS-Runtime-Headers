// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEASTARFUZZYMATCHINGRESULT_H
#define QSSMUTABLEASTARFUZZYMATCHINGRESULT_H

@class NSString, NSArray;


#import "QSSAStarFuzzyMatchingResult.h"

@interface QSSMutableAStarFuzzyMatchingResult : QSSAStarFuzzyMatchingResult

@property (copy, nonatomic) NSString *debug_information;
@property (copy, nonatomic) NSArray *match_ids;
@property (copy, nonatomic) NSString *matched_result;
@property (nonatomic) int tm_score;
@property (nonatomic) NSInteger total_score;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif