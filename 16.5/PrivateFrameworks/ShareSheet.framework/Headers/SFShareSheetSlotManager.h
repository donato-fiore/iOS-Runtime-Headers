// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHARESHEETSLOTMANAGER_H
#define SFSHARESHEETSLOTMANAGER_H

@class NSXPCConnection, NSString;
@protocol SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate, SFShareSheetSlotManagerDelegate;

#import <Foundation/Foundation.h>


@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFShareSheetSlotManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)init;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(id)remoteObjectProxy;
-(id)synchronousRemoteObjectProxy;
-(void)activate;
-(void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg0 ;
-(void)activityViewControllerPerformEditActionsWithSessionID:(id)arg0 ;
-(void)activityViewControllerPerformedActivityWithSessionID:(id)arg0 presentationMs:(NSUInteger)arg1 totalShareTimeMs:(NSUInteger)arg2 activityType:(id)arg3 success:(BOOL)arg4 ;
-(void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg0 ;
-(void)activityViewControllerWithSessionID:(id)arg0 didLongPressShareActivityWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 favoritedActivity:(BOOL)arg1 withIdentifier:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)activityViewControllerWithSessionID:(id)arg0 provideFeedbackForPeopleSuggestionWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 removedPersonWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedActionWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedActivityWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedDefaultActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg0 selectedPersonWithIdentifier:(id)arg1 ;
-(void)activityViewControllerWithSessionID:(id)arg0 toggledActivityWithIdentifier:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg0 updatedFavoritesProxies:(id)arg1 activityCategory:(NSInteger)arg2 ;
-(void)connectToDaemonWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)connectToDaemonWithSessionID:(id)arg0 discoveryContext:(id)arg1 assetIdentifiers:(id)arg2 urlsBeingShared:(id)arg3 shouldSuggestFamilyMembers:(id)arg4 isSharePlayAvailable:(id)arg5 peopleSuggestionBundleIds:(id)arg6 completionHandler:(id)arg7 ;
-(void)connectUIServiceToDaemonWithSessionID:(id)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)createSharingURLForCollaborationRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg0 ;
-(void)deleteSharingURL:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)didPerformInServiceActivityWithIdentifier:(id)arg0 completed:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)didUpdateAirDropTransferWithChange:(id)arg0 ;
-(void)ensureConnectionEstablished;
-(void)ensureXPCStarted;
-(void)interrupted;
-(void)invalidate;
-(void)invalidated;
-(void)isShareOwnerOrAdminForFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)performActivityInHostWithUUID:(id)arg0 ;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg0 ;
-(void)performExtensionActivityInHostWithBundleID:(id)arg0 request:(id)arg1 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg0 singleUseToken:(id)arg1 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg0 suggestionProxies:(id)arg1 orderedUUIDs:(id)arg2 activityCategory:(NSInteger)arg3 ;
-(void)requestAddParticipantsAllowedForURL:(id)arg0 share:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestCollaborativeModeForContentIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestConfigurationWithSessionID:(id)arg0 completion:(id)arg1 ;
-(void)requestDefaultShareModeCollaborationForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestSharedURLForFileOrFolderURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveCollaborativeMode:(id)arg0 forContentIdentifier:(id)arg1 ;
-(void)sendConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)shareStatusForFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif