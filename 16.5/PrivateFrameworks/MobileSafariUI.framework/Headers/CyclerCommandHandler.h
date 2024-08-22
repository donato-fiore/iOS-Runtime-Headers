// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CYCLERCOMMANDHANDLER_H
#define CYCLERCOMMANDHANDLER_H

@class WebBookmarkCollection, NSMutableArray, WBSDistributedNotificationObserver, WBDatabaseLockAcquisitor, NSString;
@protocol WBDatabaseLockAcquisitorDelegate, WBSCyclerTestTarget;

#import <Foundation/Foundation.h>


@interface CyclerCommandHandler : NSObject <WBDatabaseLockAcquisitorDelegate, WBSCyclerTestTarget>

 {
    WebBookmarkCollection *_bookmarkCollection;
    NSMutableArray *_blocksAwaitingDatabaseLock;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
    WBDatabaseLockAcquisitor *_bookmarkDatabaseLockAcquisitor;
    BOOL _isWaitingToAcquireLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isBookmarkSyncEnabled;
-(BOOL)_isSpecialBookmark:(id)arg0 ;
-(NSUInteger)_adjustInsertionIndex:(NSUInteger)arg0 forInsertionIntoListWithIdentifier:(int)arg1 ;
-(id)_cyclerRepresentationOfBookmark:(id)arg0 ;
-(id)init;
-(id)initWithBookmarkCollection:(id)arg0 ;
-(void)_startMonitoringSyncStatusWithCompletionHandler:(id)arg0 ;
-(void)_tryToAcquireDatabaseLockWithCompletionHandler:(id)arg0 ;
-(void)clearBookmarksWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)createBookmarkListWithTitle:(id)arg0 inListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)createBookmarkWithTitle:(id)arg0 url:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)databaseLockAcquisitor:(id)arg0 acquiredLock:(BOOL)arg1 ;
-(void)deleteBookmarkWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)fetchTopLevelBookmarkList:(id)arg0 ;
-(void)moveBookmarkWithIdentifier:(id)arg0 intoListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)setTitle:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)setURL:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)syncBookmarksWithCompletionHandler:(id)arg0 ;


@end


#endif