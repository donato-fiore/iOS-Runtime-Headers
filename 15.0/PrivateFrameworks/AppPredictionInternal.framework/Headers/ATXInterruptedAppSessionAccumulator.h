// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINTERRUPTEDAPPSESSIONACCUMULATOR_H
#define ATXINTERRUPTEDAPPSESSIONACCUMULATOR_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunch.h"
#import "ATXModeDimensionSet.h"

@interface ATXInterruptedAppSessionAccumulator : NSObject {
    _ATXAppLaunch *_previousLaunch;
    ATXModeDimensionSet *_previousDimensions;
    NSMutableArray *_appSessions;
    NSMutableDictionary *_summaryMetrics;
    NSMutableDictionary *_recentNotifications;
}




-(BOOL)_doesLaunchInterruptPreviousLaunch:(id)arg0 ;
-(id)_getSummaryMetricForDimensions:(id)arg0 ;
-(id)init;
-(void)handleEndOfStream;
-(void)handleNextAppLaunch:(id)arg0 dimensionSet:(id)arg1 ;
-(void)handleNotificationEvent:(id)arg0 ;
-(void)logToCoreAnalytics;


@end


#endif