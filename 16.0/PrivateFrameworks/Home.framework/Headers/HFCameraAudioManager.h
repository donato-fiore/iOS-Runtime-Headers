// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERAAUDIOMANAGER_H
#define HFCAMERAAUDIOMANAGER_H

@class HMCameraProfile, HMCameraStream;

#import <Foundation/Foundation.h>

#import "HFCharacteristicValueManager.h"

@interface HFCameraAudioManager : NSObject

@property (readonly, nonatomic) NSUInteger audioStreamSetting;
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) HMCameraStream *cameraStream; // ivar: _cameraStream
@property (readonly, nonatomic, getter=isIncomingAudioEnabled) BOOL incomingAudioEnabled;
@property (readonly, nonatomic) float incomingAudioVolume;
@property (readonly, nonatomic, getter=isOutgoingAudioEnabled) BOOL outgoingAudioEnabled;
@property (retain, nonatomic) HFCharacteristicValueManager *valueManager; // ivar: _valueManager


-(id)_enableAudioIfNecessaryForAudioControl:(id)arg0 minVolume:(float)arg1 ;
-(id)_readValuesForCharacteristics:(id)arg0 ;
-(id)_writeValuesForCharacteristics:(id)arg0 ;
-(id)enableRemoteMicrophoneIfNecessary;
-(id)enableRemoteSpeakerIfNecessary;
-(id)initWithCameraProfile:(id)arg0 cameraStream:(id)arg1 valueManager:(id)arg2 ;
-(id)updateAudioStreamSetting:(NSUInteger)arg0 ;


@end


#endif