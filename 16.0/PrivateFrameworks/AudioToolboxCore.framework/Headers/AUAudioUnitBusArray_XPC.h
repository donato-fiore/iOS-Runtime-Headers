// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUAUDIOUNITBUSARRAY_XPC_H
#define AUAUDIOUNITBUSARRAY_XPC_H



#import "AUAudioUnitBusArray.h"

@interface AUAudioUnitBusArray_XPC : AUAudioUnitBusArray {
    BOOL _countWritable;
}




-(BOOL)isCountChangeable;
-(BOOL)setBusCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithOwner:(id)arg0 scope:(unsigned int)arg1 busses:(id)arg2 countWritable:(BOOL)arg3 ;


@end


#endif