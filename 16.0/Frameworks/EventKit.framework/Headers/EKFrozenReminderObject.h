// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKFROZENREMINDEROBJECT_H
#define EKFROZENREMINDEROBJECT_H

@class NSArray;


#import "EKPersistentObject.h"
#import "EKChangeSet.h"
#import "EKReminderStore.h"

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id *_remObject;
}


@property (copy, nonatomic) NSArray *path; // ivar: _path
@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;


+(BOOL)canCommitSelf;
+(Class)frozenClass;
+(Class)meltedClass;
+(id)uniqueIdentifierForREMObject:(id)arg0 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)existsInStore;
-(BOOL)isCompletelyEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ignoringProperties:(id)arg1 ;
-(BOOL)isFrozen;
-(BOOL)isNew;
-(BOOL)isPartialObject;
-(BOOL)isPropertyUnavailable:(id)arg0 ;
-(NSUInteger)hash;
-(id)REMObject;
-(id)changeSet;
-(id)existingMeltedObject;
-(id)frozenObject;
-(id)initWithObject:(id)arg0 ;
-(id)initWithREMObject:(id)arg0 inStore:(id)arg1 ;
-(id)initWithREMObject:(id)arg0 inStore:(id)arg1 withChanges:(id)arg2 ;
-(id)remObjectID;
-(id)semanticIdentifier;
-(id)uniqueIdentifier;
-(id)updateParentToCommitSelf:(id)arg0 ;
-(id)updatedFrozenObjectWithChanges:(id)arg0 ;
-(id)updatedFrozenObjectWithChanges:(id)arg0 updatedChildren:(id)arg1 ;
-(id)valueForSingleValueKey:(id)arg0 backingValue:(id)arg1 ;
-(int)entityType;


@end


#endif