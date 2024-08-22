// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSRCOLORCONFIGMEMORYPOOL_H
#define MSRCOLORCONFIGMEMORYPOOL_H

@class NSMutableArray, NSMutableData;

#import <Foundation/Foundation.h>


@interface MSRColorConfigMemoryPool : NSObject {
    NSMutableArray *_array;
    NSMutableData *_data;
    unsigned int _size;
    unsigned int _capacity;
    unsigned int _allocated;
    unsigned int _released;
}




-(id)generateColorConfig:(id)arg0 msrCU:(*void)arg1 ;
-(id)getAlloc;
-(id)initWithCapacity:(unsigned int)arg0 Size:(unsigned int)arg1 ;
-(void)dealloc;
-(void)dumpPoolState;


@end


#endif