// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCHANGEHANDLINGCONTAINER_H
#define PLCHANGEHANDLINGCONTAINER_H

@class NSDictionary, NSURL;
@protocol PLChangePublisher;

#import <Foundation/Foundation.h>

#import "PLChangeNode.h"
#import "PLCoreDataChangeMerger.h"
#import "PLPersistentHistoryChangeDistributor.h"

@interface PLChangeHandlingContainer : NSObject {
    PLChangeNode *_changeNode;
    PLCoreDataChangeMerger *_changeMerger;
    id<PLChangePublisher> *_changePublisher;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
}


@property (readonly, copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;
@property (readonly, nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (readonly, copy) NSURL *libraryURL; // ivar: _libraryURL


-(id)initWithLibraryURL:(id)arg0 changePublisher:(id)arg1 libraryServicesManager:(id)arg2 persistentStoreCoordinator:(id)arg3 ;
-(void)connectManagedObjectContext:(id)arg0 ;
-(void)dealloc;
-(void)disconnectManagedObjectContext:(id)arg0 ;
-(void)distributeChangesSinceLastCheckpoint;
-(void)handleUnknownMergeEvent;
-(void)pause;
-(void)pauseLaunchEventNotifications;
-(void)publishRemoteChangeEvent:(id)arg0 delayedSaveActionsDetail:(id)arg1 reply:(id)arg2 ;
-(void)registerToReceiveCoreDataChanges:(id)arg0 ;
-(void)resume;
-(void)start;
-(void)stop;
-(void)unpauseLaunchEventNotifications;


@end


#endif