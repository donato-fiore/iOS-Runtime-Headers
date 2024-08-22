// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLARGUMENTINTERNAL_H
#define MTLARGUMENTINTERNAL_H

@class NSString;


#import "MTLArgument.h"
#import "MTLType.h"
#import "MTLStructType.h"

@interface MTLArgumentInternal : MTLArgument {
    NSString *_name;
    NSUInteger _type;
    NSUInteger _access;
    NSUInteger _index;
    BOOL _active;
    NSUInteger _arrayLength;
    MTLType *_typeInfo;
}


@property (readonly) NSUInteger bufferALUType;
@property (readonly) NSUInteger bufferPixelFormat;
@property (readonly) MTLStructType *structType;


-(BOOL)isActive;
-(NSUInteger)access;
-(NSUInteger)arrayLength;
-(NSUInteger)bufferAlignment;
-(NSUInteger)bufferDataSize;
-(NSUInteger)bufferDataType;
-(NSUInteger)index;
-(NSUInteger)indirectConstantAlignment;
-(NSUInteger)indirectConstantDataSize;
-(NSUInteger)indirectConstantDataType;
-(NSUInteger)textureDataType;
-(NSUInteger)textureType;
-(NSUInteger)threadgroupMemoryAlignment;
-(NSUInteger)threadgroupMemoryDataSize;
-(NSUInteger)type;
-(id)bufferIndirectArgumentType;
-(id)bufferPointerType;
-(id)bufferStructType;
-(id)dataTypeDescription;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 index:(NSUInteger)arg3 active:(BOOL)arg4 arrayLength:(NSUInteger)arg5 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 index:(NSUInteger)arg3 active:(BOOL)arg4 arrayLength:(NSUInteger)arg5 typeDescription:(id)arg6 ;
-(id)name;
-(void)dealloc;


@end


#endif