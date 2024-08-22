// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAGRAPHCHANGEREQUEST_H
#define MAGRAPHCHANGEREQUEST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "KGMutableElementIdentifierSet.h"

@interface MAGraphChangeRequest : NSObject

@property (retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove; // ivar: _edgeIdentifiersToRemove
@property (retain, nonatomic) NSMutableArray *edgesToInsert; // ivar: _edgesToInsert
@property (retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove; // ivar: _nodeIdentifiersToRemove
@property (retain, nonatomic) NSMutableArray *nodesToInsert; // ivar: _nodesToInsert


-(id)init;
-(void)addEdge:(id)arg0 ;
-(void)addNode:(id)arg0 ;
-(void)removeEdge:(id)arg0 ;
-(void)removeEdges:(id)arg0 ;
-(void)removeEdgesForIdentifier:(NSUInteger)arg0 ;
-(void)removeEdgesForIdentifiers:(id)arg0 ;
-(void)removeNode:(id)arg0 ;
-(void)removeNodeForIdentifier:(NSUInteger)arg0 ;
-(void)removeNodes:(id)arg0 ;
-(void)removeNodesForIdentifiers:(id)arg0 ;


@end


#endif