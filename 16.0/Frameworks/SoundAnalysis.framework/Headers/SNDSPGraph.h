// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNDSPGRAPH_H
#define SNDSPGRAPH_H


#import <Foundation/Foundation.h>


@interface SNDSPGraph : NSObject {
    shared_ptr<DSPGraph::Graph> _graph;
}




-(id)init;


@end


#endif