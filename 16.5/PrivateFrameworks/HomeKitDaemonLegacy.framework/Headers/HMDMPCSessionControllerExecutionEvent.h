// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H
#define HMDMPCSESSIONCONTROLLEREXECUTIONEVENT_H

@class NSString;


#import "HMDMediaPlaybackActionEvent.h"

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent

@property BOOL didPartiallySucceed; // ivar: _didPartiallySucceed
@property (readonly, copy) NSString *resultString;


+(id)identifier;
-(id)coreAnalyticsEventDictionary;
-(id)coreAnalyticsEventName;


@end


#endif