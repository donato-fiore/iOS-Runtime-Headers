// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIMMUTABLESETTINGVALUEEVENT_H
#define HMIMMUTABLESETTINGVALUEEVENT_H

@class HMEEvent;


#import "HMImmutableSettingValue.h"

@interface HMImmutableSettingValueEvent : HMEEvent

@property (readonly, nonatomic) HMImmutableSettingValue *settingValue; // ivar: _settingValue


+(id)decodeSettingValueFromEvent:(id)arg0 error:(*id)arg1 ;
-(id)encodedData;
-(id)initSettingValue:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif