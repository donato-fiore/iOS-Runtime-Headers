// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIONTOLOGYGRAPH_H
#define VIONTOLOGYGRAPH_H


#import <Foundation/Foundation.h>

#import "_TtC18VisualIntelligence23OntologyGraphCompatible.h"

@interface VIOntologyGraph : NSObject {
    _TtC18VisualIntelligence23OntologyGraphCompatible *_compatGraph;
}




-(BOOL)isDescendentWithDescendent:(id)arg0 ancestor:(id)arg1 ;
-(NSUInteger)count;
-(id)findLeastCommonAncestorWithNode1:(id)arg0 node2:(id)arg1 ;
-(id)initWithOntologyGraph:(id)arg0 ;
-(id)ontologyNodeWithKnowledgeGraphID:(id)arg0 ;


@end


#endif