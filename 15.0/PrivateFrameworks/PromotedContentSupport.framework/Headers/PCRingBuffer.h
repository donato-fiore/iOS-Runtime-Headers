// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCRINGBUFFER_H
#define PCRINGBUFFER_H

@class APUnfairLock, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PCRingBuffer : NSObject

@property (readonly, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *ringBuffer; // ivar: _ringBuffer


+(id)sharedInstance;
-(id)init;
-(void)cappedRingBufferTo:(NSUInteger)arg0 ;


@end


#endif