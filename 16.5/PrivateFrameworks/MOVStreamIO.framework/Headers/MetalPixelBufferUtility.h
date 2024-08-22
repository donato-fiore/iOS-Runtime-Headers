// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METALPIXELBUFFERUTILITY_H
#define METALPIXELBUFFERUTILITY_H

@protocol MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface MetalPixelBufferUtility : NSObject {
    id<MTLDevice> *_metalDevice;
    id<MTLCommandQueue> *_metalCommandQueue;
    id<MTLComputePipelineState>" _pipeLineStates;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled


+(id)sharedMetalPixelBufferUtility;
-(BOOL)joinCompandedWarholBuffer:(struct __CVBuffer *)arg0 intoCompandedBayerBuffer:(struct __CVBuffer *)arg1 ;
-(BOOL)joinWarholBuffer:(struct __CVBuffer *)arg0 intoBayerBuffer:(struct __CVBuffer *)arg1 shiftBitsRightBy:(int)arg2 msbReplication:(BOOL)arg3 ;
-(BOOL)joinYUVBuffer:(struct __CVBuffer *)arg0 intoRawBayerPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 msbReplication:(BOOL)arg3 ;
-(BOOL)processBayerBuffer:(struct __CVBuffer *)arg0 withWarholBuffer:(struct __CVBuffer *)arg1 shiftCount:(int)arg2 msbReplication:(BOOL)arg3 operation:(int)arg4 sampleSize:(int)arg5 ;
-(BOOL)splitBayerBuffer:(struct __CVBuffer *)arg0 intoWarholPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 ;
-(BOOL)splitBayerBuffer:(struct __CVBuffer *)arg0 intoYUVPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 ;
-(BOOL)splitCompandedBayerBuffer:(struct __CVBuffer *)arg0 intoCompandedWarholPixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)init;


@end


#endif