// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFRINGBUFFER_H
#define HMFRINGBUFFER_H

@class NSMutableArray;


#import "HMFObject.h"

@interface HMFRingBuffer : HMFObject

@property (readonly) NSMutableArray *buffer; // ivar: _buffer
@property (readonly) NSUInteger capacity; // ivar: _capacity


-(BOOL)containsObject:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;


@end


#endif