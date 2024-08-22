// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDWHASETTINGEVENT_H
#define HMDWHASETTINGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "AWDHomeKitValue.h"

@interface HMDWHASettingEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly) Class superclass;
@property (copy, nonatomic) AWDHomeKitValue *value; // ivar: _value


+(id)eventWithKeyPath:(id)arg0 value:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif