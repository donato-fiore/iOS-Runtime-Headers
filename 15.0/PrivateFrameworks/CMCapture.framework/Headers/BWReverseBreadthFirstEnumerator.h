// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWREVERSEBREADTHFIRSTENUMERATOR_H
#define BWREVERSEBREADTHFIRSTENUMERATOR_H

@class NSMutableArray;


#import "BWNodeEnumerator.h"

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}




-(id)initWithGraph:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif