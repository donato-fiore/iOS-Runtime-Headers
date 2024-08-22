// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSOPUSDECODER_H
#define VSOPUSDECODER_H


#import <Foundation/Foundation.h>


@interface VSOpusDecoder : NSObject {
    *OpaqueAudioConverter _decoder;
    AudioStreamBasicDescription _asbd;
}




+(id)sharedInstance;
-(id)beginChunkDecoderForStreamDescription:(struct AudioStreamBasicDescription )arg0 ;
-(id)decodeChunk:(id)arg0 outError:(*id)arg1 ;
-(id)decodeChunks:(id)arg0 streamDescription:(struct AudioStreamBasicDescription )arg1 outError:(*id)arg2 ;
-(struct OpaqueAudioConverter *)_opusDecoder:(struct AudioStreamBasicDescription )arg0 ;
-(void)dealloc;
-(void)endChunkDecoding;


@end


#endif