// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYCAPABILITIES_H
#define HMACCESSORYCAPABILITIES_H

@class NSString;
@protocol HMAccessoryCapabilities;

#import <Foundation/Foundation.h>


@interface HMAccessoryCapabilities : NSObject <HMAccessoryCapabilities>



@property (readonly, nonatomic) _HMAccessoryCapabilitiesStruct capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsAssistantAccessControl;
@property (readonly, nonatomic) BOOL supportsAudioAnalysis;
@property (readonly, nonatomic) BOOL supportsCaptiveNetworks;
@property (readonly, nonatomic) BOOL supportsCloudDataSync;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) BOOL supportsCoordinationDoorbellChime;
@property (readonly, nonatomic) BOOL supportsDeviceSetup;
@property (readonly, nonatomic) BOOL supportsDoorbellChime;
@property (readonly, nonatomic) BOOL supportsDropIn;
@property (readonly, nonatomic) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsHomeInvitation;
@property (readonly, nonatomic) BOOL supportsHomeLevelLocationServiceSetting;
@property (readonly, nonatomic) BOOL supportsKeyTransferClient;
@property (readonly, nonatomic) BOOL supportsKeyTransferServer;
@property (readonly, nonatomic) BOOL supportsKeychainSync;
@property (readonly, nonatomic) BOOL supportsManagedConfigurationProfile;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsMessagedHomePodSettings;
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (readonly, nonatomic) BOOL supportsPreferredMediaUser;
@property (readonly, nonatomic) BOOL supportsRMVonAppleTV;
@property (readonly, nonatomic) BOOL supportsStandaloneMode;
@property (readonly, nonatomic) BOOL supportsTargetControl;
@property (readonly, nonatomic) BOOL supportsThirdPartyMusic;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly, nonatomic) BOOL supportsUserMediaSettings;
@property (readonly, nonatomic) BOOL supportsWholeHouseAudio;
@property (readonly, nonatomic) NSString *tag; // ivar: _tag


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocalEqual:(id)arg0 ;
-(id)initWithProtoCapabilities:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTagUUID:(id)arg0 capabilities:(struct _HMAccessoryCapabilitiesStruct )arg1 ;
-(id)pbCapabilities;


@end


#endif