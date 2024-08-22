// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXHARINGBUFFER_H
#define AXHARINGBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXHARingBuffer : NSObject {
    NSMutableArray *_bufferArray;
    NSInteger _size;
    NSInteger _head;
}


@property (readonly) NSUInteger count;


-(id)content;
-(id)initWithCount:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)reset;


@end


#endif