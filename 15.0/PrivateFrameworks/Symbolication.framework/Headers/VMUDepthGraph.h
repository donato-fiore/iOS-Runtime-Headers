// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUDEPTHGRAPH_H
#define VMUDEPTHGRAPH_H


#import <Foundation/Foundation.h>

#import "VMUProcessObjectGraph.h"

@interface VMUDepthGraph : NSObject {
    VMUProcessObjectGraph *_graph;
    *unsigned int _depthMap;
}




-(NSInteger)markNodes:(*void)arg0 atDepth:(unsigned int)arg1 ;
-(id)initWithGraph:(id)arg0 ;
-(unsigned int)depthOfNode:(unsigned int)arg0 ;
-(void)_buildDepthMap;
-(void)_buildNextDepth:(id)arg0 into:(id)arg1 depth:(unsigned int)arg2 ;
-(void)_processNodes:(*void)arg0 withDepth:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif