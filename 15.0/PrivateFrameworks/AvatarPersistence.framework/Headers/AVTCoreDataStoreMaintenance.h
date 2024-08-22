// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOREDATASTOREMAINTENANCE_H
#define AVTCOREDATASTOREMAINTENANCE_H

@protocol AVTCoreDataStoreMaintenance, AVTEventCoalescer, AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance>



@property (readonly, nonatomic) NSObject<AVTEventCoalescer> *eventCoalescer; // ivar: _eventCoalescer
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, copy, nonatomic) id *mocFactory; // ivar: _mocFactory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)fixDuplicateRecordIdentifiers:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)mitigateDuplicatesWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(id)duplicatedIdentifiersInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(id)fetchDuplicatedRecordsForIdentifiers:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithEnvironment:(id)arg0 managedObjectContextFactory:(id)arg1 ;
// -(id)initWithWorkQueue:(id)arg0 managedObjectContextFactory:(id)arg1 eventCoalescer:(unk)arg2 logger:(id)arg3  ;
-(void)runMaintenanceTasks;
-(void)storeDidChange;


@end


#endif