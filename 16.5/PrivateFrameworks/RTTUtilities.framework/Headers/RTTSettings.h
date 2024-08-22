// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTTSETTINGS_H
#define RTTSETTINGS_H

@class NSLock, NSMutableDictionary, NSArray, NSString, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RTTSettings : NSObject {
    NSLock *_synchronizeDomainsLock;
    NSMutableDictionary *_cachedSettings;
}


@property (nonatomic) BOOL TTYHardwareEnabled;
@property (nonatomic) BOOL TTYSoftwareEnabled;
@property (nonatomic) BOOL answerRTTCallsAsMuted;
@property (retain, nonatomic) NSArray *cannedResponses;
@property (nonatomic) BOOL continuityRTTIsSupported;
@property (nonatomic) BOOL hasReceivedRTTCall;
@property (nonatomic) BOOL incomingCallsTTY;
@property (nonatomic) NSInteger incomingTTYCallCount;
@property (nonatomic) BOOL internalOverrideTTYAvailability;
@property (nonatomic) BOOL isRelayCallingEnabled;
@property (nonatomic) CGFloat lastCallCountReset;
@property (nonatomic) CGFloat lastDBVacuum;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nanoSynchronizeQueue; // ivar: _nanoSynchronizeQueue
@property (nonatomic) NSInteger outgoingTTYCallCount;
@property (retain, nonatomic) NSString *preferredRelayNumber;
@property (retain, nonatomic) NSMutableSet *registeredNotifications; // ivar: _registeredNotifications
@property (readonly, nonatomic) BOOL rttCallHoldEnabled;
@property (nonatomic) BOOL rttInlineAbbreviationBarEnabled;
@property (readonly, nonatomic) BOOL rttLiveTranscriptionsEnabled;
@property (readonly, nonatomic) BOOL showsRTTNotifications;
@property (nonatomic) BOOL supportsRelayCalling;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences; // ivar: _synchronizePreferences
@property (nonatomic) BOOL ttyShouldBeRealtime;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks; // ivar: _updateBlocks


+(id)sharedInstance;
+(void)initialize;
-(BOOL)TTYHardwareEnabledForContext:(id)arg0 ;
-(BOOL)TTYSoftwareEnabledForContext:(id)arg0 ;
-(BOOL)answerRTTCallsAsMutedForContext:(id)arg0 ;
-(BOOL)boolValueForKey:(id)arg0 andContext:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(BOOL)boolValueForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)incomingCallsTTYForContext:(id)arg0 ;
-(BOOL)rttLiveTranscriptionsEnabledForContext:(id)arg0 ;
-(BOOL)rttLiveTranscriptionsFeatureFlagEnabled;
-(BOOL)shouldMigrateSettings;
-(BOOL)showsRTTNotificationsForContext:(id)arg0 ;
-(BOOL)ttyShouldBeRealtimeForContext:(id)arg0 ;
-(NSInteger)integerValueForKey:(id)arg0 withDefaultValue:(NSInteger)arg1 ;
-(NSInteger)settingsVersion;
-(SEL)selectorForPreferenceKey:(id)arg0 ;
-(id)_notificationForPreferenceKey:(id)arg0 ;
-(id)_preferenceKeyForSelector:(SEL)arg0 ;
-(id)_selectorMap;
-(id)currentLocale;
-(id)init;
-(id)notificationForSelector:(SEL)arg0 ;
-(id)objectValueForKey:(id)arg0 andContext:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(id)objectValueForKey:(id)arg0 withClass:(Class)arg1 andDefaultValue:(id)arg2 ;
-(id)preferredRelayNumberForContext:(id)arg0 ;
-(id)uuidFromContext:(id)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 andContext:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg0 ;
-(void)_registerForNotification:(id)arg0 ;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(void)_synchronizeIfNecessary:(id)arg0 ;
-(void)clearAllServerSettingsCache;
-(void)clearServerSettingsCacheForKey:(id)arg0 ;
-(void)dealloc;
-(void)migrateSettings;
// -(void)registerUpdateBlock:(id)arg0 forRetrieveSelector:(unk)arg1 withListener:(SEL)arg2  ;
-(void)setRTTLiveTranscriptionsEnabled:(BOOL)arg0 forContext:(id)arg1 ;
-(void)setSettingsVersion:(NSInteger)arg0 ;
-(void)setTTYShouldBeRealtime:(BOOL)arg0 forContext:(id)arg1 ;
-(void)updateGizmoValueIfNeeded:(id)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif