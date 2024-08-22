// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGSETTINGSCONTROL_H
#define HMDCAMERARECORDINGSETTINGSCONTROL_H

@class HMFObject, NSString, NSNumber, NSNotificationCenter, NSMutableArray, NSDictionary, NSArray;
@protocol HMFLogging, HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDCameraRecordingSelectedConfiguration.h"
#import "HMDCharacteristic.h"
#import "HMDService.h"
#import "HMDCameraRecordingSupportedAudioConfiguration.h"
#import "HMDCameraRecordingGeneralConfiguration.h"
#import "HMDCameraRecordingSupportedVideoConfiguration.h"

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property (readonly, copy) NSString *clientIdentifier; // ivar: _clientIdentifier
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
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSMutableArray *pendingConfigureCompletionHandlers; // ivar: _pendingConfigureCompletionHandlers
@property (readonly) HMDCharacteristic *recordingActiveCharacteristic;
@property (retain) NSDictionary *recordingConfigurationOverrides; // ivar: _recordingConfigurationOverrides
@property (readonly) HMDCharacteristic *recordingSelectedConfigurationCharacteristic;
@property (readonly) HMDService *recordingService; // ivar: _recordingService
@property (readonly) Class superclass;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // ivar: _supportedAudioConfiguration
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // ivar: _supportedRecordingConfiguration
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // ivar: _supportedVideoConfiguration
@property (readonly, copy) NSArray *videoConfigurationsByPreferenceOrder;
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
-(id)_dataValueForCharacteristicOfType:(id)arg0 inResponses:(id)arg1 ;
-(id)_generalRecordingConfigurationInResponses:(id)arg0 ;
-(id)_isRecordingActiveValueInResponses:(id)arg0 ;
-(id)_numberValueForCharacteristicOfType:(id)arg0 inResponses:(id)arg1 ;
-(id)_preferredAudioConfigurationOverride;
-(id)_preferredVideoConfigurationOverride;
-(id)_recordingAudioConfiguration;
-(id)_recordingGeneralConfiguration;
-(id)_recordingVideoConfiguration;
-(id)_selectedRecordingConfigurationInResponses:(id)arg0 ;
-(id)_supportedAudioConfigurationInResponses:(id)arg0 ;
-(id)_supportedVideoConfigurationInResponses:(id)arg0 ;
-(id)characteristicsToMonitor;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 recordingManagementService:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 recordingManagementService:(id)arg2 notificationCenter:(id)arg3 ;
-(id)logIdentifier;
-(void)_handleCurrentIsRecordingActive:(id)arg0 selectedConfiguration:(id)arg1 ;
-(void)_handleSupportedConfigurationCharacteristicsReadResponses:(id)arg0 ;
-(void)_invokePendingConfigureCompletionHandlersWithError:(id)arg0 ;
-(void)_readCameraRecordingSettings;
-(void)_readSupportedCameraRecordingConfiguration;
-(void)_setSelectedRecordingConfiguration:(id)arg0 ;
-(void)_updateSelectedRecordingConfiguration:(id)arg0 ;
-(void)_writeCameraRecordingSettings;
-(void)configureCameraRecordingSettings;
-(void)configureCameraRecordingSettingsWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)enableCharacteristicNotifications;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleAccessoryIsNotConfiguredError;
-(void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg0 ;
-(void)handleCharacteristicValueUpdated:(id)arg0 ;
-(void)handleCharacteristicsUpdated:(id)arg0 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg0 ;
-(void)reconfigureCameraRecordingSettingsWithReason:(id)arg0 ;
-(void)start;


@end


#endif