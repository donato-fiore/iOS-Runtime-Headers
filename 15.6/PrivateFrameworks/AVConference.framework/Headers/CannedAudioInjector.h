// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CANNEDAUDIOINJECTOR_H
#define CANNEDAUDIOINJECTOR_H

@class NSString, NSMutableData;

#import <Foundation/Foundation.h>

#import "CannedAVSync.h"

@interface CannedAudioInjector : NSObject {
    _opaque_pthread_mutex_t _samplesMutex;
    _opaque_pthread_cond_t _samplesConditional;
    AudioStreamBasicDescription _internalFormat;
    CannedAVSync *_avSync;
    ? _audioConverterProc;
}


@property (retain, nonatomic) NSString *cannedMoviePath; // ivar: _cannedMoviePath
@property (nonatomic) BOOL fromBeginning; // ivar: _fromBeginning
@property (nonatomic) int position; // ivar: _position
@property BOOL readyToInject; // ivar: _readyToInject
@property (retain, nonatomic) NSMutableData *samples; // ivar: _samples


+(BOOL)isAudioAvailable:(id)arg0 ;
-(id)description;
-(id)initWithPath:(id)arg0 withDescription:(struct AudioStreamBasicDescription )arg1 fromBeginning:(BOOL)arg2 ;
-(id)initWithPath:(id)arg0 withDescription:(struct AudioStreamBasicDescription )arg1 fromBeginning:(BOOL)arg2 startHostTime:(CGFloat)arg3 loopLength:(CGFloat)arg4 ;
-(id)initWithPath:(id)arg0 withDescription:(struct AudioStreamBasicDescription )arg1 startHostTime:(CGFloat)arg2 loopLength:(CGFloat)arg3 ;
-(int)decodeAudio;
-(int)readRawAudioSamples;
-(void)cleanupAudioConverterProc;
-(void)dealloc;
-(void)injectToBuffer:(char *)arg0 size:(int)arg1 time:(CGFloat)arg2 muted:(BOOL)arg3 ;
-(void)setAudioConverterProcAudioBufferList:(struct AudioBufferList *)arg0 blockBuffer:(struct OpaqueCMBlockBuffer *)arg1 ;


@end


#endif