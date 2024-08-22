// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBUFFERARGUMENT_H
#define MTLBUFFERARGUMENT_H



#import "MTLArgumentInternal.h"

@interface MTLBufferArgument : MTLArgumentInternal {
    BOOL _dataType;
    BOOL _vertexDescriptorBuffer;
    unsigned short _alignment;
    unsigned int _dataSize;
    NSUInteger _pixelFormat;
    NSUInteger _aluType;
}




-(BOOL)isVertexDescriptorBuffer;
-(NSUInteger)bufferALUType;
-(NSUInteger)bufferAlignment;
-(NSUInteger)bufferDataSize;
-(NSUInteger)bufferDataType;
-(NSUInteger)bufferPixelFormat;
-(id)bufferIndirectArgumentType;
-(id)bufferPointerType;
-(id)bufferStructType;
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