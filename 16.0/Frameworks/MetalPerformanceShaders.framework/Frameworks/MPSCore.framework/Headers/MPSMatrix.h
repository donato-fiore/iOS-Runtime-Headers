// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIX_H
#define MPSMATRIX_H

@protocol MTLBuffer, MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSMatrix : NSObject {
    *void _device;
    MPSAutoBuffer _buffer;
}


@property (readonly, nonatomic) NSUInteger columns; // ivar: _columns
@property (readonly, nonatomic) NSObject<MTLBuffer> *data;
@property (readonly, nonatomic) unsigned int dataType; // ivar: _dataType
@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger matrices; // ivar: _matrices
@property (readonly, nonatomic) NSUInteger matrixBytes; // ivar: _matrixBytes
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly, nonatomic) NSUInteger rowBytes; // ivar: _rowBytes
@property (readonly, nonatomic) NSUInteger rows; // ivar: _rows


-(BOOL)canAliasWithNDArrayDescriptor:(id)arg0 ;
-(BOOL)doesAliasWithNDArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)resourceSize;
-(id)debugDescription;
-(id)init;
-(id)initPrivateWithDescriptor:(id)arg0 device:(*void)arg1 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithBuffer:(id)arg0 offset:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(id)ndArrayWithCommandBuffer:(id)arg0 descriptor:(id)arg1 aliasing:(NSUInteger)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif