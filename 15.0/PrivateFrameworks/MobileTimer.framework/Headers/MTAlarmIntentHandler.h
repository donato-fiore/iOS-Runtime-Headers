// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTALARMINTENTHANDLER_H
#define MTALARMINTENTHANDLER_H


#import <Foundation/Foundation.h>

#import "MTAlarmManager.h"

@interface MTAlarmIntentHandler : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager


+(id)createUserInfoWithIntentName:(id)arg0 alarmIDString:(id)arg1 time:(id)arg2 label:(id)arg3 ;
-(id)initWithAlarmManager:(id)arg0 ;


@end


#endif