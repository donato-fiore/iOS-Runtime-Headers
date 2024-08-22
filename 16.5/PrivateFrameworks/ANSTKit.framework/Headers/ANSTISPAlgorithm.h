// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSTISPALGORITHM_H
#define ANSTISPALGORITHM_H



#import "ANSTAlgorithm.h"
#import "ANSTISPAlgorithmConfiguration.h"
#import "ANSTBaseNetworkEspresso.h"

@interface ANSTISPAlgorithm : ANSTAlgorithm {
    ANSTISPAlgorithmConfiguration *_config;
    ANSTBaseNetworkEspresso *_network;
    BOOL _readyForInference;
    *__CVBuffer _resizedInputBuffer;
    *OpaqueVTPixelTransferSession _pixelTransferSession;
    float _smoothedSmudgeConfidence;
}




+(id)new;
-(BOOL)prepareWithError:(*id)arg0 ;
-(float)_float32_fromEspressoBufferFloat32:(struct ? *)arg0 ;
-(id)_init;
-(id)_networkResult;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)resultForPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)undoPrepareSideEffects;


@end


#endif