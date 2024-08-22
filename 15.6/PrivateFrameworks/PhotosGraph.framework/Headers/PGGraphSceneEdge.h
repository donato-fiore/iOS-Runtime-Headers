// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSCENEEDGE_H
#define PGGRAPHSCENEEDGE_H



#import "PGGraphOptimizedEdge.h"

@interface PGGraphSceneEdge : PGGraphOptimizedEdge {
    float _weight;
}


@property (readonly, nonatomic) BOOL isReliable; // ivar: _isReliable
@property (readonly, nonatomic) BOOL isSearchableForEvent;
@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, nonatomic) NSUInteger numberOfDominantSceneAssets; // ivar: _numberOfDominantSceneAssets
@property (readonly, nonatomic) NSUInteger numberOfHighConfidenceAssets; // ivar: _numberOfHighConfidenceAssets
@property (readonly, nonatomic) NSUInteger numberOfSearchConfidenceAssets; // ivar: _numberOfSearchConfidenceAssets


+(id)dominantSceneAssetsFilter;
+(id)filter;
+(id)highConfidenceAssetsFilter;
+(id)searchConfidenceAssetsFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(float)weight;
-(id)debugDescription;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toSceneNode:(id)arg1 weight:(float)arg2 isReliable:(BOOL)arg3 numberOfAssets:(NSUInteger)arg4 numberOfHighConfidenceAssets:(NSUInteger)arg5 numberOfSearchConfidenceAssets:(NSUInteger)arg6 numberOfDominantSceneAssets:(NSUInteger)arg7 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(unsigned short)domain;


@end


#endif