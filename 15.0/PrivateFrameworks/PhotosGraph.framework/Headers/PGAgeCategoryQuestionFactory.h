// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGAGECATEGORYQUESTIONFACTORY_H
#define PGAGECATEGORYQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGAgeCategoryQuestionFactory : PGSurveyQuestionFactory



-(BOOL)_shouldAddNewAgeCategoryQuestionForPersonUUID:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)_sortedAgeCategories;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif