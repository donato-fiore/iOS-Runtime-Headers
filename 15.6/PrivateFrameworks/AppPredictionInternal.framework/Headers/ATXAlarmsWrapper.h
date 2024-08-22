// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXALARMSWRAPPER_H
#define ATXALARMSWRAPPER_H

@class MTAlarmManager;

#import <Foundation/Foundation.h>


@interface ATXAlarmsWrapper : NSObject {
    MTAlarmManager *_alarmManager;
}




-(void)alarms:(id)arg0 ;


@end


#endif