// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLBINDINGINTERNAL_H
#define MTLBINDINGINTERNAL_H

@class NSString;
@protocol MTLArgumentCompat, MTLBinding;


#import "MTLArgument.h"
#import "MTLType.h"
#import "MTLPointerType.h"
#import "MTLStructType.h"
#import "MTLStructTypeInternal.h"

@interface MTLBindingInternal : MTLArgument <MTLArgumentCompat, MTLBinding>

 {
    MTLType *_typeInfo;
}


@property (readonly) NSUInteger access; // ivar: _access
@property (readonly, getter=isActive) BOOL active;
@property (readonly) BOOL aliasImplicitImageBlock; // ivar: _aliasImplicitImageBlock
@property (readonly) NSUInteger aliasImplicitImageBlockRenderTarget; // ivar: _aliasImplicitImageBlockRenderTarget
@property (getter=isArgument, setter=setIsArgument:) BOOL argument; // ivar: _argument
@property (readonly) NSUInteger arrayLength; // ivar: _arrayLength
@property (readonly) NSUInteger bufferALUType;
@property (readonly) NSUInteger bufferAlignment;
@property (readonly) NSUInteger bufferDataSize;
@property (readonly) NSUInteger bufferDataType;
@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) NSUInteger bufferPixelFormat;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) NSUInteger builtInDataType; // ivar: _builtInDataType
@property (readonly) NSUInteger builtInType; // ivar: _builtInType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageBlockDataSize; // ivar: _imageBlockDataSize
@property (readonly) NSUInteger imageBlockKind; // ivar: _imageBlockKind
@property (readonly) MTLStructTypeInternal *imageBlockMasterStructMembers; // ivar: _imageBlockMasterStructMembers
@property (readonly) NSUInteger index; // ivar: _index
@property (readonly) NSUInteger indirectConstantAlignment;
@property (readonly) NSUInteger indirectConstantDataSize;
@property (readonly) NSUInteger indirectConstantDataType;
@property (readonly) BOOL isDepthTexture;
@property BOOL isUsed; // ivar: _isUsed
@property (readonly) NSUInteger meshPrimitiveCount;
@property (readonly) MTLStructTypeInternal *meshPrimitiveStruct;
@property (readonly) NSUInteger meshTopologyType;
@property (readonly) NSUInteger meshVertexCount;
@property (readonly) MTLStructTypeInternal *meshVertexStruct;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUInteger objectPayloadAlignment;
@property (readonly) NSUInteger objectPayloadDataSize;
@property (readonly) MTLStructType *structType;
@property (readonly) Class superclass;
@property (readonly) NSUInteger textureDataType;
@property (readonly) NSUInteger textureType;
@property (readonly) NSUInteger threadgroupMemoryAlignment;
@property (readonly) NSUInteger threadgroupMemoryDataSize;
@property (readonly) NSUInteger threadgroupMemoryDataType; // ivar: _threadgroupMemoryDataType
@property (readonly) MTLStructType *threadgroupMemoryStructType; // ivar: _threadgroupMemoryStructType
@property (readonly) NSInteger type; // ivar: _type
@property (readonly, getter=isUsed) BOOL used; // ivar: _used
@property (readonly, getter=isVertexDescriptorBuffer) BOOL vertexDescriptorBuffer; // ivar: _vertexDescriptorBuffer


-(id)dataTypeDescription;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 index:(NSUInteger)arg3 active:(BOOL)arg4 arrayLength:(NSUInteger)arg5 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 index:(NSUInteger)arg3 active:(BOOL)arg4 arrayLength:(NSUInteger)arg5 typeDescription:(id)arg6 ;
-(void)dealloc;


@end


#endif