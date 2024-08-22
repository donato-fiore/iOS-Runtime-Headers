// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOREDATACHANGEMERGER_H
#define PLCOREDATACHANGEMERGER_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLManagedObjectContextList.h"

@interface PLCoreDataChangeMerger : NSObject {
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    BOOL _invalidated;
}


@property (copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo; // ivar: _allDidSaveObjectIDsUserInfo
@property (nonatomic) BOOL isMergingCoalescedSaveNotification; // ivar: _isMergingCoalescedSaveNotification


-(id)allContexts;
-(id)allContextsNotIdenticalTo:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)handleUnknownMergeEvent;
-(void)invalidate;
-(void)mergeChangesFromRemoteContextSave:(id)arg0 intoAllContextsNotIdenticalTo:(id)arg1 completionHandler:(id)arg2 ;
-(void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAllObjects;
-(void)registerToReceiveCoreDataChanges:(id)arg0 ;


@end


#endif