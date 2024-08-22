// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLBUFFERBINDINGINTERNAL_H
#define MTLBUFFERBINDINGINTERNAL_H

@class NSString;
@protocol MTLBufferBinding;


#import "MTLBindingInternal.h"
#import "MTLPointerType.h"
#import "MTLStructType.h"

@interface MTLBufferBindingInternal : MTLBindingInternal <MTLBufferBinding>

 {
    BOOL _dataType;
    BOOL _vertexDescriptorBuffer;
    unsigned short _alignment;
    unsigned int _dataSize;
    NSUInteger _pixelFormat;
    NSUInteger _aluType;
}


@property (readonly) NSUInteger access;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly) NSUInteger bufferAlignment;
@property (readonly) NSUInteger bufferDataSize;
@property (readonly) NSUInteger bufferDataType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly, getter=isUsed) BOOL used;


-(BOOL)isVertexDescriptorBuffer;
-(NSUInteger)bufferALUType;
-(NSUInteger)bufferPixelFormat;
-(id)bufferIndirectArgumentType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 locationIndex:(NSUInteger)arg4 arraySize:(NSUInteger)arg5 dataType:(NSUInteger)arg6 pixelFormat:(NSUInteger)arg7 aluType:(NSUInteger)arg8 isConstantBuffer:(BOOL)arg9 dataSize:(NSUInteger)arg10 alignment:(NSUInteger)arg11 ;
-(id)structType;
-(void)dealloc;
-(void)setAlignment:(NSUInteger)arg0 ;
-(void)setDataSize:(NSUInteger)arg0 ;
-(void)setStructType:(id)arg0 ;
-(void)setStructType:(id)arg0 doRetain:(BOOL)arg1 ;
-(void)setVertexDescriptorBuffer:(BOOL)arg0 ;


@end


#endif