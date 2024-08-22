// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKALARMSVIEWMODEL_H
#define EKALARMSVIEWMODEL_H

@class EKCalendarItem, NSMutableArray;

#import <Foundation/Foundation.h>


@interface EKAlarmsViewModel : NSObject {
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    NSUInteger _locationStatus;
}


@property (retain, nonatomic) EKCalendarItem *calendarItem; // ivar: _calendarItem
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (readonly, nonatomic) NSUInteger locationStatus;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) NSMutableArray *uiAlarms; // ivar: _uiAlarms


+(id)labelTextForIndex:(NSUInteger)arg0 ;
+(void)subscribeToDarwinNotifications;
+(void)unsubscribeFromDarwinNotifications;
-(BOOL)_hasUIAlarmChangedFromUIAlarm:(id)arg0 toUIAlarm:(id)arg1 ;
-(BOOL)isAlarmEffectivelyDisabled:(id)arg0 ;
-(id)createAlarmEditItemViewControllerWithFrame:(struct CGRect )arg0 forAlarmAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCalendarItem:(id)arg0 ;
-(void)_updateAlarms;
-(void)_updateLeaveNowFlags;
-(void)dealloc;
-(void)reloadTTLLocationAuthorization:(id)arg0 ;
-(void)updateIfNeeded;
-(void)updatedUIAlarmFromUIAlarm:(id)arg0 toUIAlarm:(id)arg1 atIndex:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif