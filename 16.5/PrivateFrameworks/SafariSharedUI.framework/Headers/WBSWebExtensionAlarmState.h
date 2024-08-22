// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONALARMSTATE_H
#define WBSWEBEXTENSIONALARMSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionAlarmState : NSObject {
    NSMutableDictionary *_alarms;
}




+(id)_alarmInfoWithName:(id)arg0 alarmInfo:(id)arg1 ;
-(void)clearAlarmWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)createAlarmWithName:(id)arg0 alarmInfo:(id)arg1 extension:(id)arg2 ;
-(void)getAlarmWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllAlarmsWithCompletionHandler:(id)arg0 ;
-(void)invalidateAlarms;


@end


#endif