// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREDLIBRARYSTARTQUESTIONFACTORY_H
#define PGSHAREDLIBRARYSTARTQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGSharedLibraryStartQuestionFactory : PGSurveyQuestionFactory



-(NSInteger)questionOptions;
-(id)existingQuestion;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif