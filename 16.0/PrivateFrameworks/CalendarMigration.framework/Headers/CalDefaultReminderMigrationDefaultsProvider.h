// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDEFAULTREMINDERMIGRATIONDEFAULTSPROVIDER_H
#define CALDEFAULTREMINDERMIGRATIONDEFAULTSPROVIDER_H

@class NSString;
@protocol CalReminderMigrationDefaultsProvider;

#import <Foundation/Foundation.h>


@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly) Class superclass;


+(id)sharedInstance;


@end


#endif