// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHTENSORDATA_H
#define MPSGRAPHTENSORDATA_H

@class MPSNDArray, NSArray, NSData, NSString;

#import <Foundation/Foundation.h>

#import "MPSGraphDevice.h"

@interface MPSGraphTensorData : NSObject {
    NSUInteger _rowBytes;
    NSUInteger _numElements;
    MPSNDArray *_mpsndarray;
    NSArray *_mpsimagebatch;
    NSData *_data;
    NSInteger _layout;
}


@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, nonatomic) MPSGraphDevice *device; // ivar: _device
@property (readonly, nonatomic) *__IOSurface iosurface; // ivar: _iosurface
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSArray *shape; // ivar: _shape


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
-(id)initWithMPSVector:(id)arg0 ;
-(id)initWithMPSVector:(id)arg0 rank:(NSUInteger)arg1 ;
-(id)initWithMTLBuffer:(id)arg0 shape:(id)arg1 dataType:(unsigned int)arg2 ;
-(id)mpsndarray;
-(void)commonInitialize;
-(void)print;
-(void)printIOSurface;
-(void)printNDArray;


@end


#endif