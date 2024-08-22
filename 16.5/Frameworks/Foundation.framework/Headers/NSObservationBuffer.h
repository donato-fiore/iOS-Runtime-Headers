// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSOBSERVATIONBUFFER_H
#define NSOBSERVATIONBUFFER_H



#import "NSObservationTransformer.h"

@interface NSObservationBuffer : NSObservationTransformer

@property BOOL automaticallyEmitsObjects;
@property (copy) id *bufferFullHandler;
@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)bufferWithMaximumObjectCount:(NSUInteger)arg0 fullPolicy:(NSInteger)arg1 outputQueue:(id)arg2 ;
+(id)bufferWithOutputQueue:(id)arg0 ;
-(id)initWithMaximumObjectCount:(NSUInteger)arg0 fullPolicy:(NSInteger)arg1 outputQueue:(id)arg2 ;
-(void)emitAllObjects;
-(void)emitObject;


@end


#endif