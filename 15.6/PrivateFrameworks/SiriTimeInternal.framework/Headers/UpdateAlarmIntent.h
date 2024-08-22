// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPDATEALARMINTENT_H
#define UPDATEALARMINTENT_H

@class INIntent, NSString, NSDateComponents;


#import "SiriAlarm.h"
#import "AlarmSearch.h"

@interface UpdateAlarmIntent : INIntent

@property (nonatomic, retain) SiriAlarm *alarm;
@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic) NSInteger operation;
@property (nonatomic, copy) NSString *proposedLabel;
@property (nonatomic, copy) NSDateComponents *proposedTime;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif