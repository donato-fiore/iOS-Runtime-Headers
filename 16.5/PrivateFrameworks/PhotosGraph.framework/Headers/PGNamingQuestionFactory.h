// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGNAMINGQUESTIONFACTORY_H
#define PGNAMINGQUESTIONFACTORY_H

@class PHFetchResult;


#import "PGSurveyQuestionFactory.h"

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) PHFetchResult *persons; // ivar: _persons


-(BOOL)_persistQuestions:(id)arg0 questionsToRemove:(id)arg1 ;
-(BOOL)_shouldAddNewNamingQuestionForPersonUUID:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif