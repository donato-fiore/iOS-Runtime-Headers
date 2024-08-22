// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCGPUHELPER_H
#define MLCGPUHELPER_H


#import <Foundation/Foundation.h>


@interface MLCGPUHelper : NSObject



+(NSUInteger)mtlResourceOptions;
+(NSUInteger)mtlStorageMode;
+(id)allocateAndCopyToTemporaryMPSImageBatchForTensor:(id)arg0 commandBuffer:(id)arg1 batchSize:(NSUInteger)arg2 copyingKernel:(id)arg3 sourceMTLBuffer:(id)arg4 MLCDataType:(int)arg5 heapAllocator:(id)arg6 ;
+(id)allocateMPSImageBatchForTensor:(id)arg0 commandBuffer:(id)arg1 kernel:(id)arg2 batchSize:(NSUInteger)arg3 heapAllocator:(id)arg4 imageBatchIsTemporary:(BOOL)arg5 ;
+(id)allocateTemporaryMPSImageBatchForTensor:(id)arg0 commandBuffer:(id)arg1 kernel:(id)arg2 batchSize:(NSUInteger)arg3 ;
+(void)concatChannelsForwardWithParams:(struct ConcatImageParams )arg0 sourceImageBatch:(id)arg1 resultImageBatch:(id)arg2 commandBuffer:(id)arg3 device:(id)arg4 deviceIndex:(NSUInteger)arg5 ;
+(void)copyMPSImageBatchToMTLBuffer:(id)arg0 commandBuffer:(id)arg1 sourceImageBatch:(id)arg2 destinationMTLBuffer:(id)arg3 MLCDataType:(int)arg4 ;
+(void)copyMTLBufferToMPSImageBatch:(id)arg0 commandBuffer:(id)arg1 sourceMTLBuffer:(id)arg2 destinationImageBatch:(id)arg3 MLCDataType:(int)arg4 ;
+(void)didModifyRange:(struct _NSRange )arg0 buffer:(id)arg1 ;
+(void)synchronizeResource:(id)arg0 commandBuffer:(id)arg1 ;


@end


#endif