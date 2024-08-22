// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDMIGRATIONMONITOR_H
#define SDMIGRATIONMONITOR_H

@protocol SDEventHandlerProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (nonatomic) BOOL finishedDataMigration; // ivar: _finishedDataMigration
@property (nonatomic) BOOL foundExtensions; // ivar: _foundExtensions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL unlocked; // ivar: _unlocked


+(id)sharedInstance;
-(id)init;
-(void)_didFindExtensions:(id)arg0 ;
-(void)_finishMigration;
-(void)dealloc;
-(void)monitorDataMigrationWithCompletionBlock:(id)arg0 ;
-(void)registerHandlerWithEventMonitor:(id)arg0 ;
-(void)resumeMigrationQueue;
-(void)suspendMigrationQueue;
-(void)unlock;


@end


#endif