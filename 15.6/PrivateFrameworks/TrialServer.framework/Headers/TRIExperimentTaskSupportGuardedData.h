// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEXPERIMENTTASKSUPPORTGUARDEDDATA_H
#define TRIEXPERIMENTTASKSUPPORTGUARDEDDATA_H

@class NSMutableArray, TRITrialSystemTelemetry;

#import <Foundation/Foundation.h>


@interface TRIExperimentTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    BOOL logAsV1Rollout;
}






@end


#endif