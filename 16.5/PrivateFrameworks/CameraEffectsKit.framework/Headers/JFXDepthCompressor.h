// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXDEPTHCOMPRESSOR_H
#define JFXDEPTHCOMPRESSOR_H


#import <Foundation/Foundation.h>

#import "JFXVideoEncoderInterface.h"

@interface JFXDepthCompressor : NSObject {
    JFXVideoEncoderInterface *_videoEncoderInterface;
    *opaqueCMFormatDescription _previousFormatDescription;
}


@property (readonly, nonatomic) int depthCodecType; // ivar: _depthCodecType


+(id)NSDataFromDepthMapInsideAVDepthData:(id)arg0 ;
+(id)NSDataFromFloatDepth32:(struct __CVBuffer *)arg0 ;
+(id)decapsulatePayload:(id)arg0 ;
+(id)encapsulatePayload:(id)arg0 ;
+(id)fakeAuxDepthInfoDictionaryForCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)fakeXMPDataIfNotFound;
-(id)compressAVDepthData:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)compressAVDepthData_BGRA:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)compressAVDepthData_HEVC10:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)compressAVDepthData_LZ:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)compressAVDepthData_Photo:(id)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)compressDepthMapCVPixelBuffer:(struct __CVBuffer *)arg0 timingInfo:(struct ? )arg1 error:(*id)arg2 ;
-(id)depthOutputSettingsForDepthDimensions:(struct ? )arg0 ;
-(id)depthSampleBufferAppendingDepthMetadata:(id)arg0 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer *)arg1 ;
-(id)depthSampleBufferWithNewHVCCWithDepthMetadata:(id)arg0 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer *)arg1 ;
-(id)hevcSEIMessageDataWithDepthXMPMetadata:(id)arg0 isPrefixSEI:(BOOL)arg1 nuh_layer_id:(int)arg2 nuh_temporal_id_plus1:(int)arg3 ;
-(id)hevcSEIPayload:(id)arg0 ;
-(id)hevcSEIPayloadHeaderForPayloadType:(int)arg0 payloadSize:(NSUInteger)arg1 ;
-(id)initWithDepthCodecType:(int)arg0 ;
-(id)mutableCopyExtensionsDictionaryCopyFromAVDepthData:(id)arg0 ;
-(struct __CVBuffer *)copyDepthBufferAsBGRA:(struct __CVBuffer *)arg0 ;
-(struct opaqueCMFormatDescription *)depthFormatDescriptionForDepthDimensions:(struct ? )arg0 ;
-(unsigned int)getPayloadTypeOrSize:(id)arg0 offsetPointer:(*NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif