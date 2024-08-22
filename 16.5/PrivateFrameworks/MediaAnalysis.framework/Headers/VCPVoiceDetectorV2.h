// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVOICEDETECTORV2_H
#define VCPVOICEDETECTORV2_H



#import "VCPVoiceDetector.h"

@interface VCPVoiceDetectorV2 : VCPVoiceDetector {
    BOOL _voiceActivityNew;
    *OpaqueAudioComponentInstance _audioUnit;
}




-(id)init;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)loadModel;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)setupWithAudioStream:(struct AudioStreamBasicDescription *)arg0 ;
-(void)dealloc;


@end


#endif