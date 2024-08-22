// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFREQUENTLOCATIONQUESTIONFACTORY_H
#define PGFREQUENTLOCATIONQUESTIONFACTORY_H

@class PHFetchResult;


#import "PGSurveyQuestionFactory.h"

@interface PGFrequentLocationQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) PHFetchResult *existingFrequentLocationQuestions; // ivar: _existingFrequentLocationQuestions


-(BOOL)_addIfNeededFrequentLocationQuestionForAsset:(id)arg0 withLocationTypeName:(id)arg1 toQuestions:(id)arg2 ;
-(BOOL)_distanceTooCloseBetweenCoordinate:(struct CLLocationCoordinate2D )arg0 otherCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(CGFloat)_localFactoryScoreForLocationTypeName:(id)arg0 ;
-(NSInteger)questionOptions;
-(id)_selectedAssetFromMomentNodes:(id)arg0 closeToCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(unsigned short)questionType;


@end


#endif