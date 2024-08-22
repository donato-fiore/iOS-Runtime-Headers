// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSURVEYQUESTIONFACTORY_H
#define PGSURVEYQUESTIONFACTORY_H

@class NSArray, NSString, NSDictionary;
@protocol PGQuestionFactory;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory>



@property (readonly, nonatomic) NSArray *collidingQuestionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *existingQuestionsByEntityIdentifier; // ivar: _existingQuestionsByEntityIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreExistingQuestions; // ivar: _ignoreExistingQuestions
@property (readonly, nonatomic) NSInteger questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly, nonatomic) short questionVersion; // ivar: _questionVersion
@property (readonly) Class superclass;
@property (readonly) PGManagerWorkingContext *workingContext; // ivar: _workingContext


-(BOOL)questionAlreadyExists:(id)arg0 ;
-(BOOL)shouldAddQuestion:(id)arg0 toAlreadyGeneratedQuestions:(id)arg1 ;
-(id)_assetFromAssets:(id)arg0 closestToLocationCoordinate:(struct CLLocationCoordinate2D )arg1 radius:(CGFloat)arg2 ;
-(id)_questionsByEntityIdentifierFromQuestions:(id)arg0 ;
-(id)assetFromMomentNode:(id)arg0 closestToLocationCoordinate:(struct CLLocationCoordinate2D )arg1 radius:(CGFloat)arg2 curationContext:(id)arg3 ;
-(id)assetsFromMomentNode:(id)arg0 curationContext:(id)arg1 ;
-(id)curatedAssetsFromMomentNode:(id)arg0 curationContext:(id)arg1 ;
-(id)existingQuestionsForEntityIdentifier:(id)arg0 ;
-(id)fetchExistingQuestions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 questionVersion:(short)arg1 ;
-(id)representativeAssetsFromMomentNode:(id)arg0 curationContext:(id)arg1 ;


@end


#endif