// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMHOMELOGEVENT_H
#define HMMHOMELOGEVENT_H

@class NSUUID, NSString;


#import "HMMLogEvent.h"

@interface HMMHomeLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSString *homeUUIDString;


+(id)alloc;
-(id)initWithHomeUUID:(id)arg0 ;


@end


#endif