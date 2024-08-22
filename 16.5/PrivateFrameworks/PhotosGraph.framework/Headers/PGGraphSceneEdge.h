// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSCENEEDGE_H
#define PGGRAPHSCENEEDGE_H



#import "PGGraphOptimizedEdge.h"
#import "PGGraphMomentNode.h"
#import "PGGraphSceneNode.h"

@interface PGGraphSceneEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL isReliable; // ivar: _isReliable
@property (readonly, nonatomic) BOOL isSearchableForEvent;
@property (readonly) PGGraphMomentNode *momentNode;
@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, nonatomic) NSUInteger numberOfDominantSceneAssets; // ivar: _numberOfDominantSceneAssets
@property (readonly, nonatomic) NSUInteger numberOfHighConfidenceAssets; // ivar: _numberOfHighConfidenceAssets
@property (readonly, nonatomic) NSUInteger numberOfSearchConfidenceAssets; // ivar: _numberOfSearchConfidenceAssets
@property (readonly) PGGraphSceneNode *sceneNode;


+(id)dominantSceneAssetsFilter;
+(id)filter;
+(id)filterWithMinimumNumberOfHighConfidenceAssets:(NSUInteger)arg0 ;
+(id)highConfidenceAssetsFilter;
+(id)searchConfidenceAssetsFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)debugDescription;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toSceneNode:(id)arg1 confidence:(CGFloat)arg2 isReliable:(BOOL)arg3 numberOfAssets:(NSUInteger)arg4 numberOfHighConfidenceAssets:(NSUInteger)arg5 numberOfSearchConfidenceAssets:(NSUInteger)arg6 numberOfDominantSceneAssets:(NSUInteger)arg7 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif