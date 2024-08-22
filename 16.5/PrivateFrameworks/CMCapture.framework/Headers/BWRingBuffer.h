// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWRINGBUFFER_H
#define BWRINGBUFFER_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface BWRingBuffer : NSObject <NSFastEnumeration>

 {
    *void _ringBuffer;
    int _outputIndex;
    int _inputIndex;
    int _length;
    NSUInteger _typeSize;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif