// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREDICTIONSBUFFER_H
#define PREDICTIONSBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AXPhoenixClassifierConfiguration.h"

@interface PredictionsBuffer : NSObject {
    NSMutableArray *_predictions;
    NSMutableArray *_counts;
    AXPhoenixClassifierConfiguration *_configuration;
}




-(id)description;
-(id)initWithConfiguration:(id)arg0 ;
-(id)logBuffer;
-(id)predictionCounts;
-(struct ? )bestPredictionUsingPolicyOption:(int)arg0 ;
-(void)addPrediction:(id)arg0 ;
-(void)reset;


@end


#endif