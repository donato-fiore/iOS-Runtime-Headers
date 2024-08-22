// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKDATABASEMIGRATIONOPERATION_H
#define FCCKDATABASEMIGRATIONOPERATION_H

@class NSMutableArray;
@protocol FCCKDatabaseMigrator;


#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKDatabaseMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    id<FCCKDatabaseMigrator> *_migrator;
    id *_migrationCompletionHandler;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}




-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif