// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFBARRAY_H
#define AFBARRAY_H

@class NSArray;


#import "AFBBufRef.h"

@interface AFBArray : NSArray {
    AFBBufRef *_bufRef;
    NSUInteger _count;
    id *_objectAtIndex;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBufRef:(id)arg0 count:(NSUInteger)arg1 objectAtIndex:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif