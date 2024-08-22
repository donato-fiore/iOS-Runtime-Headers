// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGGRAPH_H
#define KGGRAPH_H

@class NSUUID;
@protocol KGGraphImplementation;

#import <Foundation/Foundation.h>


@interface KGGraph : NSObject

@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly, nonatomic) NSObject<KGGraphImplementation> *implementation; // ivar: _implementation


-(id)_edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)_nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)adjacencyWithSourceNodeIdentifiers:(id)arg0 edgeFilter:(id)arg1 edgeDirection:(NSUInteger)arg2 ;
-(id)adjacencyWithTargetNodeIdentifiers:(id)arg0 edgeFilter:(id)arg1 edgeDirection:(NSUInteger)arg2 ;
-(id)changesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 error:(*id)arg2 ;
-(id)edgeChangesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)edgeForIdentifier:(NSUInteger)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 ;
-(id)edgeLabels;
-(id)edgesForIdentifiers:(id)arg0 ;
-(id)initWithImplementation:(id)arg0 ;
-(id)labelsOfEdgesForIdentifiers:(id)arg0 ;
-(id)labelsOfNodesForIdentifiers:(id)arg0 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 ;
-(id)nodeChangesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 nodeFilter:(id)arg2 error:(*id)arg3 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersOfEdgesForIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 ;
-(id)nodeLabels;
-(id)nodesForIdentifiers:(id)arg0 ;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 ;
-(id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 ;


@end


#endif