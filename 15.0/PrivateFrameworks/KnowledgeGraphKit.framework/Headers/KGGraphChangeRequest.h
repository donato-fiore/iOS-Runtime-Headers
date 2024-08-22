// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGGRAPHCHANGEREQUEST_H
#define KGGRAPHCHANGEREQUEST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "KGMutableElementIdentifierSet.h"

@interface KGGraphChangeRequest : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove; // ivar: _edgeIdentifiersToRemove
@property (retain, nonatomic) NSMutableArray *edgeUpdates; // ivar: _edgeUpdates
@property (retain, nonatomic) NSMutableArray *edgesToInsert; // ivar: _edgesToInsert
@property (retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove; // ivar: _nodeIdentifiersToRemove
@property (retain, nonatomic) NSMutableArray *nodeUpdates; // ivar: _nodeUpdates
@property (retain, nonatomic) NSMutableArray *nodesToInsert; // ivar: _nodesToInsert


-(id)init;
-(void)insertEdge:(id)arg0 ;
-(void)insertNode:(id)arg0 ;
-(void)removeEdge:(id)arg0 ;
-(void)removeEdgesForIdentifiers:(id)arg0 ;
-(void)removeNode:(id)arg0 ;
-(void)removeNodesForIdentifiers:(id)arg0 ;
-(void)setResolved;
-(void)updateEdge:(id)arg0 newProperties:(id)arg1 ;
-(void)updateEdge:(id)arg0 newWeight:(float)arg1 ;
-(void)updateEdge:(id)arg0 newWeight:(float)arg1 newProperties:(id)arg2 ;
-(void)updateNode:(id)arg0 newProperties:(id)arg1 ;
-(void)updateNode:(id)arg0 newWeight:(float)arg1 ;
-(void)updateNode:(id)arg0 newWeight:(float)arg1 newProperties:(id)arg2 ;


@end


#endif