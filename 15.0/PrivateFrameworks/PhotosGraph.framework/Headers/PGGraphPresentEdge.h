// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHPRESENTEDGE_H
#define PGGRAPHPRESENTEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphPresentEdge : PGGraphOptimizedEdge {
    float _weight;
}


@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets


+(id)consolidatedFilter;
+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(float)weight;
-(id)edgeDescription;
-(id)initFromPersonNode:(id)arg0 toMomentNode:(id)arg1 weight:(float)arg2 numberOfAssets:(NSUInteger)arg3 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif