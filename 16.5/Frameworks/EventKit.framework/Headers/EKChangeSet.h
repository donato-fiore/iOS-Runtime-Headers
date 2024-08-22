// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCHANGESET_H
#define EKCHANGESET_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKChangeSet : NSObject <NSCopying>

 {
    BOOL _skipsPersistentObjectCopy;
}


@property (nonatomic) BOOL isDeleted; // ivar: _isDeleted
@property (nonatomic) BOOL isModified; // ivar: _isModified
@property (nonatomic) BOOL isNew; // ivar: _isNew
@property (nonatomic) BOOL isSaved; // ivar: _isSaved
@property (nonatomic) BOOL isUndeleted; // ivar: _isUndeleted
@property (nonatomic) BOOL isUndetached; // ivar: _isUndetached
@property (retain, nonatomic) NSMutableDictionary *multiValueAdditions; // ivar: _multiValueAdditions
@property (retain, nonatomic) NSMutableDictionary *multiValueRemovals; // ivar: _multiValueRemovals
@property (retain, nonatomic) NSMutableDictionary *singleValueChanges; // ivar: _singleValueChanges


-(BOOL)hasChanges;
-(BOOL)hasUnsavedChangeForKey:(id)arg0 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)hasUnsavedMultiValueAdditionForKey:(id)arg0 ;
-(BOOL)hasUnsavedMultiValueRemovalForKey:(id)arg0 ;
-(BOOL)isEffectivelyEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUniqueAddedObject:(id)arg0 forKey:(id)arg1 ;
-(BOOL)skipsPersistentObjectCopy;
-(id)_initWithChangeSet:(id)arg0 filter:(id)arg1 ;
-(id)_semanticIdentifierToObjectMapForObjects:(id)arg0 ;
-(id)changedKeys;
-(id)changedMultiValueKeys;
-(id)changedSingleValueKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChangeSet:(id)arg0 ;
-(id)initWithChangeSet:(id)arg0 changesToKeep:(id)arg1 ;
-(id)initWithChangeSet:(id)arg0 changesToSkip:(id)arg1 ;
-(id)initWithChangeSet:(id)arg0 filter:(id)arg1 ;
-(id)initWithSingleValueChanges:(id)arg0 multiValueAdditions:(id)arg1 multiValueRemovals:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)summary;
-(id)unsavedMultiValueAddedObjectsForKey:(id)arg0 ;
-(id)unsavedMultiValueRemovedObjectsForKey:(id)arg0 ;
-(id)valueForSingleValueKey:(id)arg0 basedOn:(id)arg1 ;
-(id)valueForSingleValueKey:(id)arg0 basedOn:(id)arg1 and:(id)arg2 ;
-(id)valuesForMultiValueKey:(id)arg0 basedOn:(id)arg1 and:(id)arg2 ;
-(id)valuesForMultiValueKey:(id)arg0 basedOnSet:(id)arg1 ;
-(void)_addToChanges:(id)arg0 forMultiValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 shouldCopyKeyCallback:(id)arg4 ;
-(void)_cleanupEmptySetsForMultiValueKey:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)addChanges:(id)arg0 shouldCopyKeyCallback:(id)arg1 ;
-(void)addChangesAndUpdateUniqueMultiValueObjects:(id)arg0 ;
-(void)addToChanges:(id)arg0 forMultiValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(void)changeSingleValue:(id)arg0 forKey:(id)arg1 basedOn:(id)arg2 ;
-(void)changeSingleValue:(id)arg0 forKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(void)forceChangeValue:(id)arg0 forKey:(id)arg1 ;
-(void)markChangesAsSaved;
-(void)removeAllChangesExceptRemovals;
-(void)removeFromChanges:(id)arg0 forMultiValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3 ;
-(void)replaceMultiChangeAddedObject:(id)arg0 withObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)arg0 ;
-(void)rollbackChanges;
-(void)rollbackChangesForKeys:(id)arg0 ;
-(void)setSkipsPersistentObjectCopy:(BOOL)arg0 ;


@end


#endif