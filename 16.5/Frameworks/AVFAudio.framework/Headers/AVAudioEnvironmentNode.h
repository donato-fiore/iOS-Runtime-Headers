// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOENVIRONMENTNODE_H
#define AVAUDIOENVIRONMENTNODE_H

@class NSArray, NSString;
@protocol AVAudioMixing;


#import "AVAudioNode.h"
#import "AVAudioEnvironmentDistanceAttenuationParameters.h"
#import "AVAudioEnvironmentReverbParameters.h"

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>



@property (readonly, nonatomic) NSArray *applicableRenderingAlgorithms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVAudioEnvironmentDistanceAttenuationParameters *distanceAttenuationParameters;
@property (readonly) NSUInteger hash;
@property (nonatomic) AVAudio3DAngularOrientation listenerAngularOrientation;
@property (nonatomic) AVAudio3DPoint listenerPosition;
@property (nonatomic) AVAudio3DVectorOrientation listenerVectorOrientation;
@property (readonly, nonatomic) NSUInteger nextAvailableInputBus;
@property (nonatomic) NSInteger outputType;
@property (nonatomic) float outputVolume;
@property (readonly, nonatomic) AVAudioEnvironmentReverbParameters *reverbParameters;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(id)init;


@end


#endif