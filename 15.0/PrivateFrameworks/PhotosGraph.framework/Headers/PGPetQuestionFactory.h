// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPETQUESTIONFACTORY_H
#define PGPETQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGPetQuestionFactory : PGSurveyQuestionFactory



-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initialPetQuestion;
-(unsigned short)questionType;
-(void)updateInitialQuestion:(id)arg0 ;


@end


#endif