// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11MVKPIPELINE24PIPELINEEXPORTCONTROLLER_H
#define _TTC11MVKPIPELINE24PIPELINEEXPORTCONTROLLER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC11MVKPipeline24PipelineExportController : NSObject <NSCopying>

 {
    ? collection;
    ? memory;
    ? moodService;
    ? queue;
    ? memoryPublisherOutput;
    ? blueprint;
    ? picklistPublisherOutput;
    ? downloadPublisherOutput;
    ? durationRangeOutput;
    ? token;
}




-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCollection:(id)arg0 memory:(id)arg1 moodService:(id)arg2 queue:(id)arg3 ;
-(void)cancel;
-(void)receiveWithRequestedDuration:(CGFloat)arg0 requestedKeyAsset:(id)arg1 requestedBlueprint:(id)arg2 requestedSuggestions:(id)arg3 requestedTitle:(id)arg4 requestedSubtitle:(id)arg5 fullPicklist:(id)arg6 naturalSize:(struct CGSize )arg7 completionHandler:(id)arg8 ;


@end


#endif