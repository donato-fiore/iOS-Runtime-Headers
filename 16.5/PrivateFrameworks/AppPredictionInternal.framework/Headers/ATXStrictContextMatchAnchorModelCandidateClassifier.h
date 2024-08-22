// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSTRICTCONTEXTMATCHANCHORMODELCANDIDATECLASSIFIER_H
#define ATXSTRICTCONTEXTMATCHANCHORMODELCANDIDATECLASSIFIER_H



#import "ATXNaivePositiveAnchorModelCandidateClassifier.h"

@interface ATXStrictContextMatchAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier



-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)classifierType;
-(id)classifyCandidateForAnchorOccurrence:(id)arg0 trainingResult:(id)arg1 ;
-(id)description;


@end


#endif