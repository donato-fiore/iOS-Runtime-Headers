// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMOTIONSAMPLERINGBUFFER_H
#define BWMOTIONSAMPLERINGBUFFER_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "BWRingBuffer.h"

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration>

 {
    BWRingBuffer *_ringBuffer;
    CGFloat _maxDuration;
    int _maxCount;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif