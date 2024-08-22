// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSSQLTABLEMIGRATIONDESCRIPTION_H
#define _NSSQLTABLEMIGRATIONDESCRIPTION_H

@class NSMutableArray, NSMutableDictionary, NSNumber, NSMutableSet;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"

@interface _NSSQLTableMigrationDescription : NSObject {
    NSSQLEntity *_sourceRootEntity;
    int _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasComplexSchemaTransformations;
    NSMutableSet *_addedColumnSet;
    NSMutableSet *_renamedTableSet;
    NSMutableSet *_renamedColumnSet;
    NSMutableSet *_renamedMTMSet;
    NSMutableSet *_raisedColumnSet;
    NSMutableSet *_droppedEntitySet;
    NSMutableSet *_collapsedEntitySet;
    NSMutableSet *_columnsUpgradedToMandatory;
    NSMutableSet *_delayedDropColumnSet;
}


@property (readonly, nonatomic) NSSQLEntity *rootEntity; // ivar: _rootEntity


-(id)description;
-(void)dealloc;


@end


#endif