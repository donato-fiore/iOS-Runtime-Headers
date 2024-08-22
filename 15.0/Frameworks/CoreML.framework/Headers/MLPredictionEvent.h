// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPREDICTIONEVENT_H
#define MLPREDICTIONEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface MLPredictionEvent : NSObject <CUTCoreAnalyticsMetric>

 {
    NSUInteger _featuresPredictionCountSoFar;
    CGFloat _featuresPredictionDuration;
}


@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSNumber *firstPartyExecutable; // ivar: _firstPartyExecutable
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSNumber *modelType; // ivar: _modelType
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)featuresPredictionCountSoFar;
-(id)featuresPredictionDuration;
-(id)init;
-(id)predictionEventQueue;
-(void)maybeLogPredictionEvent:(NSUInteger)arg0 ;


@end


#endif