// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRELATIONSHIPQUESTIONFACTORY_H
#define PGRELATIONSHIPQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory



+(id)localFactoryScoreByRelationshipLabels;
+(id)relationshipTypesByRelationshipLabel;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif