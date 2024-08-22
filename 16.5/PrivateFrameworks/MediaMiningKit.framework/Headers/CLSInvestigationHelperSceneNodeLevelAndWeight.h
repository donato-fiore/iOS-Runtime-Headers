// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSINVESTIGATIONHELPERSCENENODELEVELANDWEIGHT_H
#define CLSINVESTIGATIONHELPERSCENENODELEVELANDWEIGHT_H

@class PFSceneTaxonomyNode;

#import <Foundation/Foundation.h>


@interface CLSInvestigationHelperSceneNodeLevelAndWeight : NSObject

@property (readonly) NSUInteger level; // ivar: _level
@property (readonly) PFSceneTaxonomyNode *taxonomyNode; // ivar: _taxonomyNode
@property (readonly) CGFloat weight; // ivar: _weight


-(id)initWithTaxonomyNode:(id)arg0 level:(NSUInteger)arg1 andWeight:(CGFloat)arg2 ;


@end


#endif