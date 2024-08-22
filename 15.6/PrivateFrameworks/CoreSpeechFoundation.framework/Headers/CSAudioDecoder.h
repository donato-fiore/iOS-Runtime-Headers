// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIODECODER_H
#define CSAUDIODECODER_H

@protocol CSAudioDecoderDelegate;

#import <Foundation/Foundation.h>


@interface CSAudioDecoder : NSObject {
    *OpaqueAudioConverter _decoder;
    AudioStreamBasicDescription _inASBD;
    AudioStreamBasicDescription _outASBD;
}


@property (weak) NSObject<CSAudioDecoderDelegate> *delegate; // ivar: _delegate


-(id)initWithInASBD:(struct AudioStreamBasicDescription )arg0 outASBD:(struct AudioStreamBasicDescription )arg1 ;
-(void)addPackets:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 remoteVAD:(id)arg2 timestamp:(NSUInteger)arg3 arrivalTimestampToAudioRecorder:(NSUInteger)arg4 wasBuffered:(BOOL)arg5 receivedNumChannels:(unsigned int)arg6 ;


@end


#endif