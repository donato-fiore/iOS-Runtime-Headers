// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKMLNETWORKBUFFERV2_H
#define ABPKMLNETWORKBUFFERV2_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABPKMLNetworkBufferV2 : NSObject {
    *e5rt_io_port _port;
    *e5rt_buffer_object _memory;
    *e5rt_surface_object _surfaceObject;
    *e5rt_tensor_desc _tensorDesc;
    *e5rt_surface_desc _surfaceDesc;
    int _dataType;
    NSUInteger _bytesPerElement;
    BOOL _useSurface;
}


@property (readonly, nonatomic) NSUInteger batchNumber; // ivar: _batchNumber
@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (readonly, nonatomic) NSUInteger channels; // ivar: _channels
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) NSUInteger sequenceLength; // ivar: _sequenceLength
@property (readonly, nonatomic) NSUInteger strideBatchNumber; // ivar: _strideBatchNumber
@property (readonly, nonatomic) NSUInteger strideChannels; // ivar: _strideChannels
@property (readonly, nonatomic) NSUInteger strideHeight; // ivar: _strideHeight
@property (readonly, nonatomic) NSUInteger strideSequenceLength; // ivar: _strideSequenceLength
@property (readonly, nonatomic) NSUInteger strideWidth; // ivar: _strideWidth
@property (readonly, nonatomic) int surfaceFormat; // ivar: _surfaceFormat
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


-(BOOL)_readSurfaceDescriptor;
-(BOOL)_readTensorDescriptor;
-(id)initWithName:(id)arg0 function:(struct e5rt_program_function *)arg1 bindMode:(NSInteger)arg2 useSurface:(BOOL)arg3 ;
-(void)dealloc;
-(void)setInput:(id)arg0 FromIOSurface:(struct __IOSurface *)arg1 ;


@end


#endif