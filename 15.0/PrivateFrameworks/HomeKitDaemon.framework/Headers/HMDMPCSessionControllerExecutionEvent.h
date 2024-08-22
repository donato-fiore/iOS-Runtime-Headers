// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H
#define HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H

@class NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaPlaybackActionEvent.h"

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property BOOL didPartiallySucceed; // ivar: _didPartiallySucceed
@property (readonly, copy) NSString *resultString;


+(id)identifier;
-(id)eventName;
-(id)serializedEvent;


@end


#endif