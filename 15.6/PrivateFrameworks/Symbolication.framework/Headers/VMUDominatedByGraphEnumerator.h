// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUDOMINATEDBYGRAPHENUMERATOR_H
#define VMUDOMINATEDBYGRAPHENUMERATOR_H



#import "VMUGraphEnumerator.h"
#import "VMUDominatorGraph.h"

@interface VMUDominatedByGraphEnumerator : VMUGraphEnumerator {
    VMUDominatorGraph *_dominatorGraph;
}




-(id)initWithGraph:(id)arg0 dominatorGraph:(id)arg1 ;
-(id)statusDisplayDescription;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif