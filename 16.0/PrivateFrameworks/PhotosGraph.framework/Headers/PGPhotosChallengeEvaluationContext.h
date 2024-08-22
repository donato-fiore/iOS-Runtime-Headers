// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPHOTOSCHALLENGEEVALUATIONCONTEXT_H
#define PGPHOTOSCHALLENGEEVALUATIONCONTEXT_H

@class PHPhotoLibrary, CLSSceneTaxonomyHierarchy;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPhotosChallengeEvaluationContext : NSObject

@property (nonatomic, readonly) PGGraph *graph; // ivar: graph
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary; // ivar: photoLibrary
@property (nonatomic, readonly) CLSSceneTaxonomyHierarchy *sceneTaxonomy; // ivar: sceneTaxonomy


-(id)init;


@end


#endif