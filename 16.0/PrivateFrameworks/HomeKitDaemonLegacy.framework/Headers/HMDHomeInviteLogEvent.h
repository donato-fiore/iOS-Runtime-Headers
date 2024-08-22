// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEINVITELOGEVENT_H
#define HMDHOMEINVITELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) BOOL accepted; // ivar: _accepted
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL declined; // ivar: _declined
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL expired; // ivar: _expired
@property (readonly, nonatomic) BOOL filtered; // ivar: _filtered
@property (readonly, nonatomic) BOOL ignored; // ivar: _ignored
@property (readonly, nonatomic) BOOL isFMFDevice; // ivar: _isFMFDevice
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) BOOL received; // ivar: _received
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) BOOL suppressedNotification; // ivar: _suppressedNotification


+(id)updateWithInvitationState:(NSInteger)arg0 isFMFDevice:(BOOL)arg1 ;
+(id)updateWithState:(NSInteger)arg0 isFMFDevice:(BOOL)arg1 ;
-(id)initWithHomeInviteLogEventState:(NSInteger)arg0 isFMFDevice:(BOOL)arg1 ;


@end


#endif