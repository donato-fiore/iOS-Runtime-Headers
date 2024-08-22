// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUDEPTHGRAPHENUMERATOR_H
#define VMUDEPTHGRAPHENUMERATOR_H



#import "VMUGraphEnumerator.h"
#import "VMUDepthGraph.h"

@interface VMUDepthGraphEnumerator : VMUGraphEnumerator {
    VMUDepthGraph *_depthGraph;
}




-(id)initWithGraph:(id)arg0 depthGraph:(id)arg1 ;
-(id)statusDisplayDescription;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif