// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPUBLICEVENTQUESTIONFACTORY_H
#define PGPUBLICEVENTQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGPublicEventQuestionFactory : PGSurveyQuestionFactory



-(BOOL)_shouldAddNewPublicEventQuestionForAssetUUID:(id)arg0 ;
-(CGFloat)_publicEventLocalFactoryScoreForMomentNode:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif