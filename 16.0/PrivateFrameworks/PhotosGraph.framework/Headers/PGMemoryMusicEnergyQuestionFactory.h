// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYMUSICENERGYQUESTIONFACTORY_H
#define PGMEMORYMUSICENERGYQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGMemoryMusicEnergyQuestionFactory : PGSurveyQuestionFactory



-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif