// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11MVKPIPELINE18PIPELINECONTROLLER_H
#define _TTC11MVKPIPELINE18PIPELINECONTROLLER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC11MVKPipeline18PipelineController : NSObject <NSCopying>

 {
    ? collection;
    ? memory;
    ? movieData;
    ? moodService;
    ? queue;
    ? memoryPublisherOutput;
    ? blueprint;
    ? picklistPublisherOutput;
    ? downloadPublisherOutput;
    ? durationRangePublisherOutput;
    ? durationPublisherOutput;
    ? freezeRangesToPersist;
    ? token;
    ? secondToken;
}




-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCollection:(id)arg0 memory:(id)arg1 highlight:(id)arg2 moodService:(id)arg3 queue:(id)arg4 ;
-(void)cancel;
-(void)persist;
// -(void)receiveWithRequestedDuration:(CGFloat)arg0 requestedKeyAsset:(id)arg1 requestedBlueprint:(id)arg2 requestedSuggestions:(id)arg3 requestedTitle:(id)arg4 requestedSubtitle:(id)arg5 fullPicklist:(id)arg6 naturalSize:(struct CGSize )arg7 fetchedAssets:(id)arg8 isAvocado:(BOOL)arg9 progressHandler:(id)arg10 completionHandler:(unk)arg11  ;


@end


#endif