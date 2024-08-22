// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTNEXTALARMMANAGER_H
#define MTNEXTALARMMANAGER_H

@class NSSet;
@protocol NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarmManager.h"

@interface MTNextAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmManager *alarmManager; // ivar: _alarmManager
@property (retain, nonatomic) NSSet *nextAlarms; // ivar: _nextAlarms
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)init;
-(void)_handleAlarmsDidChange;
-(void)calculateNextAlarms;


@end


#endif