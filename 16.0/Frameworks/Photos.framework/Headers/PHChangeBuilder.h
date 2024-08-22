// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCHANGEBUILDER_H
#define PHCHANGEBUILDER_H

@class NSManagedObjectContext, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"
#import "PHPersistentChangeToken.h"
#import "PHPersistentChangeFetchOptions.h"
#import "PHPersistentChangeEnumerationContext.h"

@interface PHChangeBuilder : NSObject {
    NSManagedObjectContext *_context;
    PHPhotoLibrary *_library;
    PHPersistentChangeToken *_changeToken;
    PHPersistentChangeFetchOptions *_fetchOptions;
    PHPersistentChangeEnumerationContext *_enumerationContext;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_deletedUuidsByObjectId;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    BOOL _unknownMergeEvent;
}




+(id)changeWithManagedObjectContext:(id)arg0 library:(id)arg1 options:(id)arg2 transaction:(id)arg3 ;
+(id)persistentChangeWithManagedObjectContext:(id)arg0 library:(id)arg1 options:(id)arg2 transaction:(id)arg3 enumerationContext:(id)arg4 ;
-(BOOL)changeCountExeedsThreshold:(NSUInteger)arg0 ;
-(id)_uuidForDeleteChange:(id)arg0 uniquedObjectID:(id)arg1 ;
-(id)buildChange;
-(id)buildPersistentChange;
-(id)initWithManagedObjectContext:(id)arg0 library:(id)arg1 options:(id)arg2 enumerationContext:(id)arg3 ;
-(void)_recordChangedProperties:(id)arg0 forObjectID:(id)arg1 ;
-(void)_recordDeleteChange:(id)arg0 withUniquedObjectID:(id)arg1 ;
-(void)_recordInsertChange:(id)arg0 withUniquedObjectID:(id)arg1 ;
-(void)_recordUpdateChange:(id)arg0 withUniquedObjectID:(id)arg1 ;
-(void)recordChange:(id)arg0 ;
-(void)recordChangesInTransaction:(id)arg0 ;
-(void)recordNonIncrementalChanges;
-(void)recordTransaction:(id)arg0 ;


@end


#endif