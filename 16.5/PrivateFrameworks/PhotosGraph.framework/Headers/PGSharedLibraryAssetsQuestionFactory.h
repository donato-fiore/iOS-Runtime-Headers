// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREDLIBRARYASSETSQUESTIONFACTORY_H
#define PGSHAREDLIBRARYASSETSQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGSharedLibraryAssetsQuestionFactory : PGSurveyQuestionFactory



+(BOOL)isSharedLibraryQuestionsEnabledForPhotoLibrary:(id)arg0 ;
+(id)_libraryScopeFromPhotoLibrary:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)_assetsFetchResultFromMoment:(id)arg0 ;
-(id)_eligibleMomentsFetchResult;
-(id)collidingQuestionTypes;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif