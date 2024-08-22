// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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




-(*void)elementAtIndex:(int)arg0 ;
-(*void)firstElement;
-(*void)lastElement;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithLength:(int)arg0 dataTypeSize:(NSUInteger)arg1 ;
-(int)count;
-(int)firstElementIndex;
-(int)lastElementIndex;
-(int)lastElementIndexPlusOne;
-(void)appendElement:(*void)arg0 ;
-(void)dealloc;
-(void)incrementRingIndex:(*int)arg0 ;
-(void)incrementRingIndex:(*int)arg0 withCount:(int)arg1 ;
-(void)removeFirstElements:(int)arg0 ;


@end


#endif