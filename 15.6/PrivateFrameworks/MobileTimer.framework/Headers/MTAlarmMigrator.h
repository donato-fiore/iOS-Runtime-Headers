// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTALARMMIGRATOR_H
#define MTALARMMIGRATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MTAlarm.h"

@interface MTAlarmMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *alarms; // ivar: _alarms
@property (retain, nonatomic) MTAlarm *sleepAlarm; // ivar: _sleepAlarm


-(void)cleanUpOldNotifications;
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;


@end


#endif