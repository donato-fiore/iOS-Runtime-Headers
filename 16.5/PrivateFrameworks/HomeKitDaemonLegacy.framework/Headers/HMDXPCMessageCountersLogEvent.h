// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDXPCMESSAGECOUNTERSLOGEVENT_H
#define HMDXPCMESSAGECOUNTERSLOGEVENT_H

@class HMMLogEvent, NSNumber, NSString;



@interface HMDXPCMessageCountersLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSString *peerInformation; // ivar: _peerInformation
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)XPCMessageCountersLogEventWithType:(id)arg0 peerInformation:(id)arg1 messageName:(id)arg2 count:(id)arg3 ;
-(BOOL)shouldSubmit;
-(id)__initWithType:(id)arg0 peerInformation:(id)arg1 messageName:(id)arg2 count:(id)arg3 ;


@end


#endif