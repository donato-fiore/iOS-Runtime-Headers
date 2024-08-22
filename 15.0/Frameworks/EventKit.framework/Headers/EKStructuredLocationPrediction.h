// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSTRUCTUREDLOCATIONPREDICTION_H
#define EKSTRUCTUREDLOCATIONPREDICTION_H


#import <Foundation/Foundation.h>


@interface EKStructuredLocationPrediction : NSObject



+(BOOL)shouldDoLocationPredictionForEvent:(id)arg0 ;
+(id)_mockLocationForEvent:(id)arg0 ;
+(id)locationPredictionForEvent:(id)arg0 error:(*id)arg1 timeout:(CGFloat)arg2 ;
+(void)userInteractionWithPredictedLocationOfInterest:(id)arg0 interaction:(NSUInteger)arg1 ;


@end


#endif