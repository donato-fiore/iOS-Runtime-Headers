// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUFLATTENGRAPHENUMERATOR_H
#define VMUFLATTENGRAPHENUMERATOR_H



#import "VMUGraphEnumerator.h"

@interface VMUFlattenGraphEnumerator : VMUGraphEnumerator {
    VMUGraphEnumerator *_graphEnumerator;
    *void _deliveredReachable;
    *void _topLevel;
    BOOL _iteratingTopLevel;
}




-(id)initWithGraph:(id)arg0 graphEnumerator:(id)arg1 ;
-(id)statusDisplayDescription;
-(void)dealloc;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif