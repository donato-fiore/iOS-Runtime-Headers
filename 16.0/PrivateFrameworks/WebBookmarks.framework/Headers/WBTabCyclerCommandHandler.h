// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBTABCYCLERCOMMANDHANDLER_H
#define WBTABCYCLERCOMMANDHANDLER_H

@class WBSDistributedNotificationObserver, NSTimer, NSString;
@protocol WBSCyclerTestTarget;

#import <Foundation/Foundation.h>

#import "WBTabCollection.h"
#import "_WBTabCyclerTabGroupUpdateObserver.h"
#import "WBTabGroupManager.h"

@interface WBTabCyclerCommandHandler : NSObject <WBSCyclerTestTarget>

 {
    WBTabCollection *_tabCollection;
    _WBTabCyclerTabGroupUpdateObserver *_tabGroupUpdateObserver;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
    NSTimer *_clearLocalTabGroupsRetryTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager; // ivar: _tabGroupManager


-(id)_cyclerRepresentationOfTab:(id)arg0 ;
-(id)_cyclerRepresentationOfTabGroup:(id)arg0 ;
-(id)_mutableTabBeforeIndex:(NSUInteger)arg0 inGroup:(id)arg1 ;
-(id)_tabBeforeIndex:(NSUInteger)arg0 inGroup:(id)arg1 ;
-(id)_tabGroupBeforeIndex:(NSUInteger)arg0 ;
-(id)_tabGroupWithIdentifier:(id)arg0 ;
-(id)_tabWithIdentifier:(id)arg0 ;
-(id)deviceIdentifier;
-(id)initWithTabGroupManager:(id)arg0 ;
-(void)_clearLocalTabGroupsWithCompletionHandler:(id)arg0 ;
// -(void)_clearLocalTabGroupsWithCompletionHandler:(id)arg0 retryCooldown:(unk)arg1  ;
-(void)_clearRemoteTabGroupsWithCompletionHandler:(id)arg0 ;
-(void)_deleteTab:(id)arg0 reply:(id)arg1 ;
-(void)_deleteTabGroup:(id)arg0 reply:(id)arg1 ;
-(void)_setTitle:(id)arg0 forTabGroupWithUUID:(id)arg1 reply:(id)arg2 ;
-(void)_setTitle:(id)arg0 forTabWithUUID:(id)arg1 reply:(id)arg2 ;
-(void)_startMonitoringSyncStatusWithCompletionHandler:(id)arg0 ;
-(void)_startMonitoringTabGroupUpdateExpectingMigration:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_triggerTabGroupSync;
-(void)clearBookmarksWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)createBookmarkListWithTitle:(id)arg0 inListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)createBookmarkWithTitle:(id)arg0 url:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)dealloc;
-(void)deleteBookmarkWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)fetchTopLevelBookmarkList:(id)arg0 ;
-(void)moveBookmarkWithIdentifier:(id)arg0 intoListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)setTitle:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)setURL:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)syncBookmarksWithCompletionHandler:(id)arg0 ;


@end


#endif