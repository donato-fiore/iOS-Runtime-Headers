// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSCENENODECOLLECTION_H
#define PGGRAPHSCENENODECOLLECTION_H

@class NSString, NSSet;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphSceneNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesThroughReliableEdges;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithDominantSceneAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithHighConfidenceAssets;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithSearchConfidenceAssets;
@property (readonly) NSSet *sceneNames;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)sceneNodesForSceneName:(id)arg0 inGraph:(id)arg1 ;
+(id)sceneNodesForSceneNames:(id)arg0 inGraph:(id)arg1 ;


@end


#endif