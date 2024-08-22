// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTOBJECT_H
#define EKPERSISTENTOBJECT_H

@class NSHashTable, NSMutableDictionary, CADGenerationStampedObjectID, NSString, NSDictionary;
@protocol EKProtocolObject, EKFrozenMeltedPair;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"
#import "EKObjectID.h"

@interface EKPersistentObject : NSObject <EKProtocolObject, EKFrozenMeltedPair>

 {
    _opaque_pthread_mutex_t _lock;
    EKEventStore *_eventStore;
    EKObjectID *_objectID;
    int _databaseRestoreGeneration;
    unsigned int _flags;
    NSHashTable *_coCommitObjects;
    NSMutableDictionary *_loadedProperties;
    NSMutableDictionary *_updatedProperties;
}


@property (readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSString *semanticIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)_shouldRetainPropertyForKey:(id)arg0 ;
+(Class)alternateUniverseClass;
+(Class)frozenClass;
+(Class)meltedClass;
+(id)_createNonPartialObjectFromObject:(id)arg0 ifPropertyIsUnavailable:(id)arg1 ;
+(id)_relationForKey:(id)arg0 ;
+(id)allObjectsWithChangesRelatedToObjects:(id)arg0 ;
+(id)defaultPropertiesToLoad;
+(id)propertiesToUnloadOnCommit;
+(id)propertiesUnavailableForPartialObjects;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
+(void)_takeDefaultValuesForObjects:(id)arg0 inEventStore:(id)arg1 ;
-(BOOL)_areDefaultPropertiesLoaded;
-(BOOL)_isNew;
-(BOOL)_isPendingDelete;
-(BOOL)_isPendingInsert;
-(BOOL)_isPendingUpdate;
-(BOOL)_loadChildIdentifiersForKey:(id)arg0 values:(*id)arg1 ;
-(BOOL)_loadRelationForKey:(id)arg0 value:(*id)arg1 ;
-(BOOL)existsInStore;
-(BOOL)isCompletelyEqual:(id)arg0 ;
-(BOOL)isDirty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ignoringProperties:(id)arg1 ;
-(BOOL)isNew;
-(BOOL)isPropertyDirty:(id)arg0 ;
-(BOOL)isPropertyLoaded:(id)arg0 ;
-(BOOL)isPropertyUnavailable:(id)arg0 ;
-(BOOL)primitiveBoolValueForKey:(id)arg0 ;
-(BOOL)refresh;
-(CGFloat)primitiveDoubleValueForKey:(id)arg0 ;
-(Class)frozenClass;
-(id)_loadStringValueForKey:(id)arg0 ;
-(id)_loadedPropertyForKey:(id)arg0 ;
-(id)_loadedPropertyKeys;
-(id)_primitiveValueForKey:(id)arg0 loader:(id)arg1 ;
-(id)_propertyForKey:(id)arg0 ;
-(id)changeSet;
-(id)coCommitObjects;
-(id)dirtyPropertiesAndValues;
-(id)dump;
-(id)existingMeltedObject;
-(id)frozenObject;
-(id)frozenObjectInStore:(id)arg0 ;
-(id)init;
-(id)initWithAlternateUniverseObject:(id)arg0 inEventStore:(id)arg1 withUpdatedChildObjects:(id)arg2 ;
-(id)initWithObject:(id)arg0 ;
-(id)loadedPropertyForKey:(id)arg0 ;
-(id)meltedObjectInStore:(id)arg0 ;
-(id)ownedObjects;
-(id)primitiveDataValueForKey:(id)arg0 ;
-(id)primitiveDateValueForKey:(id)arg0 ;
-(id)primitiveNumberValueForKey:(id)arg0 ;
-(id)primitiveRelationValueForKey:(id)arg0 ;
-(id)primitiveSecurityScopedURLWrapperValueForKey:(id)arg0 ;
-(id)primitiveStringValueForKey:(id)arg0 ;
-(int)primitiveIntValueForKey:(id)arg0 ;
-(void)_addObjectCore:(id)arg0 toValues:(id)arg1 relation:(id)arg2 ;
-(void)_createLoadedPropertiesIfNeeded;
-(void)_createUpdatedPropertiesIfNeeded;
-(void)_loadDefaultPropertiesIfNeeded;
-(void)_loadPropertiesIfNeeded:(id)arg0 ;
-(void)_primitiveSetValue:(id)arg0 forKey:(id)arg1 ;
-(void)_releaseLoadedProperties;
-(void)_removeObjectCore:(id)arg0 fromValues:(id)arg1 relation:(id)arg2 ;
-(void)_setDefaultPropertiesLoaded:(BOOL)arg0 ;
-(void)_setPendingDelete:(BOOL)arg0 ;
-(void)_setPendingInsert:(BOOL)arg0 ;
-(void)_setPendingUpdate:(BOOL)arg0 ;
-(void)_setProperty:(id)arg0 forKey:(id)arg1 forRelation:(id)arg2 isUpdatedProperty:(BOOL)arg3 ;
-(void)_setProperty:(id)arg0 forKey:(id)arg1 isRelation:(BOOL)arg2 isUpdatedProperty:(BOOL)arg3 ;
-(void)_setProperty:(id)arg0 forKey:(id)arg1 isUpdatedProperty:(BOOL)arg2 ;
-(void)_takeValues:(id)arg0 forKeys:(id)arg1 relatedObjectValues:(id)arg2 ;
-(void)_takeValues:(id)arg0 relatedObjectValues:(id)arg1 ;
-(void)_takeValuesForDefaultPropertyKeys:(id)arg0 values:(id)arg1 relatedObjectValues:(id)arg2 ;
-(void)addCoCommitObject:(id)arg0 ;
-(void)changed;
-(void)dealloc;
-(void)didCommit;
-(void)internalAddCoCommitObject:(id)arg0 ;
-(void)internalRemoveCoCommitObject:(id)arg0 ;
-(void)loadPropertiesIfNeeded:(id)arg0 ;
-(void)primitiveAddRelatedObject:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveRemoveRelatedObject:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetBoolValue:(BOOL)arg0 forKey:(id)arg1 ;
-(void)primitiveSetDataValue:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetDateValue:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetDoubleValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)primitiveSetIntValue:(int)arg0 forKey:(id)arg1 ;
-(void)primitiveSetNumberValue:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetRelationValue:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetSecurityScopedURLWrapperValue:(id)arg0 forKey:(id)arg1 ;
-(void)primitiveSetStringValue:(id)arg0 forKey:(id)arg1 ;
-(void)removeCoCommitObject:(id)arg0 ;
-(void)reset;
-(void)reset:(id)arg0 ;
-(void)rollback;
-(void)takeDefaultValues:(id)arg0 ;
-(void)takeValues:(id)arg0 forKeys:(id)arg1 ;
-(void)takeValuesForDefaultPropertyKeys:(id)arg0 values:(id)arg1 ;
-(void)unloadPropertyForKey:(id)arg0 ;


@end


#endif