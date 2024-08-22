// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBTABGROUPSYNCAGENTPROXY_H
#define WBTABGROUPSYNCAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol WBTabGroupSyncAgentProxyProtocol;

#import <Foundation/Foundation.h>


@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentProxyProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProxy;
-(id)emptyCompletionHandler:(SEL)arg0 ;
-(id)init;
-(void)closeWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deleteTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteTabs:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteWindowStates:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertTabGroup:(id)arg0 afterTabGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertTabs:(id)arg0 inTabGroup:(id)arg1 afterTab:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveTab:(id)arg0 toTabGroup:(id)arg1 afterTab:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveTabGroup:(id)arg0 afterTabGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)reorderTab:(id)arg0 afterTab:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceTab:(id)arg0 withTab:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveBrowserState:(id)arg0 canSafelyTerminateCompletionHandler:(id)arg1 ;
-(void)saveBrowserState:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveTab:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveTabGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveWindowState:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleSyncIfNeeded;
-(void)updateTabs:(id)arg0 inTabGroup:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif