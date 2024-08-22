// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSINVESTIGATIONHELPERSCENENODELEVELANDWEIGHT_H
#define CLSINVESTIGATIONHELPERSCENENODELEVELANDWEIGHT_H

@class NSNumber, PFSceneTaxonomyNode;

#import <Foundation/Foundation.h>


@interface CLSInvestigationHelperSceneNodeLevelAndWeight : NSObject

@property (readonly) NSNumber *level; // ivar: _level
@property (readonly) PFSceneTaxonomyNode *taxonomyNode; // ivar: _taxonomyNode
@property (readonly) NSNumber *weight; // ivar: _weight


-(id)initWithTaxonomyNode:(id)arg0 level:(id)arg1 andWeight:(id)arg2 ;


@end


#endif