// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIE5RTTENSORPORTDESCRIPTOR_H
#define SIE5RTTENSORPORTDESCRIPTOR_H

@class NSString;
@protocol SIE5RTPortDescriptor;

#import <Foundation/Foundation.h>


@interface SIE5RTTensorPortDescriptor : NSObject <SIE5RTPortDescriptor>

 {
    *e5rt_tensor_desc _desc;
    *e5rt_tensor_desc _client_desc;
    *e5rt_buffer_object _buffer;
    *e5rt_io_port _port;
    BOOL _isFP32;
    BOOL _isFP16_ANE;
    BOOL _isS8_ANE;
    BOOL _isU8_ANE;
    BOOL _support_zero_copy;
    *__CVBuffer _memory_pixel_buffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*NSInteger)getStrides;
-(*NSUInteger)getShape;
-(*void)getDataPtr;
-(BOOL)isFP16_ANE;
-(BOOL)isPacked;
-(BOOL)isPackedFP32;
-(BOOL)isS8_ANE;
-(BOOL)isU8_ANE;
-(NSUInteger)getBatchnum;
-(NSUInteger)getChannels;
-(NSUInteger)getComponentSize;
-(NSUInteger)getHeight;
-(NSUInteger)getNumberOfElements;
-(NSUInteger)getRank;
-(NSUInteger)getRowElements;
-(NSUInteger)getWidth;
-(id)initWithE5RTPort:(struct e5rt_io_port *)arg0 portType:(NSInteger)arg1 ;
-(int)getComponentType;
-(struct e5rt_tensor_desc *)createPackedFP32TensorDescriptor;
-(unsigned char)getNumComponents;
-(void)bindInputPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)bindInputRawPointer:(*void)arg0 ;
-(void)dealloc;


@end


#endif