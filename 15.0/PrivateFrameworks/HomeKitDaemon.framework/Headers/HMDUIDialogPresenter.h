// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUIDIALOGPRESENTER_H
#define HMDUIDIALOGPRESENTER_H

@class HMFObject, NSMutableArray;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;



@interface HMDUIDialogPresenter : HMFObject

@property (retain, nonatomic) id *currentContext; // ivar: _currentContext
@property (nonatomic) *__CFUserNotification currentNotification; // ivar: _currentNotification
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *notificationSem; // ivar: _notificationSem
@property (nonatomic) BOOL peerDeviceAcceptedSelection; // ivar: _peerDeviceAcceptedSelection
@property (retain, nonatomic) NSMutableArray *pendingContexts; // ivar: _pendingContexts
@property (nonatomic) BOOL selectedByPeerDevice; // ivar: _selectedByPeerDevice
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedUIDialogPresenter;
-(BOOL)_addCurrentNotification:(struct __CFUserNotification *)arg0 withContext:(id)arg1 ;
-(BOOL)_addToPendingContext:(id)arg0 ;
-(BOOL)_isPendingContext:(id)arg0 ;
-(BOOL)_presentDialogWithInfo:(id)arg0 options:(NSUInteger)arg1 targetResponse:(NSUInteger)arg2 textField:(*id)arg3 withContext:(id)arg4 ;
-(BOOL)_presentDialogWithInfo:(id)arg0 options:(NSUInteger)arg1 targetResponse:(NSUInteger)arg2 textField:(*id)arg3 withContext:(id)arg4 selectedByPeerDevice:(*BOOL)arg5 timeout:(CGFloat)arg6 ;
-(BOOL)_presentDialogWithInfo:(id)arg0 options:(NSUInteger)arg1 textField:(*id)arg2 withContext:(id)arg3 ;
-(BOOL)_removeCurrentNotification:(struct __CFUserNotification *)arg0 currentSelection:(BOOL)arg1 selectedByPeerDevice:(*BOOL)arg2 andContext:(id)arg3 ;
-(id)init;
-(void)_displayInternalErrorWithContext:(id)arg0 message:(id)arg1 ;
-(void)_displayKeychainSyncForHome:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_displayUpgradeNeededWithContext:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_displayiCloudSwitchWithContext:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_requestUserPermissionForDeletionOfHomeWithName:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestUserPermissionForLegacyWACAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestUserPermissionForRemovalOfRouter:(id)arg0 accessoriesRequiringManualReconfiguration:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestUserPermissionWithAccessoryPPIDInfo:(id)arg0 name:(id)arg1 category:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_showUserDialogForIncompatibleAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)confirmReportAccessory:(id)arg0 context:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)dismissPendingDialogDueToPeerDeviceSelection:(BOOL)arg0 context:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)dismissPendingDialogWithContext:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)displayExecutionErrorOfTrigger:(id)arg0 partialSuccess:(BOOL)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)displayInternalErrorWithContext:(id)arg0 message:(id)arg1 ;
-(void)displayKeychainSyncForHome:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)displayUpgradeNeededWithContext:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)displayiCloudSwitchWithContext:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestUserPermissionForDeletionOfHomeWithName:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestUserPermissionForLegacyWACAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestUserPermissionForRemovalOfRouter:(id)arg0 accessoriesRequiringManualReconfiguration:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestUserPermissionWithAccessoryPPIDInfo:(id)arg0 name:(id)arg1 category:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)showUserDialogForIncompatibleAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif