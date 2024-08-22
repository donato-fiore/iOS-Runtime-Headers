// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTALARMDETAILITEM_H
#define EKEVENTALARMDETAILITEM_H

@class NSArray, NSMutableArray;


#import "EKEventDetailItem.h"
#import "EKUIRecurrenceAlertController.h"
#import "EKAlarmsViewModel.h"

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    NSUInteger _disclosedSubitem;
    NSArray *_alarms;
    NSMutableArray *_alarmPopupMenus;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}


@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // ivar: _alarmsViewModel


-(BOOL)_alarmsAreCreatable;
-(BOOL)_alarmsAreEditable;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)_createRealPopupMenuForIndex:(NSInteger)arg0 popupCell:(id)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)_updateAlarms;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;
-(void)ttlLocationStatusChanged:(id)arg0 ;


@end


#endif