// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSVECTOR_H
#define MPSVECTOR_H

@protocol MTLBuffer, MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSVector : NSObject {
    *void _device;
    MPSAutoBuffer _buffer;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *data;
@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger vectorBytes; // ivar: _vectorBytes
@property (readonly, nonatomic) NSUInteger vectors; // ivar: _vectors


-(NSUInteger)resourceSize;
-(id)init;
-(id)initPrivateWithDescriptor:(id)arg0 device:(*void)arg1 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithBuffer:(id)arg0 length:(NSUInteger)arg1 dataType:(unsigned int)arg2 ;
-(id)initWithBuffer:(id)arg0 offset:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif