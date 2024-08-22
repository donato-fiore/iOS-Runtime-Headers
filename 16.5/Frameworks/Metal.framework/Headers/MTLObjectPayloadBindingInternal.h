// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLOBJECTPAYLOADBINDINGINTERNAL_H
#define MTLOBJECTPAYLOADBINDINGINTERNAL_H

@class NSString;
@protocol MTLObjectPayloadBinding;


#import "MTLBindingInternal.h"

@interface MTLObjectPayloadBindingInternal : MTLBindingInternal <MTLObjectPayloadBinding>

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
@property (readonly) NSUInteger objectPayloadAlignment;
@property (readonly) NSUInteger objectPayloadDataSize;
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly, getter=isUsed) BOOL used;


-(NSUInteger)objectPayloadDataType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 arraySize:(NSUInteger)arg4 dataType:(NSUInteger)arg5 dataSize:(NSUInteger)arg6 alignment:(NSUInteger)arg7 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 locationIndex:(NSUInteger)arg4 arraySize:(NSUInteger)arg5 dataType:(NSUInteger)arg6 dataSize:(NSUInteger)arg7 alignment:(NSUInteger)arg8 ;
-(id)objectPayloadStructType;
-(id)structType;
-(void)setStructType:(id)arg0 ;
-(void)setStructType:(id)arg0 doRetain:(BOOL)arg1 ;


@end


#endif