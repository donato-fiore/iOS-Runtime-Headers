// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSCLIPCLEANUPMANAGER_H
#define CPSCLIPCLEANUPMANAGER_H

@class NSMutableDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, RBSTerminationAssertionObserving, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface CPSClipCleanupManager : NSObject <LSApplicationWorkspaceObserverProtocol, RBSTerminationAssertionObserving>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingTerminationAssertionsByBundleIDs;
    NSMutableDictionary *_clipDeletionPromisesByBundleIDs;
    NSObject<OS_os_transaction> *_deletionTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_parentBundleIDsFromAppRecord:(id)arg0 ;
+(id)sharedManager;
-(BOOL)_shouldDeleteClipWithRecord:(id)arg0 parentRecord:(id)arg1 ;
-(id)_allAppClipsForPlaceholderOnly:(BOOL)arg0 ;
-(id)init;
-(void)_applicationsDidChange:(id)arg0 operationHandler:(id)arg1 ;
-(void)_deleteClipWhenBackgrounded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_didReceiveApplicationChangedNotification:(id)arg0 operationHandler:(id)arg1 ;
-(void)_didReceiveApplicationRegisteredNotification:(id)arg0 ;
-(void)_didReceiveApplicationUnregisteredNotification:(id)arg0 ;
-(void)_didReceiveMCSettingsChangedNotification:(id)arg0 ;
-(void)_handleNewInstalledAppWithBundleID:(id)arg0 ;
-(void)_handleNewUninstalledAppWithBundleID:(id)arg0 ;
-(void)_registerDistributedNotificationHandler;
-(void)_registerLocalNotifications;
-(void)_removeClipCancellingPendingRemovalIfNeeded:(id)arg0 completionHandler:(id)arg1 ;
-(void)_transferTCCPermissionsFromClipWithBundleID:(id)arg0 toParentAppWithBundleID:(id)arg1 ;
-(void)_uninstallClipWithBundleIdentifier:(id)arg0 deletionPromise:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)assertionTargetProcessDidExit:(id)arg0 ;
-(void)dealloc;
-(void)removeClipsByUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeFailedClipInstallsWithCompletionHandler:(id)arg0 ;
-(void)uninstallClipsWithParentAppInstalledWithCompletionHandler:(id)arg0 ;


@end


#endif