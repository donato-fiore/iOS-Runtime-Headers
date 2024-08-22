// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAABSTRACTGRAPH_H
#define MAABSTRACTGRAPH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MAAbstractGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}




-(id)init;
-(id)insertEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 minimum:(NSUInteger)arg3 maximum:(NSUInteger)arg4 directed:(BOOL)arg5 ;
-(id)insertNodeWithLabel:(id)arg0 ;


@end


#endif