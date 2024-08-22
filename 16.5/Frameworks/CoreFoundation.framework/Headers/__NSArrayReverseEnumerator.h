// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSARRAYREVERSEENUMERATOR_H
#define __NSARRAYREVERSEENUMERATOR_H



#import "NSEnumerator.h"

@interface __NSArrayReverseEnumerator : NSEnumerator {
    id *_obj;
    NSUInteger _idx;
}




-(id)initWithObject:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif