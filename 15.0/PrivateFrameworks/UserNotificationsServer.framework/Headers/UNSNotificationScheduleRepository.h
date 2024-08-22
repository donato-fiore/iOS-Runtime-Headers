// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONSCHEDULEREPOSITORY_H
#define UNSNOTIFICATIONSCHEDULEREPOSITORY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedDictionaryRepository.h"

@interface UNSNotificationScheduleRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_dateFormatter;
-(id)_queue_scheduleForBundleIdentifier:(id)arg0 ;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg0 librarian:(id)arg1 ;
-(id)scheduleForBundleIdentifier:(id)arg0 ;
-(void)_queue_performMigration;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg0 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg0 ;
-(void)_queue_setSchedule:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg0 ;
-(void)performMigration;
-(void)removeScheduleForBundleIdentifier:(id)arg0 ;
-(void)setSchedule:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif