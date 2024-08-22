// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODETRANSITIONMETRIC_H
#define ATXMODETRANSITIONMETRIC_H

@class ATXCoreAnalyticsMetric, NSString, NSNumber;



@interface ATXModeTransitionMetric : ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *enterReason; // ivar: _enterReason
@property (retain, nonatomic) NSString *exitReason; // ivar: _exitReason
@property (retain, nonatomic) NSNumber *inferredModeConfidenceScore; // ivar: _inferredModeConfidenceScore
@property (retain, nonatomic) NSNumber *inferredModeDuration; // ivar: _inferredModeDuration
@property (retain, nonatomic) NSString *inferredModeOriginAnchorType; // ivar: _inferredModeOriginAnchorType
@property (retain, nonatomic) NSString *inferredModeType; // ivar: _inferredModeType
@property (retain, nonatomic) NSNumber *inferredModeUILocation; // ivar: _inferredModeUILocation
@property (retain, nonatomic) NSString *nextModeSemanticType; // ivar: _nextModeSemanticType
@property (nonatomic) CGFloat previousModeDuration; // ivar: _previousModeDuration
@property (nonatomic) BOOL previousModeHadScheduledExit; // ivar: _previousModeHadScheduledExit
@property (retain, nonatomic) NSString *previousModeOrigin; // ivar: _previousModeOrigin
@property (retain, nonatomic) NSString *previousModeSemanticType; // ivar: _previousModeSemanticType
@property (retain, nonatomic) NSString *transitionDeviceType; // ivar: _transitionDeviceType
@property (retain, nonatomic) NSString *transitionSource; // ivar: _transitionSource


-(id)coreAnalyticsDictionary;
-(id)initWithPreviousModeSemanticType:(id)arg0 previousModeDuration:(CGFloat)arg1 previousModeHadScheduledExit:(BOOL)arg2 exitReason:(id)arg3 enterReason:(id)arg4 transitionDeviceType:(id)arg5 transitionSource:(id)arg6 nextModeSemanticType:(id)arg7 ;
-(id)metricName;


@end


#endif