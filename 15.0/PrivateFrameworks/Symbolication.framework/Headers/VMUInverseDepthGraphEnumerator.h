// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUINVERSEDEPTHGRAPHENUMERATOR_H
#define VMUINVERSEDEPTHGRAPHENUMERATOR_H



#import "VMUGraphEnumerator.h"
#import "VMUDepthGraph.h"

@interface VMUInverseDepthGraphEnumerator : VMUGraphEnumerator {
    VMUDepthGraph *_depthGraph;
}




-(id)initWithGraph:(id)arg0 depthGraph:(id)arg1 ;
-(id)statusDisplayDescription;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif