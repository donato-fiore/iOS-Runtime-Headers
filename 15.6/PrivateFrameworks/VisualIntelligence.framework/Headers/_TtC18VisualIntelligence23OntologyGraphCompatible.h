// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18VISUALINTELLIGENCE23ONTOLOGYGRAPHCOMPATIBLE_H
#define _TTC18VISUALINTELLIGENCE23ONTOLOGYGRAPHCOMPATIBLE_H


#import <Foundation/Foundation.h>


@interface _TtC18VisualIntelligence23OntologyGraphCompatible : NSObject {
    ? ontologyGraph;
}


@property (nonatomic, readonly) NSUInteger count;


-(BOOL)isDescendentWithDescendent:(id)arg0 ancestor:(id)arg1 ;
-(id)findLeastCommonAncestorWithNode1:(id)arg0 node2:(id)arg1 ;
-(id)init;
-(id)ontologyNodeWithKnowledgeGraphID:(id)arg0 ;


@end


#endif