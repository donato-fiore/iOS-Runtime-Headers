// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMEANINGEDGE_H
#define PGGRAPHMEANINGEDGE_H

@class NSString;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphMeaningEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) BOOL isReliable;
@property (readonly) NSString *meaningLabel;


+(id)filter;
+(id)propertyDictionaryWithConfidence:(CGFloat)arg0 ;
+(id)reliableFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toMeaningNode:(id)arg1 confidence:(CGFloat)arg2 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif