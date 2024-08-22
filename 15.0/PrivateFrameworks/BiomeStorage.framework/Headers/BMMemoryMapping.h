// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMMEMORYMAPPING_H
#define BMMEMORYMAPPING_H


#import <Foundation/Foundation.h>


@interface BMMemoryMapping : NSObject {
    int _protection;
    int _advice;
    *void _start;
    NSUInteger _currentOffset;
    NSUInteger _size;
    NSInteger _offset;
    *void _mappedAddress;
    NSUInteger _pageAlignedSize;
    NSUInteger _offsetSpace;
}




-(BOOL)canAtomicallyAccessOffset:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif