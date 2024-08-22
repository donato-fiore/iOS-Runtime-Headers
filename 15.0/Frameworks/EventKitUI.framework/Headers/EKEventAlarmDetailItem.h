// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTALARMDETAILITEM_H
#define EKEVENTALARMDETAILITEM_H

@class NSArray;


#import "EKEventDetailItem.h"
#import "EKAlarmEditItemViewController.h"
#import "EKAlarmsViewModel.h"

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    NSUInteger _disclosedSubitem;
    NSArray *_alarms;
    EKAlarmEditItemViewController *_currentEditViewController;
}


@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // ivar: _alarmsViewModel


-(BOOL)_alarmsAreCreatable;
-(BOOL)_alarmsAreEditable;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateAlarms;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;
-(void)ttlLocationStatusChanged:(id)arg0 ;


@end


#endif