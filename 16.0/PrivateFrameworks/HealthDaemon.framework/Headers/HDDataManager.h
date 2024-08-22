// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATAMANAGER_H
#define HDDATAMANAGER_H

@class NSMutableDictionary, NSNumber, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDQuantitySeriesManager.h"

@interface HDDataManager : NSObject <HDDiagnosticObject>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_observersByDataType;
    os_unfair_lock_s _synchronousObserverLock;
    NSMutableDictionary *_synchronousObserversBySampleType;
    BOOL _needsSynchronousNotification;
    NSUInteger _openTransactions;
    NSMutableDictionary *_pendingObjectsBySampleType;
    NSNumber *_lastAnchor;
    CGFloat _lastNotifyLogTime;
    NSInteger _notifyCount;
    NSInteger _samplesAddedCount;
    NSInteger _samplesJournaledCount;
    HDProfile *_profile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDQuantitySeriesManager *quantitySeriesManager; // ivar: _quantitySeriesManager
@property (readonly) Class superclass;


-(BOOL)associateObjectUUIDs:(id)arg0 objectUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)containsDataObject:(id)arg0 ;
// -(BOOL)deleteDataObjects:(id)arg0 restrictedSourceEntities:(id)arg1 failIfNotFound:(BOOL)arg2 recursiveDeleteAuthorizationBlock:(id)arg3 error:(unk)arg4  ;
// -(BOOL)deleteDataObjectsOfClass:(Class)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 deletedSampleCount:(*NSUInteger)arg3 notifyObservers:(BOOL)arg4 generateDeletedObjects:(BOOL)arg5 recursiveDeleteAuthorizationBlock:(id)arg6 error:(unk)arg7  ;
// -(BOOL)deleteDataObjectsOfClass:(Class)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 deletedSampleCount:(*NSUInteger)arg3 notifyObservers:(BOOL)arg4 generateDeletedObjects:(BOOL)arg5 userRequested:(BOOL)arg6 recursiveDeleteAuthorizationBlock:(id)arg7 error:(unk)arg8  ;
-(BOOL)deleteObjectsWithUUIDCollection:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteSamplesWithSourceEntities:(id)arg0 error:(*id)arg1 ;
// -(BOOL)deleteSamplesWithTypes:(id)arg0 sourceBundleIdentifier:(id)arg1 userRequested:(BOOL)arg2 recursiveDeleteAuthorizationBlock:(id)arg3 error:(unk)arg4  ;
// -(BOOL)deleteSamplesWithTypes:(id)arg0 sourceEntities:(id)arg1 recursiveDeleteAuthorizationBlock:(id)arg2 error:(unk)arg3  ;
-(BOOL)deleteSamplesWithUUIDs:(id)arg0 generateDeletedObjects:(BOOL)arg1 transaction:(id)arg2 error:(*id)arg3 ;
// -(BOOL)deleteSamplesWithUUIDs:(id)arg0 userRequested:(BOOL)arg1 recursiveDeleteAuthorizationBlock:(id)arg2 error:(unk)arg3  ;
-(BOOL)insertDataObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertDataObjects:(id)arg0 sourceEntity:(id)arg1 deviceEntity:(id)arg2 sourceVersion:(id)arg3 creationDate:(CGFloat)arg4 error:(*id)arg5 ;
-(BOOL)insertDataObjects:(id)arg0 withProvenance:(id)arg1 creationDate:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)insertDataObjects:(id)arg0 withProvenance:(id)arg1 creationDate:(CGFloat)arg2 skipInsertionFilter:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)insertDataObjects:(id)arg0 withProvenance:(id)arg1 creationDate:(CGFloat)arg2 skipInsertionFilter:(BOOL)arg3 updateSourceOrder:(BOOL)arg4 resolveAssociations:(BOOL)arg5 error:(*id)arg6 ;
-(NSInteger)hasSampleWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(void)addObserver:(id)arg0 forDataType:(id)arg1 ;
-(void)addObserverForAllTypes:(id)arg0 ;
-(void)addSynchronousObserver:(id)arg0 forSampleType:(id)arg1 ;
-(void)closeObserverTransaction;
-(void)openObserverTransaction;
-(void)removeObserver:(id)arg0 forDataType:(id)arg1 ;
-(void)removeObserverForAllTypes:(id)arg0 ;
-(void)removeSynchronousObserver:(id)arg0 forSampleType:(id)arg1 ;
-(void)setBackgroundObserverFrequency:(id)arg0 forDataType:(id)arg1 frequency:(NSInteger)arg2 appSDKVersion:(unsigned int)arg3 completion:(id)arg4 ;
-(void)shouldNotifyForDataObjects:(id)arg0 provenance:(id)arg1 database:(id)arg2 anchor:(id)arg3 ;
-(void)shouldNotifyForDeletedSamplesOfTypes:(id)arg0 intervals:(id)arg1 userRequested:(BOOL)arg2 transaction:(id)arg3 anchor:(id)arg4 ;
-(void)synchronouslyCloseObserverTransactionAndNotify;


@end


#endif