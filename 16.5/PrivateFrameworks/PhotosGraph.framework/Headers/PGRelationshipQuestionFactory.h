// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGRELATIONSHIPQUESTIONFACTORY_H
#define PGRELATIONSHIPQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory



+(id)displayStringForRelationshipLabel:(id)arg0 ;
+(id)localFactoryScoreByRelationshipLabels;
+(id)relationshipLabelsRequiringInitialQuestion;
+(id)relationshipTypesByRelationshipLabel;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initialQuestionForRelationshipLabel:(id)arg0 ;
-(unsigned short)questionType;
-(void)updateInitialQuestion:(id)arg0 ;


@end


#endif