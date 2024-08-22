// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPMETRICSPAIRVERIFYEVENT_H
#define HAPMETRICSPAIRVERIFYEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSError;



@interface HAPMetricsPairVerifyEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *linkType; // ivar: _linkType
@property (readonly, nonatomic) NSError *pvError; // ivar: _pvError
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithAccessory:(id)arg0 forLinkType:(id)arg1 duration:(id)arg2 reason:(id)arg3 pvError:(id)arg4 ;


@end


#endif