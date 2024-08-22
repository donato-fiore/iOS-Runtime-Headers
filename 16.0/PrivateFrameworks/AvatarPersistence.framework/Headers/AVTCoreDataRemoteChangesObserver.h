// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOREDATAREMOTECHANGESOBSERVER_H
#define AVTCOREDATAREMOTECHANGESOBSERVER_H

@class NSMutableArray;
@protocol AVTCoreDataRemoteChangesObserver, AVTEventCoalescer, AVTCoreDataPersistentStoreConfiguration, AVTUILogger, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface AVTCoreDataRemoteChangesObserver : NSObject <AVTCoreDataRemoteChangesObserver>



@property (readonly, nonatomic) NSMutableArray *changeHandlers; // ivar: _changeHandlers
@property (readonly, nonatomic) NSObject<AVTEventCoalescer> *coalescer; // ivar: _coalescer
@property (readonly, nonatomic) NSObject<AVTCoreDataPersistentStoreConfiguration> *configuration; // ivar: _configuration
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) NSObject<NSObject> *observationToken; // ivar: _observationToken
@property (readonly, nonatomic) NSMutableArray *transactionsForPendingChanges; // ivar: _transactionsForPendingChanges
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)isObservingChanges;
-(id)changeTransactionsForToken:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 workQueue:(id)arg1 coalescer:(id)arg2 environment:(id)arg3 ;
-(void)addChangesHandler:(id)arg0 ;
-(void)performManagedObjectContextWork:(id)arg0 ;
-(void)processRemoteChangeNotification:(id)arg0 completion:(id)arg1 ;
-(void)registerCoalescerEventHandler;
-(void)startObservingChanges;


@end


#endif