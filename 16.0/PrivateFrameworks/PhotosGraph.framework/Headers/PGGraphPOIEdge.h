// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPOIEDGE_H
#define PGGRAPHPOIEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphPOIEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL poiIsImproved; // ivar: _poiIsImproved
@property (readonly, nonatomic) BOOL poiIsSpecial; // ivar: _poiIsSpecial


+(id)filter;
+(id)filterAboveConfidence:(CGFloat)arg0 ;
+(id)filterImproved;
+(id)filterSpecial;
+(void)setPOIIsImproved:(BOOL)arg0 onPOIEdgeForIdentifier:(NSUInteger)arg1 inGraph:(id)arg2 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPOINode:(id)arg1 confidence:(CGFloat)arg2 poiIsImproved:(BOOL)arg3 poiIsSpecial:(BOOL)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif