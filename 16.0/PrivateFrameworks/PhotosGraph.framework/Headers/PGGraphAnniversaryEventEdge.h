// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHANNIVERSARYEVENTEDGE_H
#define PGGRAPHANNIVERSARYEVENTEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphAnniversaryEventEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat confidence; // ivar: _confidence


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPersonNode:(id)arg1 confidence:(CGFloat)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif