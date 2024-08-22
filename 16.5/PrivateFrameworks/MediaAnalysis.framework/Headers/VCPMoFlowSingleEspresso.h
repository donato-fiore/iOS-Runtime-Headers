// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMOFLOWSINGLEESPRESSO_H
#define VCPMOFLOWSINGLEESPRESSO_H

@class NSURL, NSArray, NSString;


#import "VCPImageMotionFlowAnalyzer.h"
#import "VCPCNNModelEspresso.h"

@interface VCPMoFlowSingleEspresso : VCPImageMotionFlowAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    vector<float *, std::allocator<float *>> _inputsData;
    NSString *_resConfig;
    *float _flow;
    BOOL _forceCPU;
    BOOL _sharedModel;
    BOOL _flushModel;
}




+(id)sharedModel:(id)arg0 inputNames:(id)arg1 ;
-(*float)getFlowWithHeight:(*int)arg0 andWidth:(*int)arg1 ;
-(int)analyzeImages:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 cancel:(id)arg2 ;
-(int)configForAspectRatio:(id)arg0 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withChannels:(int)arg2 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 flowBufferY:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3 ;
-(int)flowScalingTo:(struct __CVBuffer *)arg0 scalerX:(float)arg1 scalerY:(float)arg2 ;
-(int)getFlowToBuffer:(struct __CVBuffer *)arg0 ;
-(int)prepareModel;
-(int)prepareWithLightweightOption:(BOOL)arg0 aspectRatio:(id)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 flushModel:(BOOL)arg4 ;
-(int)reInitModel;
-(int)updateModelForAspectRatio:(id)arg0 computationAccuracy:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif