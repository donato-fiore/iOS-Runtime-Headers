// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLBUILTINMESHARGUMENT_H
#define MTLBUILTINMESHARGUMENT_H



#import "MTLBindingInternal.h"
#import "MTLStructTypeInternal.h"

@interface MTLBuiltInMeshArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
    unsigned short _meshVertexCount;
    unsigned short _meshPrimitiveCount;
    unsigned short _meshTopologyType;
    MTLStructTypeInternal *_meshVertexStruct;
    MTLStructTypeInternal *_meshPrimitiveStruct;
}




-(NSUInteger)builtInDataType;
-(NSUInteger)builtInType;
-(NSUInteger)meshPrimitiveCount;
-(NSUInteger)meshTopologyType;
-(NSUInteger)meshVertexCount;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 active:(BOOL)arg3 index:(NSUInteger)arg4 dataType:(NSUInteger)arg5 builtInType:(NSUInteger)arg6 meshVertexStructType:(id)arg7 meshPrimitiveStructType:(id)arg8 meshVertexCount:(unsigned short)arg9 meshPrimitiveCount:(unsigned short)arg10 meshTopologyType:(NSUInteger)arg11 ;
-(id)meshPrimitiveStruct;
-(id)meshVertexStruct;
-(void)dealloc;


@end


#endif