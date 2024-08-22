// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPMETRICSPAIRVERIFYEVENT_H
#define HAPMETRICSPAIRVERIFYEVENT_H

@class HMMLogEvent, NSString, NSNumber;



@interface HAPMetricsPairVerifyEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly) NSUInteger durationInMS; // ivar: _durationInMS
@property (readonly, nonatomic) NSNumber *linkType; // ivar: _linkType
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)description;
-(id)eventName;
-(id)initWithAccessory:(id)arg0 forLinkType:(id)arg1 durationInMS:(NSUInteger)arg2 reason:(id)arg3 pvError:(id)arg4 ;
-(id)serializedEvent;


@end


#endif