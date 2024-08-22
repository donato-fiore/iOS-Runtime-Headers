// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLINFERREDINPUT_H
#define MTLINFERREDINPUT_H


#import <Foundation/Foundation.h>


@interface MTLInferredInput : NSObject

@property (readonly) NSUInteger aluType; // ivar: _aluType
@property (readonly) BOOL baseInstanceUnused; // ivar: _baseInstanceUnused
@property (readonly) NSUInteger bufferIndex; // ivar: _bufferIndex
@property (readonly) NSUInteger dataType; // ivar: _dataType
@property (readonly) NSUInteger offset; // ivar: _offset
@property (readonly) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly) NSUInteger stepFunction; // ivar: _stepFunction
@property (readonly) NSUInteger stepRate; // ivar: _stepRate
@property (readonly) NSUInteger stride; // ivar: _stride


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDataType:(NSUInteger)arg0 pixelFormat:(NSUInteger)arg1 aluType:(NSUInteger)arg2 offset:(NSUInteger)arg3 bufferIndex:(NSUInteger)arg4 stride:(NSUInteger)arg5 stepFunction:(NSUInteger)arg6 stepRate:(NSUInteger)arg7 baseInstanceUnused:(BOOL)arg8 ;


@end


#endif