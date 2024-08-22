// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSEARCHRANKINGEXPERIMENTITEMDATA_H
#define ICASSEARCHRANKINGEXPERIMENTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASRankingStrategyType.h"

@interface ICASSearchRankingExperimentItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *rank; // ivar: _rank
@property (readonly, nonatomic) ICASRankingStrategyType *rankingStrategyType; // ivar: _rankingStrategyType


+(id)dataName;
-(id)initWithRankingStrategyType:(id)arg0 rank:(id)arg1 ;
-(id)toDict;


@end


#endif