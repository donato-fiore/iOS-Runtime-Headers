// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGWALLPAPERQUESTIONFACTORY_H
#define PGWALLPAPERQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGWallpaperQuestionFactory : PGSurveyQuestionFactory



+(BOOL)isHighRecallCityscapeAsset:(id)arg0 ;
+(BOOL)isHighRecallLandscapeAsset:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)_generateQuestionsWithLimit:(NSUInteger)arg0 progressReporter:(id)arg1 ;
-(id)_generateTruePositiveCityscapeQuestionWithLimit:(NSUInteger)arg0 suggestionSession:(id)arg1 alreadyGeneratedQuestions:(id)arg2 progressReporter:(id)arg3 ;
-(id)_generateTruePositiveLandscapeQuestionWithLimit:(NSUInteger)arg0 suggestionSession:(id)arg1 alreadyGeneratedQuestions:(id)arg2 progressReporter:(id)arg3 ;
-(id)_generateTruePositivePeopleQuestionWithLimit:(NSUInteger)arg0 suggestionSession:(id)arg1 alreadyGeneratedQuestions:(id)arg2 progressReporter:(id)arg3 ;
-(id)_generateTruePositivePetQuestionWithLimit:(NSUInteger)arg0 suggestionSession:(id)arg1 alreadyGeneratedQuestions:(id)arg2 progressReporter:(id)arg3 ;
-(id)_generateTruePositiveQuestionsWithLimit:(NSUInteger)arg0 progressReporter:(id)arg1 ;
-(id)evenlySelectQuestionsByType:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)fetchAssetsWithPredicate:(id)arg0 assetFilter:(id)arg1 ;
-(id)fetchCityscapeAssets;
-(id)fetchLandscapeAssets;
-(id)fetchPeopleAssets;
-(id)fetchPetAssets;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif