// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEPTHFIRSTENUMERATOR_H
#define BWDEPTHFIRSTENUMERATOR_H

@class NSMutableArray;


#import "BWNodeEnumerator.h"

@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    NSUInteger _currentSourceIndex;
}




-(id)_nextUnvisitedChild:(id)arg0 ;
-(id)initWithGraph:(id)arg0 vertexOrdering:(int)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif