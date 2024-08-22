// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAHIGHLIGHTCOLLECTIONENRICHMENTTASK_H
#define PHAHIGHLIGHTCOLLECTIONENRICHMENTTASK_H

@class NSDictionary;


#import "PHAEnrichmentTask.h"

@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary *_options;
}




-(BOOL)currentPlatformIsSupported;
-(CGFloat)period;
-(id)enrichmentProcessor;
-(id)initWithOptions:(id)arg0 ;


@end


#endif