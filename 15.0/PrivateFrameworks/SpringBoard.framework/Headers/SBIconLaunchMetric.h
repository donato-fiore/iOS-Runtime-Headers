// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLAUNCHMETRIC_H
#define SBICONLAUNCHMETRIC_H

@class PETGoalConversionEventTracker, NSString;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_trackerV1;
    PETGoalConversionEventTracker *_trackerV2;
    BOOL _isFolder;
    NSString *_iconLocationValue;
    NSUInteger _layoutLocation;
}




-(id)init;
-(void)_processAndReportLaunchedEventPayload:(id)arg0 ;
-(void)_processAndReportTappedEventPayload:(id)arg0 ;


@end


#endif