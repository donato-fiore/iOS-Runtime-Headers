// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUICALENDARSINTENT_H
#define EKUICALENDARSINTENT_H

@class INIntent, NSArray, NSNumber;



@interface EKUICalendarsIntent : INIntent

@property (nonatomic, copy) NSArray *calendars;
@property (nonatomic, retain) NSNumber *hideAllDayEvents;
@property (nonatomic, retain) NSNumber *mirrorCalendarApp;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif