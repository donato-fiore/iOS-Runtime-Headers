// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCONVERSATION_H
#define STCONVERSATION_H

@class NSMapTable, NSString, DMFCommunicationPolicyMonitor, CNContactStore, DMFEmergencyModeMonitor, DMFApplicationPolicyMonitor, CNDowntimeWhitelist;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STManagementState.h"
#import "STConversation.h"

@interface STConversation : NSObject {
    NSMapTable *_contextByHandles;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject *_didFetchInitialStateLock;
}


@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain) DMFCommunicationPolicyMonitor *communicationPolicyMonitor; // ivar: _communicationPolicyMonitor
@property (readonly) CNContactStore *contactStore; // ivar: _contactStore
@property (copy) id *conversationCompletionHandler; // ivar: _conversationCompletionHandler
@property NSUInteger currentApplicationState; // ivar: _currentApplicationState
@property NSInteger currentThirdPartyApplicationState; // ivar: _currentThirdPartyApplicationState
@property BOOL didFetchInitialApplicationState; // ivar: _didFetchInitialApplicationState
@property BOOL didFetchInitialEmergencyModeState; // ivar: _didFetchInitialEmergencyModeState
@property BOOL didFetchInitialScreenTimePolicyState; // ivar: _didFetchInitialScreenTimePolicyState
@property BOOL didFetchInitialThirdPartyApplicationState; // ivar: _didFetchInitialThirdPartyApplicationState
@property BOOL emergencyModeEnabled; // ivar: _emergencyModeEnabled
@property (retain) DMFEmergencyModeMonitor *emergencyModeMonitor; // ivar: _emergencyModeMonitor
@property (readonly) int emergencyModeNotifyToken; // ivar: _emergencyModeNotifyToken
@property NSInteger generalScreenTimePolicy; // ivar: _generalScreenTimePolicy
@property (readonly) BOOL isThirdPartyBundleIdentifier; // ivar: _isThirdPartyBundleIdentifier
@property (retain) STManagementState *managementState; // ivar: _managementState
@property (retain) STConversation *me; // ivar: _me
@property (readonly) int policyNotifyToken; // ivar: _policyNotifyToken
@property (readonly, copy) NSString *processName; // ivar: _processName
@property (retain) DMFApplicationPolicyMonitor *thirdPartyApplicationPolicyMonitor; // ivar: _thirdPartyApplicationPolicyMonitor
@property NSInteger whileLimitedPolicy; // ivar: _whileLimitedPolicy
@property (readonly) CNDowntimeWhitelist *whitelist; // ivar: _whitelist


+(void)requestConversationWithBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_doesContainAtLeastOneContactInHandles:(id)arg0 contactsByHandle:(id)arg1 ;
-(BOOL)_shouldGeneralScreenTimeAllowHandles:(id)arg0 context:(id)arg1 ;
-(BOOL)_shouldWhileLimitedAllowHandles:(id)arg0 context:(id)arg1 ;
-(id)_contactsByHandle:(id)arg0 error:(*id)arg1 ;
-(id)_filteredArrayForKnownHandlesInArray:(id)arg0 ;
-(id)allowableByContactsHandles:(id)arg0 ;
-(id)initSynchronouslyWithBundleIdentifier:(id)arg0 ;
-(id)initSynchronouslyWithThirdPartyBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 contactStore:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 contactStore:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithThirdPartyBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_populateAllowedContactsByHandlesForContactHandles:(id)arg0 context:(id)arg1 ;
-(void)_populateThirdPartyAllowedContactsByHandlesForContactHandles:(id)arg0 context:(id)arg1 ;
-(void)_stConversationCommonInitSetupObservationOfStateChanges;
-(void)_stConversationCommonInitWithBundleIdentifier:(id)arg0 contactStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)_stConversationCommonInitWithThirdPartyBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
-(void)_updateAllContextsUpdateGeneral:(BOOL)arg0 updateLimited:(BOOL)arg1 updateCurrentApplicationState:(BOOL)arg2 updateAllowedByContactsHandle:(BOOL)arg3 refreshContacts:(BOOL)arg4 refreshWhitelist:(BOOL)arg5 updateEmergencyMode:(BOOL)arg6 ;
-(void)_updateAllThirdPartyContexts;
-(void)_updateContext:(id)arg0 forHandles:(id)arg1 updateGeneral:(BOOL)arg2 updateLimited:(BOOL)arg3 updateCurrentApplicationState:(BOOL)arg4 updateAllowedByContactsHandle:(BOOL)arg5 refreshContacts:(BOOL)arg6 refreshWhitelist:(BOOL)arg7 updateEmergencyMode:(BOOL)arg8 ;
-(void)_updateThirdPartyContext:(id)arg0 forHandles:(id)arg1 ;
-(void)callCompletionHandlerIfNeededWithConversation:(id)arg0 error:(id)arg1 ;
-(void)callCompletionHandlerIfNeededWithThirdPartyConversation:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif