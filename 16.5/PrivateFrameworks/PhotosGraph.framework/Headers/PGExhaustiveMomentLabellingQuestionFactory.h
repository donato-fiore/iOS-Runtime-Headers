// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGEXHAUSTIVEMOMENTLABELLINGQUESTIONFACTORY_H
#define PGEXHAUSTIVEMOMENTLABELLINGQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGExhaustiveMomentLabellingQuestionFactory : PGSurveyQuestionFactory



-(NSInteger)questionOptions;
-(id)_inferMeaningLabelsForMomentNode:(id)arg0 graph:(id)arg1 cache:(id)arg2 meaningLabels:(id)arg3 sceneTaxonomy:(id)arg4 ;
-(id)_meaningLabelsForWhichToGenerateQuestions;
-(id)_questionsToAddWithMomentNodes:(id)arg0 graph:(id)arg1 localFactoryScore:(CGFloat)arg2 limit:(NSUInteger)arg3 sceneTaxonomy:(id)arg4 alreadyGeneratedQuestions:(id)arg5 progressBlock:(id)arg6 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif