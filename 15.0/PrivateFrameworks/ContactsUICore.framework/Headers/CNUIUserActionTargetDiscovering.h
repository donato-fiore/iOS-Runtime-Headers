// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIUSERACTIONTARGETDISCOVERING_H
#define CNUIUSERACTIONTARGETDISCOVERING_H

@class NSString;
@protocol CNUIUserActionTargetDiscovering, CNLSApplicationWorkspace, CNTUCallProviderManager, CNCapabilities, CNSchedulerProvider, CNMCProfileConnection;

#import <Foundation/Foundation.h>

#import "CNUIUserActionTargetDiscoveryCache.h"

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>



@property (readonly, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace; // ivar: _applicationWorkspace
@property (readonly, nonatomic) CNUIUserActionTargetDiscoveryCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<CNTUCallProviderManager> *callProviderManager; // ivar: _callProviderManager
@property (readonly, nonatomic) NSObject<CNCapabilities> *capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *highLatencySchedulerProvider; // ivar: _highLatencySchedulerProvider
@property (readonly, nonatomic) NSObject<CNMCProfileConnection> *profileConnection; // ivar: _profileConnection
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(BOOL)isSkypeAvailableWithEnvironment:(id)arg0 ;
+(BOOL)shouldIgnoreApplicationProxy:(id)arg0 ;
+(id)applicationProxiesForIntent:(id)arg0 applicationWorkspace:(id)arg1 ;
+(id)os_log;
-(id)_targetsForActionType:(id)arg0 ;
-(id)initWithApplicationWorkspace:(id)arg0 callProviderManager:(id)arg1 profileConnection:(id)arg2 schedulerProvider:(id)arg3 highLatencySchedulerProvider:(id)arg4 capabilities:(id)arg5 ;
-(id)observableForTargetsChangedForActionType:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)targetForTextWithMessages;
-(id)targetForTextWithSkype;
-(id)targetForVideoWithFaceTime;
-(id)targetForVideoWithSkype;
-(id)targetForVoiceWithFaceTime;
-(id)targetForVoiceWithSkype;
-(id)targetForVoiceWithTelephony;
-(id)targetsForActionType:(id)arg0 ;
-(id)targetsForDirections;
-(id)targetsForEmail;
-(id)targetsForPay;
-(id)targetsForSendMessageIntent;
-(id)targetsForStartAudioCallIntent;
-(id)targetsForStartVideoCallIntent;
-(id)targetsForText;
-(id)targetsForVideo;
-(id)targetsForVideoWithThirdPartyCallProviders;
-(id)targetsForVoice;
-(id)targetsForVoiceWithThirdPartyCallProviders;
-(id)thirdPartyTargetsForActionTypes:(id)arg0 ;
-(id)thirdPartyTargetsForBundleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)resetTargetsForActionType:(id)arg0 ;


@end


#endif