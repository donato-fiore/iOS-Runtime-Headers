// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLINDIRECTCONSTANTARGUMENT_H
#define MTLINDIRECTCONSTANTARGUMENT_H



#import "MTLBindingInternal.h"

@interface MTLIndirectConstantArgument : MTLBindingInternal {
    unsigned short _dataType;
    unsigned short _alignment;
    unsigned short _dataSize;
    NSUInteger _pixelFormat;
    NSUInteger _aluType;
}




-(NSUInteger)bufferALUType;
-(NSUInteger)bufferPixelFormat;
-(NSUInteger)indirectConstantAlignment;
-(NSUInteger)indirectConstantDataSize;
-(NSUInteger)indirectConstantDataType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 isActive:(BOOL)arg3 locationIndex:(NSUInteger)arg4 dataType:(NSUInteger)arg5 pixelFormat:(NSUInteger)arg6 aluType:(NSUInteger)arg7 dataSize:(NSUInteger)arg8 alignment:(NSUInteger)arg9 ;
-(void)dealloc;


@end


#endif