// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXVIDEOENCODERINTERFACE_H
#define JFXVIDEOENCODERINTERFACE_H


#import <Foundation/Foundation.h>


@interface JFXVideoEncoderInterface : NSObject {
    *HEVCLosslessEncoder m_encoder;
    *__CVBuffer m_preparedPixelBuffer;
    BOOL m_encoderInitialized;
    promise<opaqueCMSampleBuffer *> m_sampleBufferPromise;
    CGFloat m_expectedFrameRate;
}


@property *opaqueCMSampleBuffer currentBuffer; // ivar: _currentBuffer


-(id)init;
-(id)initWithExpectedFrameRate:(CGFloat)arg0 ;
-(struct opaqueCMSampleBuffer *)encodeFrame:(struct __CVBuffer *)arg0 presentationTime:(struct ? )arg1 frameProperties:(struct __CFDictionary *)arg2 ;
-(void)closeEncoder;
-(void)dealloc;
-(void)setupEncoderWithWidth:(int)arg0 andHeight:(int)arg1 imageFormat:(int)arg2 andFramerate:(CGFloat)arg3 ;
-(void)skipFrame;
-(void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif