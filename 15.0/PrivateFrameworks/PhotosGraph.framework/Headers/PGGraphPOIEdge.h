// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPOIEDGE_H
#define PGGRAPHPOIEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphPOIEdge : PGGraphOptimizedEdge {
    float _weight;
}


@property (readonly, nonatomic) BOOL poiIsImproved; // ivar: _poiIsImproved
@property (readonly, nonatomic) BOOL poiIsSpecial; // ivar: _poiIsSpecial


+(id)filter;
+(id)filterImproved;
+(id)filterSpecial;
+(id)propertiesWithPOIIsImproved:(BOOL)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(float)weight;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toPOINode:(id)arg1 weight:(float)arg2 poiIsImproved:(BOOL)arg3 poiIsSpecial:(BOOL)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif