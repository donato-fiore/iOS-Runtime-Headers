// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPCONFIRMWAKEUPIDSMESSAGE_H
#define HDSPCONFIRMWAKEUPIDSMESSAGE_H

@class NSDate;


#import "HDSPEventRecordMessage.h"

@interface HDSPConfirmWakeUpIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *wakeUpConfirmedDate;
@property (readonly, nonatomic) NSDate *wakeUpConfirmedUntilDate; // ivar: _wakeUpConfirmedUntilDate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithWakeUpConfirmedDate:(id)arg0 wakeUpConfirmedUntilDate:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif