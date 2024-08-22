// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WK_RTCLOCALVIDEOH264H265ENCODER_H
#define WK_RTCLOCALVIDEOH264H265ENCODER_H


#import <Foundation/Foundation.h>

#import "WK_RTCVideoEncoderH264.h"
#import "WK_RTCVideoEncoderH265.h"

@interface WK_RTCLocalVideoH264H265Encoder : NSObject {
    WK_RTCVideoEncoderH264 *m_h264Encoder;
    WK_RTCVideoEncoderH265 *m_h265Encoder;
}




-(NSInteger)encode:(id)arg0 codecSpecificInfo:(id)arg1 frameTypes:(id)arg2 ;
-(NSInteger)releaseEncoder;
-(NSInteger)startEncodeWithSettings:(id)arg0 numberOfCores:(int)arg1 ;
-(id)initWithCodecInfo:(id)arg0 ;
-(int)codecType;
-(int)setBitrate:(unsigned int)arg0 framerate:(unsigned int)arg1 ;
-(void)setCallback:(id)arg0 ;
-(void)setLowLatency:(BOOL)arg0 ;


@end


#endif