// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARRAYSLICER_H
#define ARRAYSLICER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ArraySlicer : NSObject {
    NSUInteger _sliceSize;
    NSUInteger _count;
    NSUInteger _offset;
    NSArray *_array;
}


@property (readonly, nonatomic) NSUInteger remaining;


-(id)consumed;
-(id)initWithArray:(id)arg0 sliceSize:(NSUInteger)arg1 ;
-(id)nextSlice;
-(id)unconsumed;


@end


#endif