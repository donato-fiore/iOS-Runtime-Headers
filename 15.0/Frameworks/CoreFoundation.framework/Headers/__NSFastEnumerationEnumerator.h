// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSFASTENUMERATIONENUMERATOR_H
#define __NSFASTENUMERATIONENUMERATOR_H

@protocol NSFastEnumeration;


#import "NSEnumerator.h"

@interface __NSFastEnumerationEnumerator : NSEnumerator {
    id<NSFastEnumeration> *_obj;
    id *_origObj;
    NSUInteger _index;
    NSUInteger _count;
    NSUInteger _mut;
    id _objects;
    ? _state;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif