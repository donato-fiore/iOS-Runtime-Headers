// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGSTOREDGRAPH_H
#define KGSTOREDGRAPH_H

@protocol KGGraphStore;


#import "KGMutableGraph.h"

@interface KGStoredGraph : KGMutableGraph

@property (readonly, nonatomic) NSObject<KGGraphStore> *store;


-(id)initGraphWithStore:(id)arg0 ;


@end


#endif