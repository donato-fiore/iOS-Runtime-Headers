// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELTRAININGRESULT_H
#define ATXANCHORMODELTRAININGRESULT_H

@class NSString;
@protocol ATXAnchorModelCandidateClassifierProtocol;

#import <Foundation/Foundation.h>

#import "ATXAnchor.h"
#import "ATXAnchorModelPredictionOffsetFromAnchorOccurrence.h"
#import "ATXAnchorModelPhase1TrainingResult.h"

@interface ATXAnchorModelTrainingResult : NSObject

@property (readonly, nonatomic) ATXAnchor *anchor; // ivar: _anchor
@property (readonly, nonatomic) NSObject<ATXAnchorModelCandidateClassifierProtocol> *candidateClassifier; // ivar: _candidateClassifier
@property (readonly, nonatomic) NSInteger candidateClassifierType; // ivar: _candidateClassifierType
@property (readonly, nonatomic) NSString *candidateId; // ivar: _candidateId
@property (readonly, nonatomic) NSString *candidateType; // ivar: _candidateType
@property (readonly, nonatomic) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction; // ivar: _offsetFromAnchorToShowPrediction
@property (readonly, nonatomic) ATXAnchorModelPhase1TrainingResult *phase1TrainingResult; // ivar: _phase1TrainingResult


-(id)description;
-(id)initWithAnchor:(id)arg0 candidateId:(id)arg1 candidateType:(id)arg2 phase1TrainingResult:(id)arg3 candidateClassifier:(id)arg4 candidateClassifierType:(NSInteger)arg5 offsetFromAnchorToShowPrediction:(id)arg6 ;


@end


#endif