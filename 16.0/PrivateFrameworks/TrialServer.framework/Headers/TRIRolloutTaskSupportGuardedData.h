// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIROLLOUTTASKSUPPORTGUARDEDDATA_H
#define TRIROLLOUTTASKSUPPORTGUARDEDDATA_H

@class NSMutableArray, TRITrialSystemTelemetry;

#import <Foundation/Foundation.h>


@interface TRIRolloutTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}






@end


#endif