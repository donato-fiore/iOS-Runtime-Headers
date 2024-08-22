// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGQUESTIONFACTORY_H
#define PGMEANINGQUESTIONFACTORY_H

@class NSSet;


#import "PGSurveyQuestionFactory.h"

@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) NSSet *meaningLabelsForWhichToGenerateQuestions; // ivar: _meaningLabelsForWhichToGenerateQuestions


-(NSInteger)questionOptions;
-(id)_dateNodesFromStartDate:(id)arg0 toEndDate:(id)arg1 inGraph:(id)arg2 ;
-(id)_expandedDateNodesFromDateNode:(id)arg0 ;
-(id)_expandedDateNodesFromDateNodes:(id)arg0 ;
-(id)_looseCriteriasForCriteria:(id)arg0 ;
-(id)_looseMeaningLabelsForMomentNode:(id)arg0 fromCandidateLabels:(id)arg1 inGraph:(id)arg2 ;
-(id)_meaningLabelsByParentMeaningLabels;
-(id)_questionsToAddFromMomentNodes:(id)arg0 useCuratedAssets:(BOOL)arg1 localFactoryScore:(CGFloat)arg2 alreadyGeneratedQuestions:(id)arg3 limit:(NSUInteger)arg4 graph:(id)arg5 progressBlock:(id)arg6 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;
-(void)_updateMeaningQuestionsIfNeededWithProgressBlock:(id)arg0 ;


@end


#endif