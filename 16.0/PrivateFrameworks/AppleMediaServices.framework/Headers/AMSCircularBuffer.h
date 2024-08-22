// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCIRCULARBUFFER_H
#define AMSCIRCULARBUFFER_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSCircularBuffer : NSObject {
    NSUInteger _maxSize;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (retain, nonatomic) NSMutableArray *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (nonatomic) NSUInteger maxSize;


+(id)_rearrangeObjects:(id)arg0 forCurrentIndex:(NSUInteger)arg1 ;
-(id)_flush;
-(id)description;
-(id)flush;
-(id)init;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;


@end


#endif