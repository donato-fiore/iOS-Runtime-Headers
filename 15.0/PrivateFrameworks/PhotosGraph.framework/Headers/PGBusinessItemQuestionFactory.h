// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGBUSINESSITEMQUESTIONFACTORY_H
#define PGBUSINESSITEMQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGBusinessItemQuestionFactory : PGSurveyQuestionFactory



-(BOOL)_shouldAddNewBusinessItemQuestionForAssetUUID:(id)arg0 ;
-(CGFloat)_localBusinessItemFactoryScoreForMomentNode:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif