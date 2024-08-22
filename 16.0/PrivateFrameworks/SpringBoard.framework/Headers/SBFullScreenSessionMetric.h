// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFULLSCREENSESSIONMETRIC_H
#define SBFULLSCREENSESSIONMETRIC_H

@class NSString;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBFullScreenSessionMetric : SBAnalyticsStateMachineEventHandler

@property (copy, nonatomic) NSString *primaryBundleIdentifier; // ivar: _primaryBundleIdentifier
@property (copy, nonatomic) NSString *sideBundleIdentifier; // ivar: _sideBundleIdentifier
@property (copy, nonatomic) NSString *startReason; // ivar: _startReason
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp


-(BOOL)_sendCoreAnalyticsEventWithStartReason:(id)arg0 endReason:(id)arg1 duration:(CGFloat)arg2 primaryBundleIdentifier:(id)arg3 doNotDisturbActive:(BOOL)arg4 hardwareKeyboardAttached:(BOOL)arg5 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(id)_bundleIdentifierForElementWithLayoutRole:(NSInteger)arg0 fromContext:(id)arg1 ;
-(id)init;


@end


#endif