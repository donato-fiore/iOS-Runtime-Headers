// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKDATABASEZONEMIGRATIONOPERATION_H
#define FCCKDATABASEZONEMIGRATIONOPERATION_H

@class CKRecordZoneID, NSMutableSet, NSMutableArray;
@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;


#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {
    FCCKPrivateDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    id<FCCKDatabaseMigrator> *_migrator;
    id<FCCKZonePruningAssistant> *_pruningAssistant;
    id *_migrationCompletionHandler;
    NSMutableSet *_createdZones;
    NSMutableArray *_resultZoneIDsEligibleForDeletion;
    NSMutableArray *_resultRecordIDsEligibleForDeletion;
}




-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif