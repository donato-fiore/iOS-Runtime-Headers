// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHINDEXSCENETAXONOMYPROVIDER_H
#define PLSEARCHINDEXSCENETAXONOMYPROVIDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLSearchIndexSceneTaxonomy.h"

@interface PLSearchIndexSceneTaxonomyProvider : NSObject

@property (readonly, nonatomic) NSString *digests;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomy *latestSceneTaxonomy; // ivar: _latestSceneTaxonomy
@property (retain, nonatomic) PLSearchIndexSceneTaxonomy *previousSceneTaxonomy; // ivar: _previousSceneTaxonomy


-(id)description;
-(id)searchIndexSceneTaxonomyForSceneAnalysisVersion:(short)arg0 ;


@end


#endif