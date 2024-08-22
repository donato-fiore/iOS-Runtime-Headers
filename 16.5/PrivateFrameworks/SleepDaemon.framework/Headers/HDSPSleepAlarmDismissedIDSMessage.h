// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPALARMDISMISSEDIDSMESSAGE_H
#define HDSPSLEEPALARMDISMISSEDIDSMESSAGE_H

@class NSDate;


#import "HDSPEventRecordMessage.h"

@interface HDSPSleepAlarmDismissedIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *dismissedDate;


-(NSUInteger)destinations;
-(id)dateDescription;
-(id)initWithDismissedDate:(id)arg0 ;


@end


#endif