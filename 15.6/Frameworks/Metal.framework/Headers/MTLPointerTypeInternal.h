// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLPOINTERTYPEINTERNAL_H
#define MTLPOINTERTYPEINTERNAL_H



#import "MTLPointerType.h"
#import "MTLType.h"

@interface MTLPointerTypeInternal : MTLPointerType {
    NSUInteger _dataType;
    NSUInteger _elementType;
    MTLType *_elementTypeInfo;
    NSUInteger _access;
    NSUInteger _alignment;
    NSUInteger _dataSize;
    BOOL _elementIsArgumentBuffer;
    BOOL _isConstantBuffer;
    BOOL _doRetain;
}




-(BOOL)elementIsArgumentBuffer;
-(BOOL)elementIsIndirectArgumentBuffer;
-(BOOL)isConstantBuffer;
-(NSUInteger)access;
-(NSUInteger)alignment;
-(NSUInteger)dataSize;
-(NSUInteger)dataType;
-(NSUInteger)elementType;
-(id)elementArrayType;
-(id)elementStructType;
-(id)elementTypeDescription;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithElementType:(NSUInteger)arg0 elementTypeDescription:(id)arg1 access:(NSUInteger)arg2 alignment:(NSUInteger)arg3 dataSize:(NSUInteger)arg4 elementIsIndirectArgumentBuffer:(BOOL)arg5 isConstantBuffer:(BOOL)arg6 ;
-(id)initWithElementType:(NSUInteger)arg0 elementTypeDescription:(id)arg1 access:(NSUInteger)arg2 alignment:(NSUInteger)arg3 dataSize:(NSUInteger)arg4 elementIsIndirectArgumentBuffer:(BOOL)arg5 isConstantBuffer:(BOOL)arg6 doRetain:(BOOL)arg7 ;
-(id)structType;
-(void)dealloc;
-(void)setAlignment:(NSUInteger)arg0 dataSize:(NSUInteger)arg1 ;


@end


#endif