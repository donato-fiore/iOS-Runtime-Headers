// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EDTHREADMIGRATIONSTATE_H
#define _EDTHREADMIGRATIONSTATE_H

@class NSCountedSet;

#import <Foundation/Foundation.h>


@interface _EDThreadMigrationState : NSObject {
    NSCountedSet *_objectIDsToMigrate;
    NSCountedSet *_recentlyMigratedObjectIDs;
    NSCountedSet *_recentlyDeletedObjectIDs;
}


@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFullyMigrated;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger unmigratedCount;


// -(BOOL)_verifyIsMigratingGeneration:(NSUInteger)arg0 stateVerifier:(id)arg1 logIdentifier:(unk)arg2 logAction:(id)arg3 logCount:(id)arg4  ;
-(BOOL)isRecentlyMigrated:(id)arg0 ;
-(BOOL)verifyIsMigratingGeneration:(NSUInteger)arg0 andIsInState:(NSUInteger)arg1 logIdentifier:(id)arg2 logAction:(id)arg3 logCount:(NSUInteger)arg4 ;
-(BOOL)verifyIsMigratingGeneration:(NSUInteger)arg0 andIsInState:(NSUInteger)arg1 orState:(NSUInteger)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(NSUInteger)arg5 ;
-(id)init;
-(id)nextBatch;
-(void)_removeAllObjectIDs;
-(void)addDeletedObjectIDs:(id)arg0 ;
-(void)addObjectIDs:(id)arg0 ;
-(void)cancel;
-(void)fail;
-(void)removeDeletedObjectIDs:(id)arg0 ;
-(void)removeMigratedObjectIDs:(id)arg0 ;
-(void)removeObjectIDs:(id)arg0 ;
-(void)reset;


@end


#endif