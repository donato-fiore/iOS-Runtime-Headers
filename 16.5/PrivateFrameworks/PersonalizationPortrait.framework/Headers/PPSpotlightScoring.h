// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSPOTLIGHTSCORING_H
#define PPSPOTLIGHTSCORING_H


#import <Foundation/Foundation.h>

#import "PPTopicStore.h"

@interface PPSpotlightScoring : NSObject {
    PPTopicStore *_topicStore;
    NSInteger _sandboxExtensionHandle;
}




+(id)defaultInstance;
-(BOOL)refreshSpotlightScoringCacheWithError:(*id)arg0 ;
-(id)initWithTopicStore:(id)arg0 ;
-(id)spotlightQueryScore:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif