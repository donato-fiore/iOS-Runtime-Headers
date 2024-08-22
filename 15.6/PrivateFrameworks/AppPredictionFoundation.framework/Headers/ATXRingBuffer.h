// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXRINGBUFFER_H
#define ATXRINGBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXRingBuffer : NSObject {
    NSUInteger _maxSize;
    NSMutableArray *_bufferArray;
    NSUInteger _readStartIndex;
}




-(id)init;
-(id)initWithMaxSize:(NSUInteger)arg0 ;
-(id)toArray;
-(void)addObject:(id)arg0 ;


@end


#endif