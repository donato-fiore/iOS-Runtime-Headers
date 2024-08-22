// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONENCODERTRANSFORMER_H
#define CVNLPCAPTIONENCODERTRANSFORMER_H



#import "CVNLPCaptionEncoder.h"

@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder {
    *void encoderPlan;
    *void encoderCtx;
    ? encoderNet;
    vector<std::string, std::allocator<std::string>> encoderInputNames;
    ? attFeatsBlob;
}




-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;
-(void)computeCaptionForImage:(struct vImage_Buffer *)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForImageImpl:(struct vImage_Buffer *)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForPixelBuffer:(struct __CVBuffer *)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForPixelBufferImpl:(struct __CVBuffer *)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForVideoPixelBuffer:(*void)arg0 outputs:(*id)arg1 ;
-(void)computeCaptionForVideoPixelBufferImpl:(*void)arg0 outputs:(*id)arg1 ;
-(void)dealloc;


@end


#endif