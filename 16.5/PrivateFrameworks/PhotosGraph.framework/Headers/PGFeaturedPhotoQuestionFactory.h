// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREDPHOTOQUESTIONFACTORY_H
#define PGFEATUREDPHOTOQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"
#import "PGSuggestionSession.h"

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession *_suggestionSession;
}




-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 questionVersion:(short)arg1 ;
-(id)randomAssetsUUIDsWithLimit:(NSUInteger)arg0 ;
-(unsigned short)questionType;


@end


#endif