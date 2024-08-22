// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMOTIONFLOWSUBTLEMOTIONANALYZER_H
#define VCPMOTIONFLOWSUBTLEMOTIONANALYZER_H



#import "VCPVideoAnalyzer.h"
#import "VCPImageMotionFlowAnalyzer.h"
#import "VCPMotionFlowRequest.h"

@interface VCPMotionFlowSubtleMotionAnalyzer : VCPVideoAnalyzer {
    *float _flow;
    *float _block;
    BOOL _scale;
    Scaler _scaler;
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;
    VCPMotionFlowRequest *_moflowRequest;
    vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;
    *OpaqueVTPixelTransferSession _transferSession;
    int _frameWidth;
    int _frameHeight;
    int _downScaleWidth;
    int _downScaleHeight;
    int _flowWidth;
    int _flowHeight;
    int _blockSize;
    int _frameNum;
    int _sceneType;
    BOOL _initialized;
    BOOL _useR2D2;
}


@property (readonly) float subtleMotionScore; // ivar: _subtleMotionScore


+(BOOL)enableR2D2;
-(?)convertPixelBuffer:(?)arg0 toPixelBufferwithPixelFormat;
-(?)createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(id)init;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 withFrame:(*void)arg1 withTimestamp:(struct ? )arg2 andDuration:(struct ? )arg3 hasSubtleScene:(int)arg4 ;
-(int)convertFlow:(struct __CVBuffer *)arg0 ;
-(int)generateMotionFlow;
-(int)generateSubleMotionScore:(*void)arg0 ;
-(int)preProcessing:(struct __CVBuffer *)arg0 ;
-(int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif