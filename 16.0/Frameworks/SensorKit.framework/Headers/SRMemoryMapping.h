// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRMEMORYMAPPING_H
#define SRMEMORYMAPPING_H


#import <Foundation/Foundation.h>


@interface SRMemoryMapping : NSObject {
    int _protection;
    int _advice;
    *void _start;
    *void _currentPosition;
    NSInteger _offset;
    *void _mappedAddress;
    NSUInteger _size;
    NSUInteger _pageAlignedSize;
}




+(void)initialize;
-(void)dealloc;


@end


#endif