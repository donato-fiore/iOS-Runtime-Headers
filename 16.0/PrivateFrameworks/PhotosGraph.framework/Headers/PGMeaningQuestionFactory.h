// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)_inferMeaningLabelsForMomentNode:(id)arg0 meaningLabels:(id)arg1 graph:(id)arg2 sceneTaxonomy:(id)arg3 cache:(id)arg4 ;
-(id)_looseCriteriasForCriteria:(id)arg0 graph:(id)arg1 ;
-(id)_meaningLabelsByParentMeaningLabels;
-(id)_questionsToAddFromMomentNodes:(id)arg0 useRepresentativeAssets:(BOOL)arg1 localFactoryScore:(CGFloat)arg2 alreadyGeneratedQuestions:(id)arg3 limit:(NSUInteger)arg4 graph:(id)arg5 sceneTaxonomy:(id)arg6 progressBlock:(id)arg7 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;
-(void)_updateMeaningQuestionsIfNeededWithProgressBlock:(id)arg0 ;


@end


#endif