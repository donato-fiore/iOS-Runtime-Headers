// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPNETWORK_H
#define MLPNETWORK_H

@class MPSImageCopyToMatrix, NSArray, MPSMatrixCopyToImage, NSDictionary;

#import <Foundation/Foundation.h>

#import "MLPDeviceHandler.h"
#import "MontrealNNModelOptimizerParam.h"

@interface MLPNetwork : NSObject

@property NSUInteger batchSize; // ivar: _batchSize
@property BOOL computeLossOnInference; // ivar: _computeLossOnInference
@property (retain) MLPDeviceHandler *deviceHandler; // ivar: _deviceHandler
@property (retain) MPSImageCopyToMatrix *i2mKernel; // ivar: _i2mKernel
@property NSUInteger inputChannels; // ivar: _inputChannels
@property NSUInteger inputHeight; // ivar: _inputHeight
@property NSUInteger inputLength; // ivar: _inputLength
@property (retain) NSArray *layers; // ivar: _layers
@property NSUInteger lossBatchSize; // ivar: _lossBatchSize
@property (retain) MPSMatrixCopyToImage *m2iKernel; // ivar: _m2iKernel
@property NSUInteger networkType; // ivar: _networkType
@property (retain) MontrealNNModelOptimizerParam *optimizerParams; // ivar: _optimizerParams
@property (retain) NSDictionary *options; // ivar: _options


+(id)networkWithLayers:(id)arg0 inputLength:(NSUInteger)arg1 inputHeight:(NSUInteger)arg2 inputChannels:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 lossBatchSize:(NSUInteger)arg5 options:(id)arg6 deviceHandler:(id)arg7 optimizerParams:(id)arg8 ;
-(*void)generateModelContainer;
-(NSUInteger)runInference:(id)arg0 databatch:(id)arg1 inferredResult:(id)arg2 semaphore:(id)arg3 ;
-(id)computeInference:(id)arg0 ;
-(id)initWithLayers:(id)arg0 ;
-(id)initWithNetworkType:(NSUInteger)arg0 layers:(id)arg1 ;
-(void)createLayerKernels;
// -(void)runTraining:(id)arg0 databatch:(id)arg1 iteration:(NSUInteger)arg2 lossCallback:(id)arg3 semaphore:(unk)arg4  ;


@end


#endif