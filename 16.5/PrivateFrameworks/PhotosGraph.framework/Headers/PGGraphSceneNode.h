// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSCENENODE_H
#define PGGRAPHSCENENODE_H

@class NSString, NSArray;
@protocol PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphSceneNodeCollection.h"

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>

 {
    NSString *_localizedSynonyms;
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphSceneNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIndexed; // ivar: _isIndexed
@property (readonly, nonatomic) BOOL isSuitableForSuggestions;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) NSUInteger numberOfAssets;
@property (readonly, nonatomic) NSUInteger numberOfDominantSceneAssets;
@property (readonly, nonatomic) NSUInteger numberOfHighConfidenceAssets;
@property (readonly, nonatomic) NSUInteger numberOfSearchConfidenceAssets;
@property (readonly, nonatomic) unsigned int sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) NSString *sceneName;
@property (readonly) Class superclass;


+(id)filter;
+(id)filterForSceneName:(id)arg0 ;
+(id)filterForSceneNames:(id)arg0 ;
+(id)filterWithSceneIdentifiers:(id)arg0 ;
+(id)momentOfReliableScene;
+(id)momentOfScene;
+(id)momentOfSceneWithDominantSceneAssets;
+(id)momentOfSceneWithHighConfidenceAssets;
+(id)momentOfSceneWithSearchConfidenceAssets;
+(id)suggestableSceneNames;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initForTestingWithSceneName:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithSceneName:(id)arg0 sceneIdentifier:(unsigned int)arg1 level:(NSUInteger)arg2 isIndexed:(BOOL)arg3 localizedName:(id)arg4 localizedSynonyms:(id)arg5 ;
-(id)initWithSceneTaxonomyNode:(id)arg0 level:(NSUInteger)arg1 ;
-(id)label;
-(id)momentNodes;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif