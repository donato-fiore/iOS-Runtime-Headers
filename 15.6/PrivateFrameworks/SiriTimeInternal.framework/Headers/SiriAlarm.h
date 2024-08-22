// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIALARM_H
#define SIRIALARM_H

@class INObject, NSDateComponents, NSNumber, NSString, NSArray;


#import "SleepAlarmAttribute.h"

@interface SiriAlarm : INObject

@property (nonatomic, copy) NSDateComponents *dateTime;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *firing;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, retain) SleepAlarmAttribute *sleepAlarmAttribute;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif