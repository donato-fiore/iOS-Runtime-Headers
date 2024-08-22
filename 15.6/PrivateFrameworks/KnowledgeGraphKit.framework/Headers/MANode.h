// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANODE_H
#define MANODE_H

@class NSString, NSArray, NSDictionary;
@protocol MAElement, NSCopying, KGNode, MAGraphProxy, MANodeImplementationProtocol;

#import <Foundation/Foundation.h>

#import "MAGraphReference.h"

@interface MANode : NSObject <MAElement, NSCopying, KGNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) NSObject<MAGraphProxy> *graph;
@property (retain, nonatomic) MAGraphReference *graphReference; // ivar: _graphReference
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<MANodeImplementationProtocol> *implementation; // ivar: _implementation
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float weight;


-(BOOL)conformsToNodeSchema:(id)arg0 ;
-(BOOL)hasEdge:(id)arg0 isIn:(*BOOL)arg1 ;
-(BOOL)hasEdgeFromNode:(id)arg0 ;
-(BOOL)hasEdgeTowardNode:(id)arg0 ;
-(BOOL)hasEdgeWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(BOOL)hasEdgeWithNode:(id)arg0 ;
-(BOOL)hasEqualPropertiesToNode:(id)arg0 ;
-(BOOL)hasProperties;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(BOOL)isIdentifiedByProperties:(id)arg0 ;
-(BOOL)isOrphan;
-(BOOL)isSameNodeAsNode:(id)arg0 ;
-(BOOL)isUnique;
-(BOOL)matchesNode:(id)arg0 includingProperties:(BOOL)arg1 ;
-(NSUInteger)countOfEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(NSUInteger)edgesCount;
-(NSUInteger)inEdgesCount;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(NSUInteger)outEdgesCount;
-(id)allEdges;
-(id)anyEdgeFromNode:(id)arg0 ;
-(id)anyEdgeOfType:(NSUInteger)arg0 withLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyEdgeOfType:(NSUInteger)arg0 withNode:(id)arg1 ;
-(id)anyEdgeTowardNode:(id)arg0 ;
-(id)anyEdgeWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)anyEdgeWithNode:(id)arg0 ;
-(id)anyNeighborNodeThroughEdgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)associatedNodesForRemoval;
-(id)changingPropertiesWithProperties:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)edgesFromNode:(id)arg0 ;
-(id)edgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)edgesOfType:(NSUInteger)arg0 withNode:(id)arg1 ;
-(id)edgesTowardNode:(id)arg0 ;
-(id)edgesWithNode:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)neighborNodes;
-(id)neighborNodesThroughEdgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)neighborNodesThroughInEdges;
-(id)neighborNodesThroughOutEdges;
-(id)neighborNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyForKey:(id)arg0 kindOfClass:(Class)arg1 ;
-(id)propertyKeys;
-(id)resolvedNode;
-(id)shortDescription;
-(id)shortestPathToNode:(id)arg0 directed:(BOOL)arg1 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)visualString;
-(id)visualStringWithName:(id)arg0 ;
-(id)visualStringWithName:(id)arg0 andPropertyKeys:(id)arg1 ;
-(void)enumerateEdgesInDomains:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEdgesOfType:(NSUInteger)arg0 withNode:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEdgesUsingBlock:(id)arg0 ;
-(void)enumerateEdgesWithDomains:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateInEdgesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNeighborEdgesAndNodesThroughEdgesWithDomains:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborEdgesAndNodesThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborEdgesAndNodesThroughInEdgesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborEdgesAndNodesThroughOutEdgesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(NSUInteger)arg0 matchingFilter:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(NSUInteger)arg0 withLabel:(id)arg1 inDomain:(unsigned short)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNeighborNodesThroughInEdgesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborNodesUsingBlock:(id)arg0 ;
-(void)enumerateNeighborNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateOutEdgesUsingBlock:(id)arg0 ;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;
-(void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;
-(void)setShouldStoreResolvedNode;


@end


#endif