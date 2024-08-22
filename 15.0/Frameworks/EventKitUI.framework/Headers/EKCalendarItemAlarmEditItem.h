// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARITEMALARMEDITITEM_H
#define EKCALENDARITEMALARMEDITITEM_H

@class NSArray;


#import "EKCalendarItemEditItem.h"
#import "EKAlarmsViewModel.h"

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    NSUInteger _disclosedSubitem;
    NSArray *_alarms;
    BOOL _userChangedAlarm;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}


@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // ivar: _alarmsViewModel


-(BOOL)_alarmsMatchCalendarItem;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)configureForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateAlarms;
-(void)refreshFromCalendarItemAndStore;
-(void)setCalendarItem:(id)arg0 store:(id)arg1 ;
-(void)ttlLocationStatusChanged:(id)arg0 ;


@end


#endif