// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTHREADGROUPMEMORYBINDINGINTERNAL_H
#define MTLTHREADGROUPMEMORYBINDINGINTERNAL_H

@class NSString;
@protocol MTLThreadgroupBinding;


#import "MTLBindingInternal.h"

@interface MTLThreadgroupMemoryBindingInternal : MTLBindingInternal <MTLThreadgroupBinding>

 {
    unsigned short _alignment;
    unsigned int _dataSize;
    NSUInteger _dataType;
}


@property (readonly) NSUInteger access;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger index;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) NSUInteger threadgroupMemoryAlignment;
@property (readonly) NSUInteger threadgroupMemoryDataSize;
@property (readonly) NSInteger type;
@property (readonly, getter=isUsed) BOOL used;


-(NSUInteger)threadgroupMemoryDataType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 locationIndex:(NSUInteger)arg4 arraySize:(NSUInteger)arg5 dataType:(NSUInteger)arg6 dataSize:(NSUInteger)arg7 alignment:(NSUInteger)arg8 ;
-(id)structType;
-(id)threadgroupMemoryStructType;
-(void)setStructType:(id)arg0 ;
-(void)setStructType:(id)arg0 doRetain:(BOOL)arg1 ;


@end


#endif