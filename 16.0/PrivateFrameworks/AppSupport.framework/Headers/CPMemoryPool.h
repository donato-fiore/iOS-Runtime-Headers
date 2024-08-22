// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPMEMORYPOOL_H
#define CPMEMORYPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CPMemoryPool : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_files;
    char * _label;
}


@property (readonly, nonatomic) NSUInteger slotLength; // ivar: _slotLength


-(id)initWithLabel:(char *)arg0 slotLength:(NSUInteger)arg1 ;
-(id)nextSlotWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif