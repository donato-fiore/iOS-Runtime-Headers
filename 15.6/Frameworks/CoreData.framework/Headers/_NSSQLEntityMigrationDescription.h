// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSSQLENTITYMIGRATIONDESCRIPTION_H
#define _NSSQLENTITYMIGRATIONDESCRIPTION_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSEntityMapping.h"
#import "NSSQLEntity.h"

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
    BOOL _updateUsingCopy;
}


@property (readonly, nonatomic) NSSQLEntity *sourceEntity; // ivar: _srcEntity


-(id)description;
-(void)dealloc;
-(void)validateCloudKitEntityMigration;


@end


#endif