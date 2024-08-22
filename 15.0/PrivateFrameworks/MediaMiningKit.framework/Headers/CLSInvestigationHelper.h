// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSINVESTIGATIONHELPER_H
#define CLSINVESTIGATIONHELPER_H

@class PFSceneTaxonomy, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSInvestigationHelper : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
    NSMutableDictionary *_parentTaxonomyNodesBySceneIdentifier;
    os_unfair_lock_s _parentTaxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodeBySceneIdentifier;
    NSMutableDictionary *_sceneNameBySceneIdentifier;
    os_unfair_lock_s _taxonomyNodesAndSceneNamesLock;
    NSMutableDictionary *_taxonomyNodesLevelsAndWeightsBySceneIdentifier;
    os_unfair_lock_s _taxonomyNodesLevelsAndWeightsLock;
    NSMutableDictionary *_maxTaxonomyNodeLevelBySceneIdentifier;
}




-(NSUInteger)_maxLevelWithTaxonomyNode:(id)arg0 ;
-(id)_loadNodeAndNameForSceneIdentifier:(unsigned int)arg0 name:(*id)arg1 ;
-(id)init;
-(id)parentNodesOfTaxonomyNode:(id)arg0 ;
-(id)sceneNameForSceneIdentifier:(unsigned int)arg0 ;
-(id)taxonomyNodeForSceneIdentifier:(unsigned int)arg0 ;
-(void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif