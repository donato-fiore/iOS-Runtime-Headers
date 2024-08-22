// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMDATABASEMIGRATIONCONTEXT_H
#define REMDATABASEMIGRATIONCONTEXT_H

@class NSError, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "REMStore.h"
#import "REMStoreContainerToken.h"

@interface REMDatabaseMigrationContext : NSObject

@property (retain, nonatomic) REMStore *cachedStore; // ivar: _cachedStore
@property (retain, nonatomic) REMStoreContainerToken *containerToken; // ivar: _containerToken
@property (nonatomic) BOOL hasPerformedEnsureAccountsExist; // ivar: _hasPerformedEnsureAccountsExist
@property (nonatomic) BOOL isDatabaseMigrated;
@property (retain, nonatomic) NSError *lastReportedError; // ivar: _lastReportedError
@property (retain, nonatomic) NSString *lastReportedErrorIdentifier; // ivar: _lastReportedErrorIdentifier
@property (nonatomic) NSUInteger lastReportedErrorStage; // ivar: _lastReportedErrorStage
@property (retain, nonatomic) NSDate *migrationStartDate; // ivar: _migrationStartDate
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;


-(BOOL)_cleanLocalDatabases:(*id)arg0 ;
-(BOOL)ensureAccountsExist:(*id)arg0 ;
-(BOOL)ensureAccountsExist:(id)arg0 error:(*id)arg1 ;
-(BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)arg0 error:(*id)arg1 ;
-(id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg0 ;
-(id)init;
-(id)initWithSandboxDatabaseEnabled:(BOOL)arg0 ;
-(id)remStore;
-(void)_diagnosticReportWithStage:(NSUInteger)arg0 failureIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_postMigrationLocalAccountCleanup;
-(void)dealloc;
-(void)destroySandboxContainerIfNecessary;
-(void)reportMigrationDidFinishWithSuccess:(BOOL)arg0 ;
-(void)reportMigrationErrorWithIdentifier:(id)arg0 atStage:(NSUInteger)arg1 error:(id)arg2 objectLocator:(id)arg3 ;
-(void)reportMigrationWillBegin;
-(void)setShouldDataAccessStopSyncingReminders:(BOOL)arg0 ;


@end


#endif