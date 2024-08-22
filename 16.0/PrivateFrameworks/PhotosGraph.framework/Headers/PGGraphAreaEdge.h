// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHAREAEDGE_H
#define PGGRAPHAREAEDGE_H

@class MAEdgeFilter;
@protocol MAUniquelyIdentifiableEdge;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphAreaEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge>



@property (readonly) CGFloat relevance; // ivar: _relevance
@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromAddressNode:(id)arg0 toAreaNode:(id)arg1 relevance:(CGFloat)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif