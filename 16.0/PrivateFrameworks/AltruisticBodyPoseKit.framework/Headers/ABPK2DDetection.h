// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DDETECTION_H
#define ABPK2DDETECTION_H

@class NSString, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ABPK2DDetectionConfiguration.h"
#import "ABPKMLModelConfiguration2D.h"
#import "ABPKMLNetworkV2.h"

@interface ABPK2DDetection : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPKMLModelConfiguration2D *_mlConfig;
    NSString *_previous_network_configuration;
    *void _context;
    *void _plan;
    ? _network;
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    NSInteger _deviceOrientation;
    networkparams_t _parameters;
    networkvariables_t _variables;
    NSString *_netSubPath;
    NSString *_netPath;
    vector<__CVBuffer *, std::allocator<__CVBuffer *>> _outputBuffers;
    vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> _espressoOutputTensors;
    vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> _espressoOutputBufferPools;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *_inputBufferDict;
    NSMutableDictionary *_outputBufferDict;
    BOOL _useEspressoV2;
}


@property (nonatomic) BOOL useEspressoZeroCopyOutput; // ivar: _useEspressoZeroCopyOutput


+(struct CGSize )inputDimensionsForDeviceOrientation:(id)arg0 ;
-(?)_createResultDataFromImageDataForNeuralNetwork:(?)arg0 originalImageData:(?)arg1 outputPixelBuffer:(?)arg2 numberOfOutputTensorsrotationOfResultTensor;
-(BOOL)initMLNetwork;
-(id)createException:(*void)arg0 forNetwork:(id)arg1 ;
-(id)initWithNetworkConfig:(id)arg0 ;
-(id)runWithImage:(struct __CVBuffer *)arg0 abpkOrientation:(NSInteger)arg1 atTimestamp:(CGFloat)arg2 rotationOfResultTensor:(NSInteger)arg3 ;
-(id)runWithImageDataForNeuralNetwork:(id)arg0 originalImageData:(id)arg1 abpkOrientation:(NSInteger)arg2 atTimestamp:(CGFloat)arg3 rotationOfResultTensor:(NSInteger)arg4 ;
-(id)runWithMLImage:(id)arg0 originalImage:(id)arg1 abpkOrientation:(NSInteger)arg2 atTimestamp:(CGFloat)arg3 rotationOfResultTensor:(NSInteger)arg4 ;
-(void)_bindOutputTensor;
-(void)_endEvaluateBodyPoseForImageSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_endLoadingMLModelSignpost;
-(void)_startEvaluateBodyPoseForImageSignpostWithTimestamp:(CGFloat)arg0 ;
-(void)_startLoadingMLModelSignpost;
-(void)changeEspressoConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif