// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSURVEYQUESTIONFACTORY_H
#define PGSURVEYQUESTIONFACTORY_H

@class NSString, NSDictionary;
@protocol PGQuestionFactory;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *existingQuestionsByEntityIdentifier; // ivar: _existingQuestionsByEntityIdentifier
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreExistingQuestions; // ivar: _ignoreExistingQuestions
@property (readonly, nonatomic) NSInteger questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) Class superclass;
@property (readonly) PGManagerWorkingContext *workingContext; // ivar: _workingContext


-(BOOL)questionAlreadyExists:(id)arg0 ;
-(BOOL)shouldAddQuestion:(id)arg0 toAlreadyGeneratedQuestions:(id)arg1 ;
-(id)_assetFromAssets:(id)arg0 closestToLocationCoordinate:(struct CLLocationCoordinate2D )arg1 radius:(CGFloat)arg2 ;
-(id)_questionsByEntityIdentifierFromQuestions:(id)arg0 ;
-(id)assetFromMomentNode:(id)arg0 closestToLocationCoordinate:(struct CLLocationCoordinate2D )arg1 radius:(CGFloat)arg2 ;
-(id)curatedAssetsFromMomentNode:(id)arg0 ;
-(id)existingQuestionsForEntityIdentifier:(id)arg0 ;
-(id)fetchExistingQuestions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 ;
-(id)keyAssetFromMomentNode:(id)arg0 ;
-(id)representativeCuratedAssetsFromMomentNode:(id)arg0 ;


@end


#endif