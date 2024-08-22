// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTALARMINTENTDONOR_H
#define MTALARMINTENTDONOR_H

@class NSMutableDictionary, NSString;
@protocol MTAlarmObserver, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarmStorage.h"

@interface MTAlarmIntentDonor : NSObject <MTAlarmObserver>



@property (readonly, nonatomic) NSMutableDictionary *alarmsByID; // ivar: _alarmsByID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTAlarmStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(id)initWithStorage:(id)arg0 ;
-(void)prepareAlarms;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;


@end


#endif