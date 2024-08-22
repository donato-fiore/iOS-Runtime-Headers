// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEXPERIMENTBASETASKGUARDEDDATA_H
#define TRIEXPERIMENTBASETASKGUARDEDDATA_H

@class NSMutableArray, TRITrialSystemTelemetry;

#import <Foundation/Foundation.h>


@interface TRIExperimentBaseTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    BOOL logAsRollout;
}






@end


#endif