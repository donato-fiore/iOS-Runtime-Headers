// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBUFFEREDQUEUE_H
#define MFBUFFEREDQUEUE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFBufferedQueue : NSObject {
    CGFloat _timeOfLastFlush;
    NSMutableArray *_queue;
}


@property (nonatomic) CGFloat maximumLatency; // ivar: _maximumLatency
@property (nonatomic) unsigned int maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic) unsigned int size; // ivar: _currentSize


-(BOOL)_flush;
-(BOOL)addItem:(id)arg0 ;
-(BOOL)flush;
-(BOOL)flushIfNecessary;
-(BOOL)handleItems:(id)arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)sizeForItem:(id)arg0 ;
-(id)init;
-(id)initWithMaximumSize:(unsigned int)arg0 latency:(CGFloat)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;


@end


#endif