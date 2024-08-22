// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSMANAGEDOBJECT_H
#define NSMANAGEDOBJECT_H

@class NSString;
@protocol NSFetchRequestResult;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"
#import "NSManagedObjectID.h"
#import "NSEntityDescription.h"

@interface NSManagedObject : NSObject <NSFetchRequestResult>

 {
    int _cd_rc;
    unsigned int _cd_lockingInfo;
    unsigned int _cd_stateFlags;
    unsigned int _cd_extraFlags;
    id *_cd_rawData;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    *? _cd_extras;
    id *_cd_queueReference;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic, getter=isFault) BOOL fault;
@property (readonly, nonatomic) NSUInteger faultingState;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasPersistentChangedValues;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUpdated) BOOL updated;


+(BOOL)_classShouldAlwaysRegisterSelectorNamed:(char *)arg0 ;
+(BOOL)_hasOverriddenAwake;
+(BOOL)_isGeneratedClass;
+(BOOL)_isGeneratedClass_1;
+(BOOL)_useFastValidationMethod;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+(BOOL)resolveClassMethod:(SEL)arg0 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(Class)classForEntity:(id)arg0 ;
+(char *)_transientPropertiesChangesMask__;
+(id)_PFPlaceHolderSingleton;
+(id)_PFPlaceHolderSingleton_core;
+(id)_retain_1;
+(id)alloc;
+(id)allocWithEntity:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)allocWithZone_10_4:(struct _NSZone *)arg0 ;
+(id)alloc_10_4;
+(id)batchAllocateWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 count:(unsigned int)arg2 ;
+(id)fetchRequest;
+(struct ? *)_PFMOClassFactoryData;
+(unsigned int)allocBatch:(*id)arg0 withEntity:(id)arg1 count:(unsigned int)arg2 ;
+(void)_initializeAccessorStubs;
+(void)_initializePrimitiveAccessorStubs;
+(void)_release_1;
+(void)initialize;
-(*unk)methodForSelector:(SEL)arg0 ;
-(*void)observationInfo;
-(BOOL)_defaultValidation:(*id)arg0 error:(*id)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg0 inRelationshipWithName:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasFaultForRelationshipNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)validateForDelete:(*id)arg0 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(BOOL)validateValue:(*id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)retainCount;
-(id)_genericMutableOrderedSetValueForKey:(id)arg0 withIndex:(NSInteger)arg1 flags:(NSInteger)arg2 ;
-(id)_genericMutableSetValueForKey:(id)arg0 withIndex:(NSInteger)arg1 flags:(NSInteger)arg2 ;
-(id)_genericValueForKey:(id)arg0 withIndex:(NSInteger)arg1 flags:(NSInteger)arg2 ;
-(id)_implicitObservationInfo;
-(id)_initWithEntity:(id)arg0 withID:(id)arg1 withHandler:(id)arg2 withContext:(id)arg3 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg0 ;
-(id)bindableObjectPublisher;
-(id)changedValues;
-(id)changedValuesForCurrentEvent;
-(id)committedValuesForKeys:(id)arg0 ;
-(id)dictionaryWithPropertyValues;
-(id)dictionaryWithValuesForKeys:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)mutableArrayValueForKey:(id)arg0 ;
-(id)mutableOrderedSetValueForKey:(id)arg0 ;
-(id)mutableSetValueForKey:(id)arg0 ;
-(id)objectIDsForRelationshipNamed:(id)arg0 ;
-(id)primitiveValueForKey:(id)arg0 ;
-(id)retain;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(unsigned int)_versionReference__;
-(void)_didChangeValue:(id)arg0 forRelationship:(id)arg1 named:(id)arg2 withInverse:(id)arg3 ;
-(void)_setGenericValue:(id)arg0 forKey:(id)arg1 withIndex:(NSInteger)arg2 flags:(NSInteger)arg3 ;
-(void)_setVersionReference__:(unsigned int)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)awakeFromSnapshotEvents:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didAccessValueForKey:(id)arg0 ;
-(void)didChange:(NSUInteger)arg0 valuesAtIndexes:(id)arg1 forKey:(id)arg2 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)didChangeValueForKey:(id)arg0 withSetMutation:(NSUInteger)arg1 usingObjects:(id)arg2 ;
-(void)didFireFault;
-(void)didRefresh:(BOOL)arg0 ;
-(void)didSave;
-(void)didTurnIntoFault;
-(void)prepareForDeletion;
-(void)release;
-(void)setBindableObjectPublisher:(id)arg0 ;
-(void)setNilValueForKey:(id)arg0 ;
-(void)setObservationInfo:(*void)arg0 ;
-(void)setPrimitiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg0 ;
-(void)willAccessValueForKey:(id)arg0 ;
-(void)willChange:(NSUInteger)arg0 valuesAtIndexes:(id)arg1 forKey:(id)arg2 ;
-(void)willChangeValueForKey:(id)arg0 ;
-(void)willChangeValueForKey:(id)arg0 withSetMutation:(NSUInteger)arg1 usingObjects:(id)arg2 ;
-(void)willFireFault;
-(void)willRefresh:(BOOL)arg0 ;
-(void)willSave;
-(void)willTurnIntoFault;


@end


#endif