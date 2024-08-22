// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REAPPUSAGEPREDICTOR_H
#define REAPPUSAGEPREDICTOR_H

@protocol REAppUsagePredictorProperties;


#import "REPredictor.h"
#import "RETimeline.h"

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties>

 {
    RETimeline *_timeline;
}


@property (readonly, nonatomic) RETimeline *timeline;


+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)update;


@end


#endif