// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHTENSORDATA_H
#define MPSGRAPHTENSORDATA_H

@class MPSNDArray, NSArray, NSData, NSString;

#import <Foundation/Foundation.h>

#import "MPSGraphDevice.h"

@interface MPSGraphTensorData : NSObject {
    NSUInteger _rowBytes;
    NSUInteger _numElements;
    ? _shapeValues;
    NSUInteger _rank;
    MPSNDArray *_mpsndarray;
    NSArray *_mpsimagebatch;
    *__IOSurface _iosurface;
    NSData *_data;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) MPSGraphDevice *device; // ivar: _device
@property (readonly, nonatomic) *__IOSurface iosurface;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSInteger tensorDataType; // ivar: _tensorDataType


-(id)checkTensorData:(*float)arg0 nativeUlps:(float)arg1 absoluteErr:(float)arg2 ;
-(id)checkTensorData:(*float)arg0 nativeUlps:(float)arg1 absoluteErr:(float)arg2 PSNR:(float)arg3 ;
-(id)checkWithReferenceTensorData:(id)arg0 nativeUlps:(float)arg1 absoluteError:(float)arg2 PSNR:(float)arg3 ;
-(id)debugDescription;
-(id)initEmptyWithShape:(id)arg0 dataType:(unsigned int)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg0 IOSurface:(struct __IOSurface *)arg1 rowBytesAlignment:(NSUInteger)arg2 shape:(id)arg3 dataType:(unsigned int)arg4 ;
-(id)initWithDevice:(id)arg0 data:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 ;
-(id)initWithDevice:(id)arg0 rowBytesAlignment:(NSUInteger)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 ;
-(id)initWithMPSImageBatch:(id)arg0 ;
-(id)initWithMPSMatrix:(id)arg0 ;
-(id)initWithMPSMatrix:(id)arg0 rank:(NSUInteger)arg1 ;
-(id)initWithMPSNDArray:(id)arg0 ;
-(id)initWithMPSNDArray:(id)arg0 device:(id)arg1 ;
-(id)initWithMPSVector:(id)arg0 ;
-(id)initWithMPSVector:(id)arg0 rank:(NSUInteger)arg1 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 rowBytes:(NSUInteger)arg3 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 strideBytes:(id)arg2 dataType:(unsigned int)arg3 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 strides:(id)arg2 dataType:(unsigned int)arg3 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 strides:(id)arg2 interleaves:(id)arg3 dataType:(unsigned int)arg4 ;
-(id)mpsndarray;
-(id)mpsndarrayWithCommandBuffer:(id)arg0 ;
-(void)commonInitialize;
-(void)copyDataFromNDArrayToImageBatchWithCommandBuffer:(id)arg0 ;
-(void)dealloc;
-(void)print;
-(void)printIOSurface;
-(void)printNDArray;


@end


#endif