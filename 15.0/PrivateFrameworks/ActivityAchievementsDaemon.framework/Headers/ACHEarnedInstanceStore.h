// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHEARNEDINSTANCESTORE_H
#define ACHEARNEDINSTANCESTORE_H

@class NSMutableArray, NSString, NSArray, NSHashTable, HDProfile;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceDuplicateUtility.h"
#import "ACHEarnedInstanceEntityWrapper.h"

@interface ACHEarnedInstanceStore : NSObject <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver>



@property (retain, nonatomic) NSMutableArray *allEarnedInstances; // ivar: _allEarnedInstances
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device; // ivar: _device
@property (retain, nonatomic) ACHEarnedInstanceDuplicateUtility *duplicateUtility; // ivar: _duplicateUtility
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *earnedInstanceQueue; // ivar: _earnedInstanceQueue
@property (readonly, nonatomic) NSArray *earnedInstances;
@property (retain, nonatomic) ACHEarnedInstanceEntityWrapper *entityWrapper; // ivar: _entityWrapper
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialEarnedInstanceFetchComplete; // ivar: _initialEarnedInstanceFetchComplete
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(BOOL)_queue_addEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 triggerSync:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_queue_removeEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(BOOL)addEarnedInstances:(id)arg0 databaseContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)addEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(BOOL)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 ;
-(BOOL)loadAllEarnedInstancesFromDatabaseIfNecessary;
-(BOOL)removeAllEarnedInstancesWithError:(*id)arg0 ;
-(BOOL)removeEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(id)_queue_addEarnedInstancesWithSingleTemplate:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 error:(*id)arg3 ;
-(id)earnedInstancesForTemplateUniqueName:(id)arg0 ;
-(id)initWithProfile:(id)arg0 earnedInstanceEntityWrapper:(id)arg1 earnedInstanceDuplicateUtility:(id)arg2 device:(unsigned char)arg3 ;
-(void)_notifyInitialFetchComplete;
-(void)_notifyObserversOfAddedEarnedInstances:(id)arg0 ;
-(void)_notifyObserversOfRemovedEarnedInstances:(id)arg0 ;
-(void)_queue_appendOrInsertEarnedInstanceToInMemoryStore:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)earnedInstanceEntityDidApplyJournalEntriesInsertedEarnedInstances:(id)arg0 removedEarnedInstances:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif