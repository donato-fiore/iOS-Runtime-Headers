// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, nonatomic) NSString *endpointerModelVersion; // ivar: _endpointerModelVersion
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
-(id)initWithDictation:(BOOL)arg0 fingerprintOnly:(BOOL)arg1 secureOfflineOnly:(BOOL)arg2 audioAlertStyle:(NSInteger)arg3 recordSettings:(id)arg4 endpointerModelVersion:(id)arg5 recordRoute:(id)arg6 recordDeviceInfo:(id)arg7 playbackRoute:(id)arg8 audioDeviceID:(unsigned int)arg9 audioSessionID:(unsigned int)arg10 voiceTriggerEventInfo:(id)arg11 activationAlertStartTimestamp:(CGFloat)arg12 startRecordingTimestamp:(CGFloat)arg13 firstBufferTimestamp:(CGFloat)arg14 firstBufferHostTime:(NSUInteger)arg15 estimatedSpeechEndHostTime:(NSUInteger)arg16 deviceIdentifier:(id)arg17 includeBTInfo:(BOOL)arg18 speechEvent:(NSInteger)arg19 ;
-(void)_fetchBTInfo;


@end


#endif