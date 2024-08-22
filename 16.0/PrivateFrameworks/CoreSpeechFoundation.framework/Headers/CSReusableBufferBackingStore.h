// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREUSABLEBUFFERBACKINGSTORE_H
#define CSREUSABLEBUFFERBACKINGSTORE_H


#import <Foundation/Foundation.h>


@interface CSReusableBufferBackingStore : NSObject {
    *void _buffer;
    NSUInteger _bufferSize;
    id *_deallocator;
}


@property (readonly, nonatomic) *void bytes;
@property (nonatomic) NSUInteger recycleHostTime; // ivar: _recycleHostTime


-(BOOL)configureWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBuffer:(*void)arg0 bufferSize:(NSUInteger)arg1 deallocator:(id)arg2 ;
-(void)dealloc;


@end


#endif