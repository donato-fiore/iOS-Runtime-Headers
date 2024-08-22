// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDOWNTIMECONTROLLER_H
#define IMDOWNTIMECONTROLLER_H

@class STConversation, NSSet, DMFApplicationPolicyMonitor, NSMutableDictionary, TUCallProviderManager, NSString;
@protocol TUCallProviderManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMCommLimitsPolicyCache.h"

@interface IMDowntimeController : NSObject <TUCallProviderManagerDelegate>

 {
    os_unfair_lock_s _stateLock;
    BOOL _needsNotificationsRegistering;
    STConversation *_stateLock_STConversation;
    NSSet *_stateLock_emergencyNumbersSet;
}


@property (retain, nonatomic) DMFApplicationPolicyMonitor *appPolicyMonitor; // ivar: _appPolicyMonitor
@property (retain, nonatomic) NSMutableDictionary *bundleIDPolicyMap; // ivar: _bundleIDPolicyMap
@property (retain, nonatomic) TUCallProviderManager *callProviderManager; // ivar: _callProviderManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunningFromMacMessagesApp; // ivar: _isRunningFromMacMessagesApp
@property (retain, nonatomic) IMCommLimitsPolicyCache *policyCache; // ivar: _policyCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue; // ivar: _screenTimeDispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupDispatchQueue; // ivar: _setupDispatchQueue
@property (readonly) Class superclass;


+(BOOL)isContactLimitsFeatureEnabled;
+(id)fetchEmergencyNumbersSetWithProviderManager:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_allowedToShowConversationWithHandleIDs:(id)arg0 sync:(BOOL)arg1 context:(*id)arg2 participantIDsHash:(id)arg3 trackingChat:(id)arg4 ;
-(BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)arg0 ;
-(BOOL)allowedToShowConversationForChat:(id)arg0 sync:(BOOL)arg1 ;
-(BOOL)allowedToShowConversationWithHandleIDs:(id)arg0 sync:(BOOL)arg1 context:(*id)arg2 ;
-(BOOL)allowedToShowConversationWithHandleIDs:(id)arg0 sync:(BOOL)arg1 context:(*id)arg2 participantIDsHash:(id)arg3 ;
-(BOOL)isDowntimeLimited;
-(BOOL)isEmergencyHandle:(id)arg0 ;
-(id)STConversation;
-(id)conversationContextForChat:(id)arg0 ;
-(id)emergencyNumbers;
-(id)init;
-(void)_addObserversToChat:(id)arg0 ;
-(void)_doRegisterForScreenTimeNotifications;
-(void)_participantsForChatDidChange:(id)arg0 ;
-(void)fetchScreenTimeAppPolicy;
-(void)getSTConversation:(id)arg0 ;
-(void)initializeContext:(id)arg0 participantIDsHash:(id)arg1 trackingChat:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)providersChangedForProviderManager:(id)arg0 ;
-(void)registerForScreenTimeNotifications;
-(void)setEmergencyNumbers:(id)arg0 ;


@end


#endif