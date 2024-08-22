// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITMETADATAMIGRATIONCONTEXT_H
#define PFCLOUDKITMETADATAMIGRATIONCONTEXT_H

@class NSMutableArray, NSMutableSet, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSSQLModel.h"

@interface PFCloudKitMetadataMigrationContext : NSObject {
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    NSMutableSet *_constrainedEntitiesToPreflight;
    BOOL _hasWorkToDo;
    BOOL _needsMetdataMigrationToNSCKRecordMetadata;
    BOOL _needsOldTableDrop;
    BOOL _needsMirroredRelationshipsLinkedToZone;
    BOOL _needsImportAfterClientMigration;
    BOOL _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    BOOL _needsAnalyzedHistoryCheck;
    BOOL _needsCleanupFromNeedsNewShareInvitationBug;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}




-(id)init;
-(void)addConstrainedEntityToPreflight:(id)arg0 ;
-(void)dealloc;


@end


#endif