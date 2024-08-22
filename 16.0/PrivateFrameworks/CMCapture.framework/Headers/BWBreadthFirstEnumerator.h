// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBREADTHFIRSTENUMERATOR_H
#define BWBREADTHFIRSTENUMERATOR_H

@class NSMutableArray;


#import "BWNodeEnumerator.h"

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}




-(id)initWithGraph:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif