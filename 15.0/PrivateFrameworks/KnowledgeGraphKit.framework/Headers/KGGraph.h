// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGGRAPH_H
#define KGGRAPH_H

@protocol KGGraphImplementation;

#import <Foundation/Foundation.h>


@interface KGGraph : NSObject

@property (readonly, nonatomic) NSObject<KGGraphImplementation> *implementation; // ivar: _implementation


-(id)_edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)_nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)edgeForIdentifier:(NSUInteger)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 ;
-(id)edgeLabels;
-(id)edgesForIdentifiers:(id)arg0 ;
-(id)initWithImplementation:(id)arg0 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersOfEdgesForIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 ;
-(id)nodeLabels;
-(id)nodesForIdentifiers:(id)arg0 ;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 ;


@end


#endif