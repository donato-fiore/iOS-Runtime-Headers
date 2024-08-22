// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIBUCKETUNSCREENEDSENDERSQUERYHANDLER_H
#define MUIBUCKETUNSCREENEDSENDERSQUERYHANDLER_H

@class NSMutableArray, NSString, EMObjectID;
@protocol EMMessageListItemQueryResultsObserver, EFCancelable, EMMessageRepositoryUnscreenedSendersQueryObserver_xpc, EFScheduler;

#import <Foundation/Foundation.h>

#import "EDGroupedSenderQueryHandler.h"

@interface MUIBucketUnscreenedSendersQueryHandler : NSObject <EMMessageListItemQueryResultsObserver, EFCancelable>

 {
    NSMutableArray *_groupedSenderObjectIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishInitialLoad; // ivar: _didFinishInitialLoad
@property (retain, nonatomic) EDGroupedSenderQueryHandler *groupedSenderQueryHandler; // ivar: _groupedSenderQueryHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) NSObject<EMMessageRepositoryUnscreenedSendersQueryObserver_xpc> *observer; // ivar: _observer
@property (retain, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(BOOL)start;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remindMeNotificationController:(id)arg3 observer:(id)arg4 ;
-(void)_addNewObjectIDs:(id)arg0 after:(id)arg1 ;
-(void)_addNewObjectIDs:(id)arg0 before:(id)arg1 ;
-(void)_notifyObserverOfLatestGroupedSenders;
-(void)cancel;
-(void)observer:(id)arg0 matchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(void)observer:(id)arg0 matchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)observer:(id)arg0 matchedChangesForObjectIDs:(id)arg1 ;
-(void)observer:(id)arg0 matchedDeletedObjectIDs:(id)arg1 ;
-(void)observer:(id)arg0 matchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(void)observer:(id)arg0 matchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)observer:(id)arg0 matchedOldestItemsUpdatedForMailboxes:(id)arg1 ;
-(void)observer:(id)arg0 replacedExistingObjectID:(id)arg1 withNewObjectID:(id)arg2 ;
-(void)observer:(id)arg0 wasUpdated:(id)arg1 ;
-(void)observerDidFinishInitialLoad:(id)arg0 ;
-(void)observerWillRestart:(id)arg0 ;


@end


#endif