// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPETQUESTIONFACTORY_H
#define PGPETQUESTIONFACTORY_H



#import "PGSurveyQuestionFactory.h"

@interface PGPetQuestionFactory : PGSurveyQuestionFactory



+(id)petSceneLabels;
-(NSInteger)questionOptions;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initialPetQuestion;
-(id)momentsForPetInPhotoLibrary:(id)arg0 withGraph:(id)arg1 ;
-(unsigned short)questionType;
-(void)updateInitialQuestion:(id)arg0 ;


@end


#endif