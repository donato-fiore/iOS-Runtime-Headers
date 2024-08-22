// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPARTOFDAYEDGE_H
#define PGGRAPHPARTOFDAYEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphPartOfDayEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat ratio; // ivar: _ratio


+(id)filter;
+(id)significantFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPartOfDayNode:(id)arg1 ratio:(CGFloat)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif