// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATIME_H
#define SATIME_H

@class NSDate, NSMutableSet;
@protocol SATimeServiceProtocol, SATimeEventRequestProtocol;

#import <Foundation/Foundation.h>


@interface SATime : NSObject <SATimeServiceProtocol>



@property (nonatomic) *void alarmQueue; // ivar: _alarmQueue
@property (weak, nonatomic) NSObject<SATimeEventRequestProtocol> *externalTimer; // ivar: _externalTimer
@property (readonly, nonatomic) NSDate *now; // ivar: _now
@property (retain, nonatomic) NSMutableSet *ongoingAlarms; // ivar: _ongoingAlarms


-(NSUInteger)alarmCount;
-(id)earliestAlarm;
-(id)initWithExternalTimer:(id)arg0 ;
-(id)setupAlarmFireAt:(id)arg0 forClient:(id)arg1 ;
-(void)addAlarm:(id)arg0 ;
-(void)advanceTimeWithEvent:(id)arg0 ;
-(void)alarmFired:(id)arg0 ;
-(void)cancelAlarmWithUUID:(id)arg0 ;
-(void)dealloc;
-(void)fireAlarmsIfReady;
-(void)ingestTAEvent:(id)arg0 ;
-(void)popAlarm;


@end


#endif