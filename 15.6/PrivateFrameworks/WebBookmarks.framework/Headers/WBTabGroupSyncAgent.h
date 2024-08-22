// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBTABGROUPSYNCAGENT_H
#define WBTABGROUPSYNCAGENT_H

@class NSString;
@protocol WBTabGroupSyncAgentProtocol;

#import <Foundation/Foundation.h>

#import "WBCollectionConfiguration.h"
#import "WBTabCollection.h"

@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol>



@property (readonly, nonatomic) WBCollectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WBTabCollection *tabCollection; // ivar: _tabCollection


-(id)initWithConfiguration:(id)arg0 ;
-(void)_applyChangeSet:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_performOnTabCollectionQueue:(id)arg0 scheduleSync:(unk)arg1 completionHandler:(BOOL)arg2  ;
-(void)applyChangeSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)closeWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteTabs:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWindowStates:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertTabs:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)reorderTab:(id)arg0 afterTab:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceTab:(id)arg0 withTab:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveBrowserState:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveTab:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleSyncIfNeeded;
-(void)updateTabs:(id)arg0 inTabGroup:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif