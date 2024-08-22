// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSCENENODE_H
#define PGGRAPHSCENENODE_H

@class NSString, NSArray, PFSceneTaxonomyNode;
@protocol PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphSceneNodeCollection.h"

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphSceneNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL isSuitableForSuggestions;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) NSUInteger numberOfAssets;
@property (readonly, nonatomic) NSUInteger numberOfDominantSceneAssets;
@property (readonly, nonatomic) NSUInteger numberOfHighConfidenceAssets;
@property (readonly, nonatomic) NSUInteger numberOfSearchConfidenceAssets;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) NSString *sceneName;
@property (readonly, nonatomic) PFSceneTaxonomyNode *sceneTaxonomyNode; // ivar: _sceneTaxonomyNode
@property (readonly) Class superclass;


+(BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)arg0 confidence:(CGFloat)arg1 ;
+(BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg0 ;
+(id)filter;
+(id)filterForSceneName:(id)arg0 ;
+(id)filterForSceneNames:(id)arg0 ;
+(id)momentOfReliableScene;
+(id)momentOfScene;
+(id)momentOfSceneWithDominantSceneAssets;
+(id)momentOfSceneWithHighConfidenceAssets;
+(id)momentOfSceneWithSearchConfidenceAssets;
+(id)suggestionWhitelistedScenes;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 level:(NSUInteger)arg1 ;
-(id)initWithSceneName:(id)arg0 level:(NSUInteger)arg1 ;
-(id)label;
-(id)momentNodes;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif