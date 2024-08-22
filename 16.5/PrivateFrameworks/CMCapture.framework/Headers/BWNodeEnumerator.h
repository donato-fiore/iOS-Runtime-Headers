// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODEENUMERATOR_H
#define BWNODEENUMERATOR_H

@class NSEnumerator, NSMutableDictionary;


#import "BWGraph.h"

@interface BWNodeEnumerator : NSEnumerator {
    BWGraph *_graph;
    NSUInteger _depth;
    NSMutableDictionary *_nodeVisitCountMap;
}




+(void)initialize;
-(id)initWithGraph:(id)arg0 ;
-(void)dealloc;


@end


#endif