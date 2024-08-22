// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNDSPGRAPHBOX_H
#define SNDSPGRAPHBOX_H


#import <Foundation/Foundation.h>


@interface SNDSPGraphBox : NSObject {
    *void _box;
    shared_ptr<DSPGraph::Graph> _graph;
}




-(id)init;


@end


#endif