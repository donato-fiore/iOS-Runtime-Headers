// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFOEVENT_H
#define HMACCESSORYINFOEVENT_H

@class HMEEvent;


#import "HMAccessoryInfo.h"

@interface HMAccessoryInfoEvent : HMEEvent

@property (readonly, nonatomic) HMAccessoryInfo *accessoryInfo; // ivar: _accessoryInfo


+(id)decodeAccessoryInfoFromEvent:(id)arg0 error:(*id)arg1 ;
-(id)encodedData;
-(id)initWithAccessoryInfo:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif