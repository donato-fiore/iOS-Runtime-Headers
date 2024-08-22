// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WK_RTCLOCALVIDEOH264H265VP9DECODER_H
#define WK_RTCLOCALVIDEOH264H265VP9DECODER_H


#import <Foundation/Foundation.h>

#import "WK_RTCVideoDecoderH264.h"
#import "WK_RTCVideoDecoderH265.h"
#import "WK_RTCVideoDecoderVTBVP9.h"

@interface WK_RTCLocalVideoH264H265VP9Decoder : NSObject {
    WK_RTCVideoDecoderH264 *m_h264Decoder;
    WK_RTCVideoDecoderH265 *m_h265Decoder;
    WK_RTCVideoDecoderVTBVP9 *m_vp9Decoder;
}




-(NSInteger)decodeData:(char *)arg0 size:(NSUInteger)arg1 timeStamp:(unsigned int)arg2 ;
-(NSInteger)releaseDecoder;
-(id)initH264DecoderWithCallback:(id)arg0 ;
-(id)initH265DecoderWithCallback:(id)arg0 ;
-(id)initVP9DecoderWithCallback:(id)arg0 ;
-(void)setWidth:(unsigned short)arg0 height:(unsigned short)arg1 ;


@end


#endif