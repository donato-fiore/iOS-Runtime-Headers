// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERCLOUDSHAREPARTICIPANTADOPTIONDAILYEVENT_H
#define HMDUSERCLOUDSHAREPARTICIPANTADOPTIONDAILYEVENT_H

@class NSNumber;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent

@property (readonly, copy) NSNumber *configureState; // ivar: _configureState
@property (readonly, copy) NSNumber *hasOwnerCloudShareID; // ivar: _hasOwnerCloudShareID


-(id)eventName;
-(id)initWithConfigureState:(NSInteger)arg0 hasOwnerCloudShareID:(BOOL)arg1 ;
-(id)serializedEvent;


@end


#endif