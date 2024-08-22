// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSER_H
#define HMUSER_H

@class HMFUnfairLock, NSString, NSUUID, HMFPairingIdentity, IDSURI;
@protocol HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge, HMUserDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMutableArray.h"
#import "HMAnnounceUserSettings.h"
#import "HMAssistantAccessControl.h"
#import "_HMContext.h"
#import "HMHome.h"
#import "HMHomeAccessControl.h"
#import "HMMediaContentProfileAccessControl.h"
#import "HMPhotosPersonManagerSettings.h"
#import "HMPhotosPersonManager.h"
#import "HMSettings.h"
#import "HMSettingsController.h"

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
    HMMutableArray *_pendingAccessoryInvitations;
    NSString *_senderCorrelationIdentifier;
}


@property (retain) HMAnnounceUserSettings *announceUserSettings; // ivar: _announceUserSettings
@property (copy) HMAssistantAccessControl *assistantAccessControl; // ivar: _assistantAccessControl
@property (retain) _HMContext *context; // ivar: _context
@property (nonatomic, getter=isCurrentUser) BOOL currentUser; // ivar: _currentUser
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMUserDelegatePrivate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HMHomeAccessControl *homeAccessControl; // ivar: _homeAccessControl
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl; // ivar: _mediaContentProfileAccessControl
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property BOOL needsiTunesMultiUserRepair; // ivar: _needsiTunesMultiUserRepair
@property (copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly, copy) HMPhotosPersonManagerSettings *personManagerSettings;
@property (readonly) HMPhotosPersonManager *photosPersonManager;
@property (retain) HMPhotosPersonManager *photosPersonManager; // ivar: _photosPersonManager
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings; // ivar: _photosPersonManagerSettings
@property (readonly) HMSettings *privateSettings; // ivar: _privateSettings
@property (readonly) HMSettingsController *privateSettingsController; // ivar: _privateSettingsController
@property (readonly) HMSettings *settings; // ivar: _settings
@property (readonly) HMSettingsController *settingsController; // ivar: _settingsController
@property (readonly) BOOL settingsInitialized; // ivar: _settingsInitialized
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy, nonatomic) NSString *userID; // ivar: _userID
@property (readonly, copy, nonatomic) IDSURI *userIDSURI;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg0 operations:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg0 operations:(id)arg1 ;
-(id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg0 ;
-(id)assistantAccessControlForHome:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserID:(id)arg0 name:(id)arg1 uuid:(id)arg2 home:(id)arg3 ;
-(id)initWithUserID:(id)arg0 name:(id)arg1 uuid:(id)arg2 home:(id)arg3 homeAccessControl:(id)arg4 ;
-(id)logIdentifier;
-(id)mediaContentProfileAccessControlForHome:(id)arg0 ;
-(id)messageDestination;
-(id)pendingAccessoryInvitations;
-(id)senderCorrelationIdentifier;
-(id)userSettingsForHome:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_handleMultiUserStatusChangedNotification:(id)arg0 ;
-(void)_handleUpdatedAssistantAccessControl:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updatePresenceAuthorizationStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)configurePhotosPersonManagerWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchShareLookupInfo:(id)arg0 ;
-(void)pairingIdentityWithCompletionHandler:(id)arg0 ;
-(void)sendClientShareRepairRequest:(id)arg0 containerID:(id)arg1 completion:(id)arg2 ;
-(void)sendClientShareURL:(id)arg0 shareToken:(id)arg1 containerID:(id)arg2 fromUser:(id)arg3 completion:(id)arg4 ;
-(void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg0 ;
-(void)updateAnnounceUserSettings:(id)arg0 forHome:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAssistantAccessControl:(id)arg0 forHome:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateHomeAccessControl:(BOOL)arg0 remoteAccess:(BOOL)arg1 announceAccess:(BOOL)arg2 camerasAccess:(id)arg3 ;
-(void)updateMediaContentProfileAccessControl:(id)arg0 forHome:(id)arg1 completionHandler:(id)arg2 ;
-(void)updatePersonManagerSettings:(id)arg0 completion:(id)arg1 ;
-(void)updatePhotosPersonManagerSettings:(id)arg0 completion:(id)arg1 ;
-(void)updatePresenceAuthorizationStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif