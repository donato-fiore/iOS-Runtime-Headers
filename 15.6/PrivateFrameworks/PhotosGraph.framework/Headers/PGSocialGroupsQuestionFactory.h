// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSOCIALGROUPSQUESTIONFACTORY_H
#define PGSOCIALGROUPSQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGSocialGroupsQuestionFactory : PGSurveyQuestionFactory



+(void)enumeratePeopleClustersWithGraph:(id)arg0 withLinkage:(NSUInteger)arg1 withBlock:(id)arg2 ;
// +(void)enumerateSocialGroupsWithGraph:(id)arg0 withLinkage:(NSUInteger)arg1 validGroupsBlock:(id)arg2 invalidGroupsBlock:(unk)arg3 averageWeight:(id)arg4  ;
-(NSInteger)questionOptions;
-(id)_createSocialGroupWithPersonLocalIdentifiers:(id)arg0 ;
-(id)_identifierForPersonNodesAsString:(id)arg0 ;
-(id)_socialGroupsForSurvey:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(id)_socialGroupsForSurveyFromCurrentAlgorithm:(id)arg0 ;
-(id)_socialGroupsForSurveyFromCustomAlgorithm:(id)arg0 ;
-(id)_socialGroupsForSurveyFromNewAlgorithm:(id)arg0 withLinkage:(NSUInteger)arg1 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif