// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLARGUMENT_H
#define MTLARGUMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTLArgument.h"
#import "MTLPointerType.h"
#import "MTLStructType.h"

@interface MTLArgument : NSObject

@property (readonly) NSUInteger access;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSUInteger arrayLength;
@property (readonly) NSUInteger bufferAlignment;
@property (readonly) NSUInteger bufferDataSize;
@property (readonly) NSUInteger bufferDataType;
@property (readonly) MTLArgument *bufferIndirectArgumentType; // ivar: _bufferIndirectArgumentType
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) NSUInteger index;
@property (readonly) NSUInteger indirectConstantAlignment; // ivar: _indirectConstantAlignment
@property (readonly) NSUInteger indirectConstantDataSize; // ivar: _indirectConstantDataSize
@property (readonly) NSUInteger indirectConstantDataType; // ivar: _indirectConstantDataType
@property (readonly) BOOL isDepthTexture;
@property (readonly) NSString *name;
@property (readonly) NSUInteger textureDataType;
@property (readonly) NSUInteger textureType;
@property (readonly) NSUInteger threadgroupMemoryAlignment;
@property (readonly) NSUInteger threadgroupMemoryDataSize;
@property (readonly) NSUInteger type;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif