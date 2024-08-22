// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERADATEDISPLAYCONTROLLER_H
#define HUCAMERADATEDISPLAYCONTROLLER_H

@class NSCalendar, NSDate, NSDateComponents;
@protocol HUActsAsLabel;

#import <Foundation/Foundation.h>


@interface HUCameraDateDisplayController : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (retain, nonatomic) NSDateComponents *currentDateComponents; // ivar: _currentDateComponents
@property (nonatomic) NSUInteger dateDisplayType; // ivar: _dateDisplayType
@property (nonatomic) BOOL dayHasChanged; // ivar: _dayHasChanged
@property (weak, nonatomic) NSObject<HUActsAsLabel> *dayLabel; // ivar: _dayLabel
@property (nonatomic) unsigned int minuteUnitFlags; // ivar: _minuteUnitFlags
@property (nonatomic) unsigned int secondUnitFlags; // ivar: _secondUnitFlags
@property (weak, nonatomic) NSObject<HUActsAsLabel> *timeLabel; // ivar: _timeLabel


-(BOOL)_isSameMinuteAsDate:(id)arg0 ;
-(BOOL)_isSameSecondAsDate:(id)arg0 ;
-(BOOL)_shouldUpdateDisplayWithDate:(id)arg0 ;
-(id)initWithDayOfWeekLabel:(id)arg0 timeLabel:(id)arg1 ;
-(void)_resetLabels;
-(void)_updateDayLabel;
-(void)_updateTimeLabel;
-(void)updateDisplayDateWithDate:(id)arg0 forType:(NSUInteger)arg1 ;


@end


#endif