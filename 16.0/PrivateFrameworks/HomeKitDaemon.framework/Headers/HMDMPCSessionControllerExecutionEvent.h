// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H
#define HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H

@class NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaPlaybackActionEvent.h"

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property BOOL didPartiallySucceed; // ivar: _didPartiallySucceed
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSString *resultString;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


+(id)identifier;


@end


#endif