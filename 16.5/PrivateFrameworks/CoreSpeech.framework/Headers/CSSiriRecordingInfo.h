// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIRECORDINGINFO_H
#define CSSIRIRECORDINGINFO_H

@class NSString, NSDictionary;
@protocol AFBluetoothDevice;

#import <Foundation/Foundation.h>

#import "CSAudioRecordDeviceInfo.h"

@interface CSSiriRecordingInfo : NSObject {
    NSString *_headsetAddress;
}


@property (readonly, nonatomic) CGFloat activationAlertStartTimestamp; // ivar: _activationAlertStartTimestamp
@property (readonly, nonatomic) NSInteger audioAlertStyle; // ivar: _audioAlertStyle
@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) NSUInteger audioSessionSetActiveEndHostTime; // ivar: _audioSessionSetActiveEndHostTime
@property (readonly, nonatomic) NSObject<AFBluetoothDevice> *bluetoothDevice; // ivar: _bluetoothDevice
@property (readonly, nonatomic) NSString *codec; // ivar: _codec
@property (readonly, nonatomic) BOOL codecIsNarrowband;
@property (readonly, nonatomic) NSString *destination; // ivar: _destination
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) CSAudioRecordDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSString *dspStatus; // ivar: _dspStatus
@property (readonly, nonatomic) NSUInteger estimatedSpeechEndHostTime; // ivar: _estimatedSpeechEndHostTime
@property (readonly, nonatomic) NSUInteger firstBufferHostTime; // ivar: _firstBufferHostTime
@property (readonly, nonatomic) CGFloat firstBufferTimestamp; // ivar: _firstBufferTimestamp
@property (readonly, nonatomic) NSString *headsetAddress;
@property (readonly, nonatomic) NSString *headsetName; // ivar: _headsetName
@property (readonly, nonatomic) BOOL isBluetooth;
@property (readonly, nonatomic) BOOL isDictation; // ivar: _isDictation
@property (readonly, nonatomic) BOOL isDucking; // ivar: _isDucking
@property (nonatomic) BOOL isEndAlertInfo; // ivar: _isEndAlertInfo
@property (readonly, nonatomic) BOOL isFingerprintOnly; // ivar: _isFingerprintOnly
@property (readonly, nonatomic) BOOL isSecureOfflineOnly; // ivar: _isSecureOfflineOnly
@property (readonly, nonatomic) int mhSource; // ivar: _mhSource
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSString *productId;
@property (readonly, nonatomic) NSString *route; // ivar: _route
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) NSInteger speechEvent; // ivar: _speechEvent
@property (readonly, nonatomic) CGFloat startRecordingTimestamp; // ivar: _startRecordingTimestamp
@property (nonatomic) BOOL triggeredTwoShotBorealis; // ivar: _triggeredTwoShotBorealis
@property (readonly, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(id)initWithDictation:(BOOL)arg0 codec:(id)arg1 ;
-(id)initWithDictation:(BOOL)arg0 fingerprintOnly:(BOOL)arg1 secureOfflineOnly:(BOOL)arg2 audioAlertStyle:(NSInteger)arg3 recordSettings:(id)arg4 recordRoute:(id)arg5 recordDeviceInfo:(id)arg6 playbackRoute:(id)arg7 audioDeviceID:(unsigned int)arg8 audioSessionID:(unsigned int)arg9 voiceTriggerEventInfo:(id)arg10 activationAlertStartTimestamp:(CGFloat)arg11 startRecordingTimestamp:(CGFloat)arg12 firstBufferTimestamp:(CGFloat)arg13 firstBufferHostTime:(NSUInteger)arg14 estimatedSpeechEndHostTime:(NSUInteger)arg15 deviceIdentifier:(id)arg16 includeBTInfo:(BOOL)arg17 speechEvent:(NSInteger)arg18 ;
-(void)_fetchBTInfo;


@end


#endif