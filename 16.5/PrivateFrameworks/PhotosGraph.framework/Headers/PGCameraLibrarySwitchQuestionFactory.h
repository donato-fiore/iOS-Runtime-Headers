// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCAMERALIBRARYSWITCHQUESTIONFACTORY_H
#define PGCAMERALIBRARYSWITCHQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGCameraLibrarySwitchQuestionFactory : PGSurveyQuestionFactory



+(BOOL)isSharedLibraryQuestionsEnabledForPhotoLibrary:(id)arg0 ;
+(id)_libraryScopeFromPhotoLibrary:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)_assetsFetchResultFromMoment:(id)arg0 ;
-(id)_momentsForQuestions;
-(id)collidingQuestionTypes;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif