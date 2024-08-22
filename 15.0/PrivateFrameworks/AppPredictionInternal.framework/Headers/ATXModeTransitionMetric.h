// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODETRANSITIONMETRIC_H
#define ATXMODETRANSITIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString;



@interface ATXModeTransitionMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *enterReason; // ivar: _enterReason
@property (retain, nonatomic) NSString *exitReason; // ivar: _exitReason
@property (retain, nonatomic) NSString *nextModeSemanticType; // ivar: _nextModeSemanticType
@property (nonatomic) CGFloat previousModeDuration; // ivar: _previousModeDuration
@property (nonatomic) BOOL previousModeHadScheduledExit; // ivar: _previousModeHadScheduledExit
@property (retain, nonatomic) NSString *previousModeSemanticType; // ivar: _previousModeSemanticType
@property (retain, nonatomic) NSString *transitionDeviceType; // ivar: _transitionDeviceType
@property (retain, nonatomic) NSString *transitionSource; // ivar: _transitionSource


-(id)coreAnalyticsDictionary;
-(id)initWithPreviousModeSemanticType:(id)arg0 previousModeDuration:(CGFloat)arg1 previousModeHadScheduledExit:(BOOL)arg2 exitReason:(id)arg3 enterReason:(id)arg4 transitionDeviceType:(id)arg5 transitionSource:(id)arg6 nextModeSemanticType:(id)arg7 ;
-(id)metricName;


@end


#endif