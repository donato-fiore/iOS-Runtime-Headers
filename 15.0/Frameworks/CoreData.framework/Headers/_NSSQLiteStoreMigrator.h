// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSSQLITESTOREMIGRATOR_H
#define _NSSQLITESTOREMIGRATOR_H

@class NSArray, NSMutableDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "NSSQLCore.h"
#import "NSSQLModel.h"
#import "NSSQLiteAdapter.h"
#import "NSMappingModel.h"
#import "NSSQLiteConnection.h"

@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    BOOL _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    BOOL _hasCloudKitTables;
    BOOL _hasDeferredLightweightMigration;
    BOOL _forcedMigration;
}


@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation; // ivar: _destinationConfigurationForCloudKitValidation


+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif