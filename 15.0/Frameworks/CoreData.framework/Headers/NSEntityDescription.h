// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSENTITYDESCRIPTION_H
#define NSENTITYDESCRIPTION_H

@class NSString, NSData, NSMutableDictionary, NSDictionary, NSArray, NSExpression;
@protocol NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"
#import "NSEntityDescription.h"

@interface NSEntityDescription : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration>

 {
    int _cd_rc;
    id *_snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id *_propertyMapping;
    *_NSRange _propertyRanges;
    __entityDescriptionFlags _entityDescriptionFlags;
    *_ExtraEntityIVars _extraIvars;
    NSMutableDictionary *_userInfo;
    id *_flattenedSubentities;
    **id _kvcPropertyAccessors;
    NSInteger _modelsReferenceIDForEntity;
}


@property (getter=isAbstract) BOOL abstract;
@property (readonly, copy) NSDictionary *attributesByName;
@property (retain) NSArray *compoundIndexes;
@property (retain, nonatomic) NSExpression *coreSpotlightDisplayNameExpression;
@property (copy) NSArray *indexes;
@property (copy) NSString *managedObjectClassName;
@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *name;
@property (retain) NSArray *properties;
@property (readonly, copy) NSDictionary *propertiesByName;
@property (readonly, copy) NSDictionary *relationshipsByName;
@property (copy) NSString *renamingIdentifier;
@property (retain) NSArray *subentities;
@property (readonly, copy) NSDictionary *subentitiesByName;
@property (readonly) NSEntityDescription *superentity;
@property (retain) NSArray *uniquenessConstraints;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;


+(BOOL)supportsSecureCoding;
+(id)_MOClassName;
+(id)entityForName:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)insertNewObjectForEntityForName:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(void)initialize;
-(*void)_leopardStyleAttributesByName;
-(*void)_leopardStyleRelationshipsByName;
-(*void)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(NSUInteger)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_isEditable;
-(BOOL)_isSchemaEqual:(id)arg0 ;
-(BOOL)_skipValidation;
-(BOOL)_subentitiesIncludes:(id)arg0 ;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfEntity:(id)arg0 ;
-(NSUInteger)_offsetRelationshipIndex:(NSUInteger)arg0 fromSuperEntity:(id)arg1 andIsToMany:(BOOL)arg2 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)_initWithName:(id)arg0 ;
-(id)_localRelationshipNamed:(id)arg0 ;
-(id)_newMappingForPropertiesOfRange:(unsigned int)arg0 ;
-(id)_propertySearchMapping;
-(id)_propertyWithRenamingIdentifier:(id)arg0 ;
-(id)attributeKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)elementID;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)inverseForRelationshipKey:(id)arg0 ;
-(id)keypathsToPrefetchForDeletePropagation;
-(id)relationshipsWithDestinationEntity:(id)arg0 ;
-(id)retain;
-(id)toManyRelationshipKeys;
-(id)toOneRelationshipKeys;
-(struct _NSRange *)_propertyRangesByType;
-(void)_addFactoryToRetainList:(id)arg0 ;
-(void)_addProperty:(id)arg0 ;
-(void)_addSubentity:(id)arg0 ;
-(void)_createCachesAndOptimizeState;
-(void)_flattenProperties;
-(void)_restoreValidation;
-(void)_setIsEditable:(BOOL)arg0 ;
-(void)_stripForMigration;
-(void)_throwIfNotEditable;
-(void)_writeIntoData:(id)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(id)arg4 uniquedMappings:(id)arg5 entities:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;
-(void)setElementID:(id)arg0 ;


@end


#endif