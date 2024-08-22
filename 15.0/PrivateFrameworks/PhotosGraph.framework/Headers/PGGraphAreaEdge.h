// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHAREAEDGE_H
#define PGGRAPHAREAEDGE_H

@class MAEdgeFilter;
@protocol MAUniquelyIdentifiableEdge;


#import "PGGraphPropertylessEdge.h"

@interface PGGraphAreaEdge : PGGraphPropertylessEdge <MAUniquelyIdentifiableEdge>

 {
    float _weight;
}


@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;


+(id)filter;
-(float)weight;
-(id)edgeDescription;
-(id)initFromAddressNode:(id)arg0 toAreaNode:(id)arg1 weight:(float)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(unsigned short)domain;


@end


#endif