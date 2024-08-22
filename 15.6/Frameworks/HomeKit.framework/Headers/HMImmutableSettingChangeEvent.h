// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIMMUTABLESETTINGCHANGEEVENT_H
#define HMIMMUTABLESETTINGCHANGEEVENT_H

@class HMEEvent;


#import "HMImmutableSetting.h"

@interface HMImmutableSettingChangeEvent : HMEEvent

@property (readonly, nonatomic) HMImmutableSetting *setting; // ivar: _setting


+(id)decodeSettingFromEvent:(id)arg0 error:(*id)arg1 ;
-(id)encodedData;
-(id)initWithSetting:(id)arg0 eventSource:(id)arg1 eventTimestamp:(CGFloat)arg2 ;


@end


#endif