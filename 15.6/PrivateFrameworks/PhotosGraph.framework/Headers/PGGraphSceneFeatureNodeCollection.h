// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSCENEFEATURENODECOLLECTION_H
#define PGGRAPHSCENEFEATURENODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphSceneFeatureNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)sceneFeatureNodesForSceneName:(id)arg0 inGraph:(id)arg1 ;
+(id)sceneFeatureNodesForSceneNames:(id)arg0 inGraph:(id)arg1 ;


@end


#endif