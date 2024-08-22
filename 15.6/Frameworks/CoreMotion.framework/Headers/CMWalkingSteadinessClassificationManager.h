// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWALKINGSTEADINESSCLASSIFICATIONMANAGER_H
#define CMWALKINGSTEADINESSCLASSIFICATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface CMWalkingSteadinessClassificationManager : NSObject



+(BOOL)classificationForScore:(CGFloat)arg0 classification:(*NSInteger)arg1 ;
+(BOOL)isWalkingSteadinessAvailable;
+(CGFloat)maximumScoreForClassification:(NSInteger)arg0 ;
+(CGFloat)minimumScoreForClassification:(NSInteger)arg0 ;
+(id)classificationDataFromStruct:(struct CLWalkingSteadinessClassificationData )arg0 ;
+(int)mapClassificationTypeFromFrameworkToClassifier:(NSInteger)arg0 ;


@end


#endif