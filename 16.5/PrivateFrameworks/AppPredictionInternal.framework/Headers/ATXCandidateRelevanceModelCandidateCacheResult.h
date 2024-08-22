// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELCANDIDATECACHERESULT_H
#define ATXCANDIDATERELEVANCEMODELCANDIDATECACHERESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXCandidateRelevanceModelFeaturizationManager.h"

@interface ATXCandidateRelevanceModelCandidateCacheResult : NSObject

@property (readonly, nonatomic) NSArray *candidates; // ivar: _candidates
@property (readonly, nonatomic) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager; // ivar: _featurizationManager


-(id)initWithCandidates:(id)arg0 featurizationManager:(id)arg1 ;


@end


#endif