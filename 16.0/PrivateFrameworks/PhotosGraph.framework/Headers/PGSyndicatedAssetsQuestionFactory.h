// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSYNDICATEDASSETSQUESTIONFACTORY_H
#define PGSYNDICATEDASSETSQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGSyndicatedAssetsQuestionFactory : PGSurveyQuestionFactory



-(BOOL)_isHubbleFeatureFlagEnabled;
-(NSInteger)questionOptions;
-(id)_allAssetsFetchResultWithOptions:(id)arg0 ;
-(id)_syndicatedPhotoLibraryWithError:(*id)arg0 ;
-(id)_validRandomAssetsFromFetchResult:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_validRandomAssetsWithLimit:(NSUInteger)arg0 photoLibrary:(id)arg1 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif