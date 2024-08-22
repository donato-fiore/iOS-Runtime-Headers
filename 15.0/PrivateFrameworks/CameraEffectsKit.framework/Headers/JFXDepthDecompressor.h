// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXDEPTHDECOMPRESSOR_H
#define JFXDEPTHDECOMPRESSOR_H


#import <Foundation/Foundation.h>

#import "JFXVideoDecoderInterface.h"

@interface JFXDepthDecompressor : NSObject {
    *opaqueCMFormatDescription _previousFormatDescription;
    JFXVideoDecoderInterface *_videoDecoderInterface;
}


@property (readonly, nonatomic) int depthCodecType; // ivar: _depthCodecType


+(id)NSDataWithCMBlockBuffer:(struct OpaqueCMBlockBuffer *)arg0 range:(struct _NSRange )arg1 ;
+(id)dataWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)trackOptionsForDepthCodecType:(int)arg0 error:(*id)arg1 ;
+(int)bitDepthOf:(struct opaqueCMFormatDescription *)arg0 ;
-(id)decompressAVDepthData:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)decompressAVDepthData_BGRA:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)decompressAVDepthData_HEVC10:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)decompressAVDepthData_LZ:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)decompressAVDepthData_Photo:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)incompleteImageSourceAuxDataInfoDict:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif