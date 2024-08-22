// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPDEVICEHANDLER_H
#define MLPDEVICEHANDLER_H

@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface MLPDeviceHandler : NSObject {
    mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> weightSeed;
}


@property (readonly) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly) NSUInteger dataLayout; // ivar: _dataLayout
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device


-(float)uniformRandWithParamA:(float)arg0 paramB:(float)arg1 ;
-(id)biasVectorWithLength:(NSUInteger)arg0 stdDev:(float)arg1 values:(*void)arg2 ;
-(id)deduceDevice;
-(id)imageBatchFromMatrix:(id)arg0 m2iKernel:(id)arg1 cmdBuf:(id)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 channels:(NSUInteger)arg5 ;
-(id)imageFromData:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 featureChannels:(NSUInteger)arg3 ;
-(id)imageFromMatrix:(id)arg0 m2iKernel:(id)arg1 cmdBuf:(id)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 featureChannels:(NSUInteger)arg5 ;
-(id)initWithDataLayout:(id)arg0 ;
-(id)matrixFromImages:(id)arg0 i2mKernel:(id)arg1 cmdBuf:(id)arg2 ;
-(id)matrixToVector:(id)arg0 ;
-(id)matrixWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 cmdBuf:(id)arg2 ;
-(id)tempMatrixFromImages:(id)arg0 i2mKernel:(id)arg1 cmdBuf:(id)arg2 ;
-(id)tempMatrixWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 cmdBuf:(id)arg2 ;
-(id)vectorWithLength:(NSUInteger)arg0 cmdBuf:(id)arg1 ;
-(id)weightMatrixFixedRowBytesWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 ;
-(id)weightMatrixWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 stdDev:(float)arg2 initialValues:(*void)arg3 columnMajor:(BOOL)arg4 ;
-(void)importDataFromGPU:(id)arg0 cmdBuf:(id)arg1 ;
-(void)sendDataToGPU:(id)arg0 ;


@end


#endif