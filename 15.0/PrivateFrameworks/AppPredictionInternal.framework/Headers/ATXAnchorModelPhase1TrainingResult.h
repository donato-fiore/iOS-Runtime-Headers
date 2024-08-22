// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELPHASE1TRAININGRESULT_H
#define ATXANCHORMODELPHASE1TRAININGRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelPBLaunchHistoryMetadata.h"

@interface ATXAnchorModelPhase1TrainingResult : NSObject

@property (nonatomic) CGFloat anchorPopularity; // ivar: _anchorPopularity
@property (retain, nonatomic) NSString *candidateId; // ivar: _candidateId
@property (nonatomic) CGFloat classConditionalProbability; // ivar: _classConditionalProbability
@property (nonatomic) CGFloat globalPopularity; // ivar: _globalPopularity
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *launchHistory; // ivar: _launchHistory
@property (nonatomic) NSInteger numEngagedSuggestions; // ivar: _numEngagedSuggestions
@property (nonatomic) NSInteger numRejectedSuggestion; // ivar: _numRejectedSuggestion
@property (nonatomic) NSInteger numShownSuggestions; // ivar: _numShownSuggestions
@property (nonatomic) NSInteger numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence; // ivar: _numUniqueAnchorOccurrencesWithUniqueCandidateOccurrence
@property (nonatomic) CGFloat posteriorProbability; // ivar: _posteriorProbability
@property (nonatomic) CGFloat standardDeviationOfOffsetFromAnchor; // ivar: _standardDeviationOfOffsetFromAnchor


-(id)description;


@end


#endif