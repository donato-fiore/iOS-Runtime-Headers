// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAHIGHLIGHTCOLLECTIONENRICHMENTTASK_H
#define PHAHIGHLIGHTCOLLECTIONENRICHMENTTASK_H

@class NSDictionary;


#import "PHAEnrichmentTask.h"

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}




-(CGFloat)period;
-(id)enrichmentProcessor;
-(id)initWithOptions:(id)arg0 ;


@end


#endif