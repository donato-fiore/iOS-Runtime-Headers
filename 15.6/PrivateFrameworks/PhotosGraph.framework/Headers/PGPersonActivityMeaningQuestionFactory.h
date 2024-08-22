// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPERSONACTIVITYMEANINGQUESTIONFACTORY_H
#define PGPERSONACTIVITYMEANINGQUESTIONFACTORY_H

@class NSSet;


#import "PGSurveyQuestionFactory.h"

@interface PGPersonActivityMeaningQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) NSSet *personActivityMeaningLabelsForWhichToGenerateQuestions; // ivar: _personActivityMeaningLabelsForWhichToGenerateQuestions


-(NSInteger)questionOptions;
-(id)_questionsToAddFromMomentNodes:(id)arg0 localFactoryScore:(CGFloat)arg1 alreadyGeneratedQuestions:(id)arg2 limit:(NSUInteger)arg3 graph:(id)arg4 progressBlock:(id)arg5 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif