// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCONCEPTINDEXMANAGER_H
#define HDCONCEPTINDEXMANAGER_H

@class HKObserverSet, NSMutableArray, _HKDelayedOperation, NSString;
@protocol HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyDatabaseAvailabilityObserver, HDOntologyImportStatusObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDConceptIndexManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyDatabaseAvailabilityObserver, HDOntologyImportStatusObserver>

 {
    NSUInteger _batchSize;
    HDProfile *_profile;
    HKObserverSet *_observerSet;
    uint8_t _isOntologyUpdating;
    uint8_t _isInvalidated;
    Class _conceptIndexerClass;
    os_unfair_lock_s _stateLock;
    BOOL _hasScheduledIndexing;
    BOOL _shouldResetIndexNextExecution;
    NSObject<OS_dispatch_queue> *_delayedOperationQueue;
    NSMutableArray *_cachedReasonsForReindex;
    _HKDelayedOperation *_updateIndexOperation;
    CGFloat _conceptIndexUpdateDebounceIntervalOverride;
}


@property (readonly) NSUInteger currentExecutionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers; // ivar: _ignoresAutomaticProcessingTriggers
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_conceptIndexManagerDidFinish; // ivar: _unitTesting_conceptIndexManagerDidFinish


-(BOOL)performanceTest_triggerConceptIndexing;
-(id)init;
-(id)initWithConceptIndexerClass:(Class)arg0 batchSize:(NSUInteger)arg1 profile:(id)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(void)accountExistenceNotifier:(id)arg0 didChangeHealthRecordAccountExistence:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidateAndWait;
-(void)ontologyDatabase:(id)arg0 didBecomeAvailable:(BOOL)arg1 ;
-(void)ontologyDatabaseReferenceOntologyFinishedImport:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)ontologyDatabaseReferenceOntologyWillImport:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetWithReindex;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)unitTest_debounceUpdateDelayOverride:(CGFloat)arg0 ;
-(void)unitTest_scheduleUpdateWithDescription:(id)arg0 ;
-(void)unitTest_triggerConceptIndexing;


@end


#endif