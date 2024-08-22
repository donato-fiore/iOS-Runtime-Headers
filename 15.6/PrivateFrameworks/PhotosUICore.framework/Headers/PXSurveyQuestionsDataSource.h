// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONSDATASOURCE_H
#define PXSURVEYQUESTIONSDATASOURCE_H

@class NSMutableSet, PHPhotoLibrary, NSPredicate;

#import <Foundation/Foundation.h>


@interface PXSurveyQuestionsDataSource : NSObject {
    NSUInteger _numberOfQuestionsGenerated;
    NSMutableSet *_answeredGadgetIdentifiers;
}


@property (readonly, nonatomic) NSUInteger numberOfQuestionsRemainingToBeAnswered;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)didAnswerQuestionForGadgetIdentifier:(id)arg0 ;
-(NSUInteger)fetchTotalNumberOfAnsweredYesOrNoQuestions;
-(NSUInteger)fetchTotalNumberOfUnansweredQuestions;
-(id)_fetchOptionsForShouldPrefetchCount:(BOOL)arg0 ;
-(id)fetchSortedAllUnansweredQuestionsWithLimit:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 predicate:(id)arg1 ;
-(id)mostRecentQuestionCreationDate;
-(void)didGenerateNumberOfGadgets:(NSUInteger)arg0 ;
-(void)didRemoveGadgetWithIdentifier:(id)arg0 ;
-(void)invalidateQuestions:(id)arg0 ;
-(void)resetGeneratedQuestions;


@end


#endif