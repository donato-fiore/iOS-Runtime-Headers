// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSAVEDSTATEMANAGER_H
#define WBSAVEDSTATEMANAGER_H

@protocol WBTabGroupSyncAgentProxyProtocol;

#import <Foundation/Foundation.h>


@interface WBSavedStateManager : NSObject

@property (readonly, nonatomic) BOOL isEphemeral; // ivar: _isEphemeral
@property (readonly, nonatomic) NSObject<WBTabGroupSyncAgentProxyProtocol> *tabGroupSyncAgentProxy; // ivar: _tabGroupSyncAgentProxy


+(id)ephemeralManager;
-(BOOL)_isDatabaseEnabled;
-(id)init;
-(id)initWithTabGroupSyncAgentProxy:(id)arg0 ;
-(void)closeWindowState:(id)arg0 ;
-(void)deleteTabGroup:(id)arg0 ;
-(void)deleteTabs:(id)arg0 ;
-(void)deleteWindowState:(id)arg0 ;
-(void)deleteWindowStates:(id)arg0 ;
-(void)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)insertTabs:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 ;
-(void)reorderTab:(id)arg0 afterTab:(id)arg1 ;
-(void)replaceTab:(id)arg0 withTab:(id)arg1 ;
-(void)saveBrowserState:(id)arg0 ;
-(void)saveBrowserState:(id)arg0 canSafelyTerminateCompletionHandler:(id)arg1 ;
-(void)saveBrowserState:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveTab:(id)arg0 ;
-(void)saveTabGroup:(id)arg0 ;
-(void)saveWindowState:(id)arg0 ;
-(void)scheduleSyncIfNeeded;
-(void)updateTabsInTabGroup:(id)arg0 ;


@end


#endif