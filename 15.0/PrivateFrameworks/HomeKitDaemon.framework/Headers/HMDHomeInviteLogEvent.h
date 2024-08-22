// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEINVITELOGEVENT_H
#define HMDHOMEINVITELOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDHomeInviteLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int responseType; // ivar: _responseType
@property (readonly, nonatomic) int stage; // ivar: _stage
@property (readonly) Class superclass;


+(id)homeInvitationWithStage:(int)arg0 ;
+(id)homeInvitationWithStage:(int)arg0 responseType:(int)arg1 ;
-(id)initInvitationWithStage:(int)arg0 responseType:(int)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif