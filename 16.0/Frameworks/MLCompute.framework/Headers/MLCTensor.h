// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCTENSOR_H
#define MLCTENSOR_H

@class NSMutableArray, NSData, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MLCTensorDescriptor.h"
#import "MLCDevice.h"
#import "MLCLayer.h"
#import "MLCTensor.h"

@interface MLCTensor : NSObject <NSCopying>



@property (retain, nonatomic) NSMutableArray *broadcastabledeviceMemory; // ivar: _broadcastabledeviceMemory
@property (retain, nonatomic) NSMutableArray *childLayers; // ivar: _childLayers
@property (nonatomic) int computeFlags; // ivar: _computeFlags
@property (nonatomic) NSUInteger concatDimension; // ivar: _concatDimension
@property (nonatomic) NSUInteger concatOffset; // ivar: _concatOffset
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) MLCTensorDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) MLCDevice *device; // ivar: _device
@property (retain, nonatomic) id *deviceDataSources; // ivar: _deviceDataSources
@property (nonatomic) NSUInteger deviceIndex; // ivar: _deviceIndex
@property (retain, nonatomic) NSMutableArray *deviceMemory; // ivar: _deviceMemory
@property (readonly, nonatomic) BOOL hasValidNumerics;
@property (nonatomic) NSUInteger interleave; // ivar: _interleave
@property (retain, nonatomic) MLCLayer *intermediateSumLayer; // ivar: _intermediateSumLayer
@property (nonatomic) BOOL isLayerParameter; // ivar: _isLayerParameter
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int multiDeviceReductionType; // ivar: _multiDeviceReductionType
@property (copy, nonatomic) NSArray *optimizerData; // ivar: _optimizerData
@property (copy, nonatomic) NSArray *optimizerDeviceData; // ivar: _optimizerDeviceData
@property (retain, nonatomic) NSMutableArray *parentLayers; // ivar: _parentLayers
@property (nonatomic) NSUInteger readCount; // ivar: _readCount
@property (nonatomic) NSUInteger rootSourceGradientTensorCount; // ivar: _rootSourceGradientTensorCount
@property (nonatomic) NSUInteger rootSourceGradientTensorIndex; // ivar: _rootSourceGradientTensorIndex
@property (nonatomic) NSUInteger rootSourceGradientTensorIndexStart; // ivar: _rootSourceGradientTensorIndexStart
@property (retain, nonatomic) MLCTensor *sharedMemoryTensor; // ivar: _sharedMemoryTensor
@property (nonatomic) BOOL skipWritingToDevice; // ivar: _skipWritingToDevice
@property (nonatomic) NSUInteger splitDimension; // ivar: _splitDimension
@property (nonatomic) NSUInteger splitOffset; // ivar: _splitOffset
@property (nonatomic) NSUInteger tensorID; // ivar: _tensorID


+(BOOL)canConvertValue:(float)arg0 toDataType:(int)arg1 ;
+(id)newDataForTensorDescriptor:(id)arg0 fillWithData:(id)arg1 ;
+(id)newRandomDataForWeightTensorDescriptor:(id)arg0 randomInitializerType:(int)arg1 ;
+(id)tensorWithDescriptor:(id)arg0 ;
+(id)tensorWithDescriptor:(id)arg0 data:(id)arg1 ;
+(id)tensorWithDescriptor:(id)arg0 fillWithData:(id)arg1 ;
+(id)tensorWithDescriptor:(id)arg0 randomInitializerType:(int)arg1 ;
+(id)tensorWithSequenceLength:(NSUInteger)arg0 featureChannelCount:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 ;
+(id)tensorWithSequenceLength:(NSUInteger)arg0 featureChannelCount:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 data:(id)arg3 ;
+(id)tensorWithSequenceLength:(NSUInteger)arg0 featureChannelCount:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 randomInitializerType:(int)arg3 ;
+(id)tensorWithSequenceLengths:(id)arg0 sortedSequences:(BOOL)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 data:(id)arg4 ;
+(id)tensorWithSequenceLengths:(id)arg0 sortedSequences:(BOOL)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 randomInitializerType:(int)arg4 ;
+(id)tensorWithShape:(id)arg0 ;
+(id)tensorWithShape:(id)arg0 data:(id)arg1 dataType:(int)arg2 ;
+(id)tensorWithShape:(id)arg0 dataType:(int)arg1 ;
+(id)tensorWithShape:(id)arg0 fillWithData:(id)arg1 dataType:(int)arg2 ;
+(id)tensorWithShape:(id)arg0 randomInitializerType:(int)arg1 ;
+(id)tensorWithShape:(id)arg0 randomInitializerType:(int)arg1 dataType:(int)arg2 ;
+(id)tensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 ;
+(id)tensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 data:(id)arg4 ;
+(id)tensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 data:(id)arg4 dataType:(int)arg5 ;
+(id)tensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 fillWithData:(float)arg4 dataType:(int)arg5 ;
+(id)tensorWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 featureChannelCount:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 randomInitializerType:(int)arg4 ;
+(void)initialize;
-(BOOL)bindAndWriteData:(id)arg0 toDevice:(id)arg1 ;
-(BOOL)bindOptimizerData:(id)arg0 deviceData:(id)arg1 ;
-(BOOL)copyDataFromDeviceMemoryToBytes:(*void)arg0 length:(NSUInteger)arg1 synchronizeWithDevice:(BOOL)arg2 ;
-(BOOL)dataContainsScalarWhere:(id)arg0 ;
-(BOOL)doesShapeMatchWithTensor:(id)arg0 ;
-(BOOL)isTensorDataTypeInListOfDataTypes:(id)arg0 ;
-(BOOL)synchronizeData;
-(BOOL)synchronizeOptimizerData;
-(NSUInteger)calculateBatchSizeToUse;
-(NSUInteger)calculateBatchSizeToUse:(NSUInteger)arg0 ;
-(NSUInteger)tensorBatchSize;
-(id)copyAndReplaceData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTensorDescriptor:(id)arg0 tensorData:(id)arg1 parentLayers:(id)arg2 childLayers:(id)arg3 device:(id)arg4 deviceMemory:(id)arg5 ;
-(id)tensorByDequantizingToType:(int)arg0 scale:(float)arg1 bias:(NSInteger)arg2 ;
-(id)tensorByDequantizingToType:(int)arg0 scale:(id)arg1 bias:(id)arg2 axis:(NSInteger)arg3 ;
-(id)tensorByQuantizingToType:(int)arg0 scale:(float)arg1 bias:(NSInteger)arg2 ;
-(id)tensorByQuantizingToType:(int)arg0 scale:(id)arg1 bias:(id)arg2 axis:(NSInteger)arg3 ;
-(void)allocateDeviceMemory:(id)arg0 ;
-(void)deallocateDeviceMemory:(id)arg0 ;
-(void)dispatchWriteTensorDataToAllDevices:(id)arg0 ;
-(void)dispatchWriteTensorDataToAllDevices:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)writeTensorDataToAllDevices:(id)arg0 ;
-(void)writeTensorDataToAllDevices:(id)arg0 batchSize:(NSUInteger)arg1 ;


@end


#endif