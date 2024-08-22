// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUDOMINATESGRAPHENUMERATOR_H
#define VMUDOMINATESGRAPHENUMERATOR_H



#import "VMUGraphEnumerator.h"
#import "VMUDominatorGraph.h"

@interface VMUDominatesGraphEnumerator : VMUGraphEnumerator {
    VMUDominatorGraph *_dominatorGraph;
}




-(id)initWithGraph:(id)arg0 dominatorGraph:(id)arg1 ;
-(id)statusDisplayDescription;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif