// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSETTINGSCONTROL_H
#define HMDCAMERARECORDINGSETTINGSCONTROL_H

@class HMFObject, NSDictionary, NSString, NSDate, NSNumber, NSArray;
@protocol HMFLogging, HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingSelectedConfiguration.h"
#import "HMDService.h"
#import "HMDCameraRecordingSupportedAudioConfiguration.h"
#import "HMDCameraRecordingGeneralConfiguration.h"
#import "HMDCameraRecordingSupportedVideoConfiguration.h"

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property BOOL canConfigureCameraForRecording; // ivar: _canConfigureCameraForRecording
@property (copy) NSDictionary *characteristicByType; // ivar: _characteristicByType
@property (readonly, copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property BOOL configureCameraInProgress; // ivar: _configureCameraInProgress
@property (retain) NSDate *configureStartDate; // ivar: _configureStartDate
@property (readonly, copy) NSNumber *configuredBitRate;
@property (readonly) CGFloat configuredFragmentDuration;
@property (readonly, copy) NSNumber *configuredIFrameInterval;
@property (readonly, copy) NSNumber *configuredImageHeight;
@property (readonly, copy) NSNumber *configuredImageWidth;
@property (readonly) CGFloat configuredPrebufferDuration;
@property (retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // ivar: _currentSelectedConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingSettingsControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL didTriggerABCForConfigure; // ivar: _didTriggerABCForConfigure
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *recordingConfigurationOverrides; // ivar: _recordingConfigurationOverrides
@property (readonly) HMDService *recordingService; // ivar: _recordingService
@property (readonly) Class superclass;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // ivar: _supportedAudioConfiguration
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // ivar: _supportedRecordingConfiguration
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // ivar: _supportedVideoConfiguration
@property (readonly) NSArray *videoConfigurationsByPreferenceOrder;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)isSupportedAudioCodec:(id)arg0 ;
+(BOOL)isSupportedH264Profile:(id)arg0 ;
+(BOOL)isSupportedVideoCodec:(id)arg0 ;
+(id)audioBitRateForCodecConfiguration:(id)arg0 ;
+(id)audioCodecForCodecConfiguration:(id)arg0 ;
+(id)audioConfigurationsByPreferenceOrder;
+(id)h264ProfileForCodecConfiguration:(id)arg0 ;
+(id)logCategory;
+(id)videoCodecForCodecConfiguration:(id)arg0 ;
-(id)_parseResponse:(id)arg0 forCharacteristicType:(id)arg1 ;
-(id)_parseSelectedRecordingConfiguration:(id)arg0 ;
-(id)_parseSupportedAudioConfiguration:(id)arg0 ;
-(id)_parseSupportedRecordingConfiguration:(id)arg0 ;
-(id)_parseSupportedVideoConfiguration:(id)arg0 ;
-(id)_preferredAudioConfigurationOverride;
-(id)_preferredVideoConfigurationOverride;
-(id)_recordingAudioConfiguration;
-(id)_recordingGeneralConfiguration;
-(id)_recordingVideoConfiguration;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 recordingManagementService:(id)arg2 ;
-(id)logIdentifier;
-(void)_configureCameraRecordingSettings;
-(void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg0 ;
-(void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg0 ;
-(void)_readCameraRecordingSettings;
-(void)_readSelectedCameraRecordingConfiguration;
-(void)_readSupportedCameraRecordingConfiguration;
-(void)_selectedConfigurationDidUpdateTo:(id)arg0 ;
-(void)_setSelectedRecordingConfiguration:(id)arg0 ;
-(void)configureCameraRecordingSettings;
-(void)dealloc;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleAccessoryIsNotConfiguredError;
-(void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg0 ;
-(void)handleCharacteristicValueUpdated:(id)arg0 ;
-(void)handleCharacteristicsUpdated:(id)arg0 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg0 ;
-(void)reconfigureCameraRecordingSettingsWithReason:(id)arg0 ;
-(void)start;
-(void)triggerABCForConfigure;
-(void)updateCanConfigureCameraForRecording;


@end


#endif