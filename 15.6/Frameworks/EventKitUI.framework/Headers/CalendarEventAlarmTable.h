// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALENDAREVENTALARMTABLE_H
#define CALENDAREVENTALARMTABLE_H

@class UITableView, NSString, NSIndexPath;
@protocol UITableViewDelegate, UITableViewDataSource, CalendarEventAlarmTableDelegate, EKStyleProvider;



@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource>

 {
    NSInteger _alarmIdentifier;
    NSString *_customString;
    BOOL _immediateAlarmCreation;
    NSIndexPath *_selectedItem;
}


@property (weak, nonatomic) NSObject<CalendarEventAlarmTableDelegate> *alarmTableDelegate; // ivar: _alarmTableDelegate
@property (nonatomic) BOOL customSelected; // ivar: _customSelected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL eventHasTravelTime; // ivar: _eventHasTravelTime
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL leaveNowAlarmSelected; // ivar: _leaveNowAlarmSelected
@property (nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // ivar: _shouldAllowAlarmsTriggeringAfterStartDate
@property (nonatomic) BOOL shouldShowLeaveNowOption; // ivar: _shouldShowLeaveNowOption
@property (retain, nonatomic) NSObject<EKStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timeToLeaveLocationStatus; // ivar: _timeToLeaveLocationStatus
@property (nonatomic) BOOL useAllDayAlarms; // ivar: _useAllDayAlarms


-(BOOL)timeToLeaveAlarmIsEffectivelyDisabled;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)_presetIdentifierForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)presetIdentifier;
-(NSInteger)presetIdentifierAtIndex:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)countOfPresets;
-(id)_indexPathForPresetIdentifier:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(int)intervalForPresetIdentifier:(NSInteger)arg0 ;
-(void)_selectIndexPath:(id)arg0 ;
-(void)setCustomString:(id)arg0 ;
-(void)setPresetIdentifier:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;


@end


#endif