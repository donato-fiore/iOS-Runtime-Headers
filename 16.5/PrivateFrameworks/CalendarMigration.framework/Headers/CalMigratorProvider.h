// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALMIGRATORPROVIDER_H
#define CALMIGRATORPROVIDER_H


#import <Foundation/Foundation.h>


@interface CalMigratorProvider : NSObject



+(id)reminderMigrator;
+(id)reminderMigratorWithDefaultsProvider:(id)arg0 ;
+(id)reminderMigratorWithReminderKitProvider:(id)arg0 defaultsProvider:(id)arg1 ;


@end


#endif