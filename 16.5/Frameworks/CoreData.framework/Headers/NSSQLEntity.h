// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLENTITY_H
#define NSSQLENTITY_H

@class NSString, NSMutableDictionary, NSArray, NSMutableArray;


#import "NSStoreMapping.h"
#import "NSSQLModel.h"
#import "NSEntityDescription.h"
#import "NSSQLPrimaryKey.h"
#import "NSSQLEntityKey.h"
#import "NSSQLOptLockKey.h"
#import "NSSQLEntity.h"
#import "NSSQLStoreMappingGenerator.h"
#import "NSKnownKeysMappingStrategy.h"
#import "NSSQLEntity_DerivedAttributesExtension.h"

@interface NSSQLEntity : NSStoreMapping {
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_columnsToFetchNoSubentities;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    NSMutableArray *_virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    _NSRange _toOneRange;
    NSMutableArray *_uniqueProperties;
    NSMutableArray *_multicolumnUniquenessConstraints;
    *void _fetch_entity_plan;
    NSMutableDictionary *_rtreeIndices;
    NSKnownKeysMappingStrategy *_propertyMapping;
    *void _odiousHashHackStorage;
    NSMutableArray *_derivedAttributes;
    NSSQLEntity_DerivedAttributesExtension *_derivedAttributeExtension;
    __sqlentityFlags _sqlentityFlags;
}




+(void)initialize;
-(id)attributeColumns;
-(id)attributes;
-(id)description;
-(id)entityDescription;
-(id)externalName;
-(id)foreignEntityKeyColumns;
-(id)foreignKeyColumns;
-(id)foreignOrderKeyColumns;
-(id)initWithModel:(id)arg0 entityDescription:(id)arg1 ;
-(id)manyToManyRelationships;
-(id)model;
-(id)name;
-(id)rootEntity;
-(id)tableName;
-(id)toManyRelationships;
-(void)copyValuesForReadOnlyFetch:(id)arg0 ;
-(void)dealloc;


@end


#endif