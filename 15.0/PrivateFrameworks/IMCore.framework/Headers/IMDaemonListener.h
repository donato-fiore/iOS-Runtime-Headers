// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDAEMONLISTENER_H
#define IMDAEMONLISTENER_H

@class NSMutableArray, NSProtocolChecker, NSMutableDictionary, NSDate, NSData, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMDaemonListener : NSObject {
    NSMutableArray *_deferredChatMessages;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    NSDate *_myIdleSince;
    NSData *_myPicture;
    NSString *_myNowPlayingString;
    NSUInteger _myStatus;
    BOOL _hasPendingProcessChange;
}


@property (readonly, nonatomic) NSMutableDictionary *_contexts; // ivar: _contexts
@property (nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect; // ivar: _hidingDisconnect
@property (readonly, nonatomic) NSArray *allServices;
@property (readonly, nonatomic) NSArray *handlers; // ivar: _handlers
@property (readonly, nonatomic) BOOL hasPostedSetupComplete; // ivar: _postedSetupComplete
@property (readonly, nonatomic) BOOL isHoldingChatMessages;
@property (readonly, nonatomic) BOOL isSetupComplete; // ivar: _setupComplete
@property (readonly, nonatomic) unsigned int myIdleTime;
@property (readonly, nonatomic) NSUInteger myStatus;
@property (readonly, nonatomic) NSString *myStatusMessage; // ivar: _myStatusMessage
@property (readonly, nonatomic) NSDictionary *persistentProperties; // ivar: _persistentProperties
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) BOOL shouldHoldChatMessages; // ivar: _holdingChatMessages
@property (readonly, nonatomic) NSUInteger vcCapabilities; // ivar: _vcCapabilities


-(id)_stampForContext:(id)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)serviceWithName:(id)arg0 ;
-(id)valueOfPersistentProperty:(id)arg0 ;
-(id)valueOfProperty:(id)arg0 ;
-(void)_cacheValue:(id)arg0 forPersistentProperty:(id)arg1 ;
-(void)_cacheValue:(id)arg0 forProperty:(id)arg1 ;
-(void)_deferNotification:(id)arg0 ;
-(void)_deferredSetup:(id)arg0 ;
-(void)_noteDisconnected;
-(void)_processDeferredInvitationDictionary:(id)arg0 ;
-(void)_processMyStatusChanged;
-(void)_reallyProcessMyStatusChanged;
-(void)_resetPostedSetupCompleted;
-(void)_setStamp:(id)arg0 forContext:(id)arg1 ;
-(void)account:(id)arg0 allowListChanged:(id)arg1 ;
-(void)account:(id)arg0 blockIdleStatusChanged:(BOOL)arg1 ;
-(void)account:(id)arg0 blockListChanged:(id)arg1 ;
-(void)account:(id)arg0 blockingModeChanged:(unsigned int)arg1 ;
-(void)account:(id)arg0 buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3 ;
-(void)account:(id)arg0 buddyProperties:(id)arg1 buddyPictures:(id)arg2 ;
-(void)account:(id)arg0 buddyPropertiesChanged:(id)arg1 ;
-(void)account:(id)arg0 capabilitiesChanged:(NSUInteger)arg1 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 invitationReceived:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messageReceived:(id)arg4 ;
-(void)account:(id)arg0 chat:(id)arg1 style:(unsigned char)arg2 chatProperties:(id)arg3 messagesReceived:(id)arg4 ;
-(void)account:(id)arg0 defaults:(id)arg1 blockList:(id)arg2 allowList:(id)arg3 blockingMode:(unsigned int)arg4 blockIdleStatus:(BOOL)arg5 status:(id)arg6 capabilities:(NSUInteger)arg7 serviceLoginStatus:(unsigned int)arg8 loginStatusMessage:(id)arg9 ;
-(void)account:(id)arg0 defaultsChanged:(id)arg1 ;
-(void)account:(id)arg0 groupsChanged:(id)arg1 error:(id)arg2 ;
-(void)account:(id)arg0 handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2 ;
-(void)account:(id)arg0 loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)account:(id)arg0 postedError:(id)arg1 ;
-(void)account:(id)arg0 status:(id)arg1 capabilities:(NSUInteger)arg2 serviceLoginStatus:(unsigned int)arg3 loginStatusMessage:(id)arg4 ;
-(void)account:(id)arg0 statusChanged:(id)arg1 ;
-(void)accountAdded:(id)arg0 defaults:(id)arg1 service:(id)arg2 ;
-(void)accountRemoved:(id)arg0 ;
-(void)activeAccountsChanged:(id)arg0 forService:(id)arg1 ;
-(void)addHandler:(id)arg0 ;
-(void)databaseChatSpamUpdated:(id)arg0 ;
-(void)databaseUpdated:(id)arg0 ;
-(void)defaultsChanged:(id)arg0 forService:(id)arg1 ;
-(void)didAttemptToDisableAllDevicesResult:(BOOL)arg0 ;
-(void)didAttemptToDisableiCloudBackups:(NSInteger)arg0 error:(id)arg1 ;
-(void)didAttemptToSetEnabledTo:(BOOL)arg0 result:(BOOL)arg1 ;
-(void)didFetchCloudKitSyncDebuggingInfo:(id)arg0 ;
-(void)didFetchRampState:(id)arg0 ;
-(void)didFetchSyncStateStats:(id)arg0 ;
-(void)didPerformAdditionalStorageRequiredCheckWithSuccess:(BOOL)arg0 additionalStorageRequired:(NSUInteger)arg1 forAccountId:(id)arg2 error:(id)arg3 ;
-(void)displayPinCodeForAccount:(id)arg0 pinCode:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 ;
-(void)fileTransfer:(id)arg0 createdWithProperties:(id)arg1 ;
-(void)fileTransfer:(id)arg0 explicitDownloadSucceededWithPath:(id)arg1 livePhotoBundlePath:(id)arg2 ;
-(void)fileTransfer:(id)arg0 highQualityDownloadSucceededWithPath:(id)arg1 ;
-(void)fileTransfer:(id)arg0 updatedWithCurrentBytes:(NSUInteger)arg1 totalBytes:(NSUInteger)arg2 averageTransferRate:(NSUInteger)arg3 ;
-(void)fileTransfer:(id)arg0 updatedWithProperties:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)fileTransferExplicitDownloadFailed:(id)arg0 suggestedRetryGUID:(id)arg1 error:(id)arg2 ;
-(void)fileTransferHighQualityDownloadFailed:(id)arg0 ;
-(void)fileTransfers:(id)arg0 createdWithLocalPaths:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)handlesSharingNicknamesDidChange;
-(void)holdChatMessages;
-(void)networkDataAvailabilityChanged:(BOOL)arg0 ;
-(void)nicknameRequestResponse:(id)arg0 encodedNicknameData:(id)arg1 ;
-(void)oneTimeCodesDidChange:(id)arg0 ;
-(void)pendingNicknamesOrHandledNicknamesDidChange;
-(void)persistentProperty:(id)arg0 changedTo:(id)arg1 from:(id)arg2 ;
-(void)pinCodeAlertCompleted:(id)arg0 deviceName:(id)arg1 deviceType:(id)arg2 phoneNumber:(id)arg3 responseFromDevice:(BOOL)arg4 wasCancelled:(BOOL)arg5 ;
-(void)property:(id)arg0 changedTo:(id)arg1 from:(id)arg2 ;
-(void)qosClassWhileServicingRequestsResponse:(unsigned int)arg0 identifier:(id)arg1 ;
-(void)receivedUrgentRequestForMessages:(id)arg0 ;
-(void)releaseHeldChatMessages;
-(void)removeHandler:(id)arg0 ;
-(void)service:(id)arg0 properties:(id)arg1 defaults:(id)arg2 defaultAccountSettings:(id)arg3 allAccounts:(id)arg4 activeAccounts:(id)arg5 ;
-(void)services:(id)arg0 properties:(id)arg1 persistentProperties:(id)arg2 ;
-(void)setupComplete:(BOOL)arg0 info:(id)arg1 ;
-(void)updateCloudKitState;
-(void)updateCloudKitStateWithDictionary:(id)arg0 ;
-(void)updateNicknameData:(id)arg0 ;
-(void)updateNicknameHandlesForSharing:(id)arg0 blocked:(id)arg1 ;
-(void)updatePendingNicknameUpdates:(id)arg0 handledNicknameUpdates:(id)arg1 ;
-(void)updatePersonalNickname:(id)arg0 ;
-(void)vcCapabilitiesChanged:(NSUInteger)arg0 ;


@end


#endif