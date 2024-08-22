// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDEFAULTREMINDERKITDATABASEMIGRATIONCONTEXT_H
#define CALDEFAULTREMINDERKITDATABASEMIGRATIONCONTEXT_H

@class NSString, REMDatabaseMigrationContext, REMStore;
@protocol CalReminderKitDatabaseMigrationContext;

#import <Foundation/Foundation.h>


@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMDatabaseMigrationContext *remDatabaseMigrationContext; // ivar: _remDatabaseMigrationContext
@property (readonly, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly) Class superclass;


+(NSUInteger)remMigrationStageFromCalMigrationStage:(NSUInteger)arg0 ;
-(BOOL)ensureAccountsExist:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)didEndMigrationWithSuccess:(BOOL)arg0 ;
-(void)migrationDidFinishWithResult:(NSUInteger)arg0 ;
-(void)recordMigrationFailure:(id)arg0 ;
-(void)willBeginMigration;


@end


#endif