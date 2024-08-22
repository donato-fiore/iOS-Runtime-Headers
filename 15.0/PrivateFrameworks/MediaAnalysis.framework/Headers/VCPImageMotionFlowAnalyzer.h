// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGEMOTIONFLOWANALYZER_H
#define VCPIMAGEMOTIONFLOWANALYZER_H

@class NSArray, NSString, NSMutableArray;


#import "VCPImageAnalyzer.h"
#import "VCPCNNModelEspresso.h"

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector<float *, std::allocator<float *>> _inputsData;
    int _srcWidth;
    int _srcHeight;
    int _cnnOutputWidth;
    int _cnnOutputHeight;
    NSString *_resConfig;
    NSMutableArray *_results;
    *float _flow;
    BOOL _flushModel;
}




+(id)sharedModel:(id)arg0 inputNames:(id)arg1 ;
-(*float)getFlowWithHeight:(*int)arg0 andWidth:(*int)arg1 ;
-(id)init;
-(int)analyzeImages:(struct __CVBuffer *)arg0 secondImage:(struct __CVBuffer *)arg1 cancel:(id)arg2 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 withChannels:(int)arg2 ;
-(int)creatModel;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;
-(int)prepareModelWithAspectRatio:(float)arg0 ;
-(void)dealloc;


@end


#endif