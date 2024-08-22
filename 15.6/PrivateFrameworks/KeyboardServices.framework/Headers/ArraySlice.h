// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARRAYSLICE_H
#define ARRAYSLICE_H

@class NSArray;



@interface ArraySlice : NSArray {
    NSArray *_array;
    NSUInteger _offset;
    NSUInteger _count;
}




-(NSUInteger)count;
-(id)initWithArray:(id)arg0 offset:(NSUInteger)arg1 count:(NSUInteger)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif