// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMOTIONFLOWANALYZER_H
#define VCPMOTIONFLOWANALYZER_H



#import "VCPVideoAnalyzer.h"
#import "VCPMotionFlowRequest.h"

@interface VCPMotionFlowAnalyzer : VCPVideoAnalyzer {
    *float _flow;
    BOOL _scale;
    Scaler _scaler;
    VCPMotionFlowRequest *_moflowRequest;
    vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;
    *OpaqueVTPixelTransferSession _transferSession;
    int _frameWidth;
    int _frameHeight;
    int _downScaleWidth;
    int _downScaleHeight;
    int _flowWidth;
    int _flowHeight;
    int _frameNum;
    BOOL _initialized;
}




-(?)convertPixelBuffer:(?)arg0 toPixelBufferwithPixelFormat;
-(?)createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(id)init;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 withFrame:(*void)arg1 withTimestamp:(struct ? )arg2 andDuration:(struct ? )arg3 cancel:(id)arg4 ;
-(int)convertFlow:(struct __CVBuffer *)arg0 ;
-(int)generateMotionFlow;
-(int)preProcessing:(struct __CVBuffer *)arg0 ;
-(int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer *)arg0 cancel:(id)arg1 ;
-(void)dealloc;


@end


#endif