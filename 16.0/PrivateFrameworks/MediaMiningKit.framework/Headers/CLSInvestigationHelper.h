// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINVESTIGATIONHELPER_H
#define CLSINVESTIGATIONHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSInvestigationHelper : NSObject {
    NSMutableDictionary *_parentTaxonomyNodesBySceneIdentifierBySceneModelIdentifier;
    os_unfair_lock_s _parentTaxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodeBySceneIdentifierBySceneModelIdentifier;
    os_unfair_lock_s _taxonomyNodesLock;
    NSMutableDictionary *_taxonomyNodesLevelsAndWeightsBySceneIdentifierBySceneModelIdentifier;
    os_unfair_lock_s _taxonomyNodesLevelsAndWeightsLock;
    NSMutableDictionary *_maxTaxonomyNodeLevelBySceneIdentifierBySceneModelIdentifier;
}




-(NSUInteger)_maxLevelWithTaxonomyNode:(id)arg0 ;
-(id)init;
-(id)parentNodesOfTaxonomyNode:(id)arg0 ;
-(id)taxonomyNodeForSceneIdentifier:(unsigned int)arg0 sceneModel:(id)arg1 ;
-(void)enumerateTaxonomyNodesLevelsAndWeightsStartingWithNode:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif