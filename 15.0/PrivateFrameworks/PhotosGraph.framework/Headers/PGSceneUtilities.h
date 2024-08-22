// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSCENEUTILITIES_H
#define PGSCENEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGSceneUtilities : NSObject



+(CGFloat)_confidenceThresholdForSceneTaxonomyNode:(id)arg0 sceneNodeThresholdType:(NSUInteger)arg1 ;
+(id)_confidenceThresholdBySceneIdentifierForSceneNames:(id)arg0 sceneNodeThresholdType:(NSUInteger)arg1 ;
+(id)confidenceThresholdByDominantSceneIdentifierForSceneNames:(id)arg0 ;
+(id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg0 forBlocking:(BOOL)arg1 ;


@end


#endif