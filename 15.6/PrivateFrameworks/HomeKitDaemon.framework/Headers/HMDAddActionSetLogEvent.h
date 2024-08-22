// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDADDACTIONSETLOGEVENT_H
#define HMDADDACTIONSETLOGEVENT_H

@class HMMHomeLogEvent, NSString;



@interface HMDAddActionSetLogEvent : HMMHomeLogEvent

@property (readonly, copy) NSString *actionSetType; // ivar: _actionSetType


-(id)initWithActionSetType:(id)arg0 homeUUID:(id)arg1 ;


@end


#endif