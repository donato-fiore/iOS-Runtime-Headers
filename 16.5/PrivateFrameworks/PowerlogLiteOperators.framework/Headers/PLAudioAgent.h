// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAUDIOAGENT_H
#define PLAUDIOAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSArray, NSString, NSDictionary, PLEntry, NSDate, NSMutableArray, PLNSNotificationOperatorComposition;


#import "AudioDevice.h"

@interface PLAudioAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *RMSLoggingXPCListener; // ivar: _RMSLoggingXPCListener
@property (retain) PLEntryNotificationOperatorComposition *accessoryPowerCallback; // ivar: _accessoryPowerCallback
@property int accessoryPowerState; // ivar: _accessoryPowerState
@property (retain) NSArray *activePIDs; // ivar: _activePIDs
@property (retain) PLXPCListenerOperatorComposition *audioAppXPCListener; // ivar: _audioAppXPCListener
@property (readonly) NSString *audioHardware; // ivar: _audioHardware
@property BOOL audioIsActive; // ivar: _audioIsActive
@property (readonly) NSDictionary *audioPowerModel; // ivar: _audioPowerModel
@property CGFloat currentVolume; // ivar: _currentVolume
@property (retain, nonatomic) AudioDevice *defaultInputDevice; // ivar: _defaultInputDevice
@property (copy, nonatomic) id *defaultInputDeviceHandlerBlock; // ivar: _defaultInputDeviceHandlerBlock
@property (retain, nonatomic) AudioDevice *defaultOutputDevice; // ivar: _defaultOutputDevice
@property (copy, nonatomic) id *defaultOutputDeviceHandlerBlock; // ivar: _defaultOutputDeviceHandlerBlock
@property (retain) PLEntry *entryRoutingOld; // ivar: _entryRoutingOld
@property (retain) PLXPCListenerOperatorComposition *hapticsAssertionXPCListener; // ivar: _hapticsAssertionXPCListener
@property (retain) PLXPCListenerOperatorComposition *hapticsRunningCountListener; // ivar: _hapticsRunningCountListener
@property (retain) PLXPCListenerOperatorComposition *hapticsXPCListener; // ivar: _hapticsXPCListener
@property BOOL headsetIsPlayingAudio; // ivar: _headsetIsPlayingAudio
@property (retain) NSDate *lastAudioStateChangeDate; // ivar: _lastAudioStateChangeDate
@property (retain) PLXPCListenerOperatorComposition *mutedTalkerDetectionXPCListener; // ivar: _mutedTalkerDetectionXPCListener
@property (readonly) NSMutableArray *nsOutputNotifications; // ivar: _nsOutputNotifications
@property (readonly) NSMutableArray *nsRoutingNotifications; // ivar: _nsRoutingNotifications
@property (retain) PLXPCListenerOperatorComposition *screenMirroringXPCListener; // ivar: _screenMirroringXPCListener
@property (retain) PLXPCListenerOperatorComposition *shazamRecordingXPCListener; // ivar: _shazamRecordingXPCListener
@property (retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener; // ivar: _speakerAmpXPCListener
@property BOOL speakerIsPlayingAudio; // ivar: _speakerIsPlayingAudio
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionAudioDevice;
+(id)entryEventForwardDefinitionHapticsRunningCount;
+(id)entryEventForwardDefinitionMutedTalkerDetection;
+(id)entryEventForwardDefinitionNowPlaying;
+(id)entryEventForwardDefinitionOutput;
+(id)entryEventForwardDefinitionRouting;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionRMSLogging;
+(id)entryEventIntervalDefinitionShazamRecording;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAudioApp;
+(id)entryEventPointDefinitionHaptics;
+(id)entryEventPointDefinitionHapticsAssertion;
+(id)entryEventPointDefinitionSpeakerAmp;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)headphonesConnected;
-(BOOL)headsetHasInput;
-(BOOL)initDefaultAudioDevice:(BOOL)arg0 ;
-(BOOL)muted;
-(BOOL)shouldModelAudioPowerSpeakerTemp;
-(CGFloat)audioPowerForRoute:(id)arg0 forVolume:(CGFloat)arg1 ;
-(CGFloat)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(CGFloat)arg0 ;
-(CGFloat)modelAudioPowerWithVolume:(CGFloat)arg0 ;
-(id)activeRoute;
-(id)buildCallBack:(id)arg0 withGroup:(BOOL)arg1 withHandler:(id)arg2 ;
-(id)init;
-(id)nowPlayingAppBundleID:(id)arg0 ;
-(id)outputCategory;
-(id)returnVolumeOrOutPutCategory:(int)arg0 ;
-(id)volume;
-(void)addDefaultAudioDeviceListener:(BOOL)arg0 ;
-(void)closeAudioAccountingEvents;
-(void)createAirPlayAccountingEvents:(id)arg0 ;
-(void)createAudioAccountingEvents:(id)arg0 ;
-(void)createBluetoothAccountingEvents:(id)arg0 ;
-(void)createCarPlayAccountingEvents:(id)arg0 ;
-(void)handleLightningStatusCallback:(id)arg0 ;
-(void)handleNowPlayingApplicationIsPlayingDidChange:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardAudioDevice:(id)arg0 ;
-(void)logEventForwardHapticsRunningCount:(id)arg0 ;
-(void)logEventForwardMutedTalkerDetection:(id)arg0 ;
-(void)logEventForwardOutput;
-(void)logEventForwardRouting;
-(void)logEventIntervalRMSLogging:(id)arg0 ;
-(void)logEventIntervalShazamRecording:(id)arg0 ;
-(void)logEventPointAudioApp:(id)arg0 ;
-(void)logEventPointHaptics:(id)arg0 ;
-(void)logEventPointHapticsAssertion:(id)arg0 ;
-(void)logEventPointSpeakerAmp:(id)arg0 ;
-(void)modelAudioPower;
-(void)modelAudioPowerCodec:(id)arg0 ;
-(void)modelAudioPowerSpeaker:(id)arg0 ;
-(void)setupAVSystemController;


@end


#endif