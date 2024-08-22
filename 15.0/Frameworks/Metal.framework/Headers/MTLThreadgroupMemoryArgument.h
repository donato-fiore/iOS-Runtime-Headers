// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTHREADGROUPMEMORYARGUMENT_H
#define MTLTHREADGROUPMEMORYARGUMENT_H



#import "MTLArgumentInternal.h"

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {
    unsigned short _alignment;
    unsigned int _dataSize;
    NSUInteger _dataType;
}




-(NSUInteger)threadgroupMemoryAlignment;
-(NSUInteger)threadgroupMemoryDataSize;
-(NSUInteger)threadgroupMemoryDataType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 locationIndex:(NSUInteger)arg4 arraySize:(NSUInteger)arg5 dataType:(NSUInteger)arg6 dataSize:(NSUInteger)arg7 alignment:(NSUInteger)arg8 ;
-(id)structType;
-(id)threadgroupMemoryStructType;
-(void)setStructType:(id)arg0 ;
-(void)setStructType:(id)arg0 doRetain:(BOOL)arg1 ;


@end


#endif