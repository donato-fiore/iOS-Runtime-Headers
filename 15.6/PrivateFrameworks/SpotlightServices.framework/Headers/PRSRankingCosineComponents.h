// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSRANKINGCOSINECOMPONENTS_H
#define PRSRANKINGCOSINECOMPONENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PRSRankingCosineComponents : NSObject

@property (nonatomic) NSUInteger fieldLength; // ivar: _fieldLength
@property (retain, nonatomic) NSArray *inverseDocFrequencies; // ivar: _inverseDocFrequencies
@property (retain, nonatomic) NSArray *termFrequencies; // ivar: _termFrequencies
@property (retain, nonatomic) NSArray *termFrequenciesWeighted; // ivar: _termFrequenciesWeighted
@property (retain, nonatomic) NSArray *termInverseDoc; // ivar: _termInverseDoc
@property (retain, nonatomic) NSArray *termInverseDocWeighted; // ivar: _termInverseDocWeighted




@end


#endif