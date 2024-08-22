// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPALARMSNOOZEDIDSMESSAGE_H
#define HDSPSLEEPALARMSNOOZEDIDSMESSAGE_H

@class NSDate;


#import "HDSPEventRecordMessage.h"

@interface HDSPSleepAlarmSnoozedIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *snoozedUntilDate;


-(NSUInteger)destinations;
-(id)dateDescription;
-(id)initWithSnoozedUntilDate:(id)arg0 ;


@end


#endif