// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALARMSEARCH_H
#define ALARMSEARCH_H

@class INObject, NSNumber, NSString, NSArray, NSDateComponents, INDateComponentsRange;



@interface AlarmSearch : INObject

@property (nonatomic) NSInteger alarmReferenceType;
@property (nonatomic) NSInteger alarmSearchStatus;
@property (nonatomic, retain) NSNumber *includeSleepAlarm;
@property (nonatomic, retain) NSNumber *isMeridianInferred;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) NSInteger period;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, retain) INDateComponentsRange *timeRange;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif