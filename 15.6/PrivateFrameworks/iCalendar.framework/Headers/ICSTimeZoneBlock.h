// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTIMEZONEBLOCK_H
#define ICSTIMEZONEBLOCK_H

@class NSArray;


#import "ICSComponent.h"
#import "ICSDate.h"

@interface ICSTimeZoneBlock : ICSComponent

@property (retain, nonatomic) ICSDate *dtstart;
@property (retain, nonatomic) NSArray *rdate;
@property (retain, nonatomic) NSArray *rrule;
@property (nonatomic) NSArray *tzname;
@property (nonatomic) NSInteger tzoffsetfrom;
@property (nonatomic) NSInteger tzoffsetto;


-(BOOL)validate:(*id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)addRecurrenceDate:(id)arg0 ;


@end


#endif