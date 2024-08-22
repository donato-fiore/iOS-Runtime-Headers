// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDTHREADMIGRATOR_H
#define EDTHREADMIGRATOR_H

@class NSString, EFLocked, EMThreadScope;
@protocol EFLoggable, EDThreadMigratorDelegate, EFScheduler;

#import <Foundation/Foundation.h>

#import "EDInMemoryThreadQueryHandler.h"
#import "EDThreadPersistence.h"

@interface EDThreadMigrator : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EDThreadMigratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler; // ivar: _queryHandler
@property (readonly, nonatomic) EFLocked *state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) CGFloat threadFinalizationInterval; // ivar: _threadFinalizationInterval
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence; // ivar: _threadPersistence
@property (readonly, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope
@property (readonly, nonatomic) NSObject<EFScheduler> *workScheduler; // ivar: _workScheduler


+(id)log;
-(id)initWithThreadScope:(id)arg0 threadPersistence:(id)arg1 queryHandler:(id)arg2 delegate:(id)arg3 ;
-(void)_failMigration;
-(void)_finishMigrating;
-(void)_migrateNextBatchWithGeneration:(NSUInteger)arg0 ;
-(void)_scheduleFinalizationForBatchedObjectIDs:(id)arg0 withGeneration:(NSUInteger)arg1 forDelete:(BOOL)arg2 ;
-(void)addObjectIDsToMigrate:(id)arg0 ;
-(void)cancel;
-(void)changeObjectIDsToMigrate:(id)arg0 ;
-(void)deleteObjectIDsToMigrate:(id)arg0 ;
-(void)reset;
-(void)start;


@end


#endif