// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSINDEXSETENUMERATOR_H
#define _NSINDEXSETENUMERATOR_H

@class NSEnumerator;


#import "NSIndexSet.h"

@interface _NSIndexSetEnumerator : NSEnumerator {
    NSIndexSet *_indexSet;
    NSUInteger _index;
}




-(id)initWithIndexSet:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif