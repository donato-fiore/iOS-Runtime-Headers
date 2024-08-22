// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTWIDGETPROVIDER_H
#define MTWIDGETPROVIDER_H

@class NSString, NSDate, NSTimer;
@protocol MTAlarmObserver, MTAlarmStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTWidgetProvider : NSObject <MTAlarmObserver>



@property (readonly, nonatomic) NSObject<MTAlarmStorage> *alarmStorage; // ivar: _alarmStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastReloadRequestDate; // ivar: _lastReloadRequestDate
@property (retain, nonatomic) NSTimer *reloadTimer; // ivar: _reloadTimer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(BOOL)bypassReloadForAlarm:(id)arg0 ;
-(BOOL)bypassReloadForAlarms:(id)arg0 ;
-(id)initWithAlarmStorage:(id)arg0 ;
-(void)handleSystemReady;
-(void)reloadTimeline;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;


@end


#endif