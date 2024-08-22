// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOENCODERINTERFACE_H
#define VIDEOENCODERINTERFACE_H

@class NSString;
@protocol EncoderConfigDelegate, VideoEncoderInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "MOVStreamEncoderConfig.h"

@interface VideoEncoderInterface : NSObject <EncoderConfigDelegate>

 {
    *HEVCLosslessEncoder m_encoder;
    BOOL m_encoderInitialized;
    CGFloat m_expectedFrameRate;
    int m_qpValue;
    NSString *m_stream;
    id<VideoEncoderInterfaceDelegate> *m_delegate;
    MOVStreamEncoderConfig *m_config;
}


@property BOOL customEncoderConfig; // ivar: _customEncoderConfig
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL frameReorderingEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int lastEncodingInfoFlags; // ivar: _lastEncodingInfoFlags
@property (readonly) unsigned int lastEncodingStatus; // ivar: _lastEncodingStatus
@property NSInteger pendigFrames; // ivar: _pendigFrames
@property (readonly) Class superclass;


+(struct __CVBuffer *)createHEVCCompatiblePixelBuffer:(struct __CVBuffer *)arg0 ;
-(BOOL)configureSessionOverride:(struct OpaqueVTCompressionSession *)arg0 ;
-(id)init;
-(id)initForStream:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 ;
-(id)initWithExpectedFrameRate:(CGFloat)arg0 forStream:(id)arg1 delegate:(id)arg2 ;
-(id)overrideVideoEncoderSpecification;
-(unsigned int)codecTypeOverride;
-(void)closeEncoder;
-(void)dealloc;
-(void)encodeFrame:(struct __CVBuffer *)arg0 pst:(struct ? )arg1 frameProperties:(struct __CFDictionary *)arg2 metadata:(id)arg3 ;
-(void)setupEncoderWithWidth:(int)arg0 andHeight:(int)arg1 imageFormat:(int)arg2 andFramerate:(CGFloat)arg3 ;
-(void)skipFrameWithStatus:(int)arg0 andFlags:(unsigned int)arg1 ;
-(void)useQPEncoding:(int)arg0 ;
-(void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 pts:(struct ? )arg1 metadata:(id)arg2 withStatus:(int)arg3 andFlags:(unsigned int)arg4 ;


@end


#endif