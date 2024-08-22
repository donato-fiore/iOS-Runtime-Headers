// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLARRAYTYPEINTERNAL_H
#define MTLARRAYTYPEINTERNAL_H



#import "MTLArrayType.h"
#import "MTLType.h"

@interface MTLArrayTypeInternal : MTLArrayType {
    NSUInteger _dataType;
    BOOL _arrayLength;
    BOOL _stride;
    id *_details;
    NSUInteger _elementType;
    MTLType *_elementTypeInfo;
}


@property (readonly) NSUInteger aluType; // ivar: _aluType
@property (nonatomic) NSUInteger argumentIndexStride; // ivar: _argumentIndexStride
@property (nonatomic) NSUInteger indirectArgumentIndexStride;
@property BOOL isIndirectArgumentBuffer; // ivar: _isIndirectArgumentBuffer
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat


-(BOOL)isArrayLayoutThreadSafeWith:(id)arg0 ;
-(NSUInteger)arrayLength;
-(NSUInteger)dataType;
-(NSUInteger)elementType;
-(NSUInteger)stride;
-(id)elementArrayType;
-(id)elementIndirectArgumentType;
-(id)elementPointerType;
-(id)elementStructType;
-(id)elementTextureReferenceType;
-(id)elementTypeDescription;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithArrayLength:(NSUInteger)arg0 elementType:(NSUInteger)arg1 stride:(NSUInteger)arg2 pixelFormat:(NSUInteger)arg3 aluType:(NSUInteger)arg4 details:(id)arg5 ;
-(void)dealloc;
-(void)setStride:(NSUInteger)arg0 ;


@end


#endif