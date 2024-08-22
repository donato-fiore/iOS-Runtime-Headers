// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMOTIONFLOWREQUEST_H
#define VCPMOTIONFLOWREQUEST_H



#import "VCPRequest.h"
#import "VCPImageMotionFlowAnalyzer.h"

@interface VCPMotionFlowRequest : VCPRequest {
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;
    BOOL _useSingleEspressoModel;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    *OpaqueVTPixelTransferSession _transferSession;
}




-(?)convertPixelBuffer:(?)arg0 toPixelBufferwithPixelFormat;
-(?)createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg0 andSecondImage:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg0 andSecondImage:(struct __CVBuffer *)arg1 withUpsample:(BOOL)arg2 withGuidedImage:(struct __CVBuffer *)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 cancel:(id)arg1 ;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;
-(void)dealloc;


@end


#endif