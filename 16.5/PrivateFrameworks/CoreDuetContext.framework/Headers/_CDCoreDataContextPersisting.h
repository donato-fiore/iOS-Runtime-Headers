// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCOREDATACONTEXTPERSISTING_H
#define _CDCOREDATACONTEXTPERSISTING_H

@class NSCountedSet, _DKCoreDataStorage;
@protocol _CDContextPersisting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting>



@property (readonly, nonatomic) NSCountedSet *keyPathRegistrationCount; // ivar: _keyPathRegistrationCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) _DKCoreDataStorage *storage; // ivar: _storage


+(id)persistenceWithDirectory:(id)arg0 ;
+(id)persistenceWithStorage:(id)arg0 ;
-(BOOL)_withMOFromEntityWithName:(id)arg0 andUniqunessPredicate:(id)arg1 insert:(BOOL)arg2 update:(id)arg3 ;
-(BOOL)fromEntityWithName:(id)arg0 deleteObjectsMatching:(id)arg1 ;
-(BOOL)fromEntityWithName:(id)arg0 fetchAllObjectsMatchingPredicate:(id)arg1 handlingMOs:(id)arg2 ;
-(BOOL)withMOFromEntityWithName:(id)arg0 andUniqunessPredicate:(id)arg1 insertOrUpdate:(id)arg2 ;
-(BOOL)withMOFromEntityWithName:(id)arg0 andUniqunessPredicate:(id)arg1 update:(id)arg2 ;
-(id)getMOC;
-(id)initWithStorage:(id)arg0 ;
-(id)loadRegistrations;
-(id)loadValues;
-(id)uniquenessPredicateForKeyPath:(id)arg0 ;
-(id)uniqunessPredicateForRegistration:(id)arg0 ;
-(void)_deleteKeyPaths:(id)arg0 ;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg0 ;
-(void)deleteRegistration:(id)arg0 ;
-(void)saveRegistration:(id)arg0 ;
-(void)saveValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif