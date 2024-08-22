// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11MVKPIPELINE29PIPELINEPREGENERATECONTROLLER_H
#define _TTC11MVKPIPELINE29PIPELINEPREGENERATECONTROLLER_H


#import <Foundation/Foundation.h>


@interface _TtC11MVKPipeline29PipelinePregenerateController : NSObject {
    ? collection;
    ? memory;
    ? movieData;
    ? memoryPublisherOutput;
    ? blueprint;
    ? picklistPublisherOutput;
    ? durationRangeOutput;
    ? token;
    ? secondToken;
}




-(id)init;
-(id)initWithCollection:(id)arg0 memory:(id)arg1 ;
-(void)cancel;
-(void)receiveWithRequestedDuration:(CGFloat)arg0 requestedKeyAsset:(id)arg1 requestedBlueprint:(id)arg2 requestedSuggestions:(id)arg3 naturalSize:(struct CGSize )arg4 queue:(id)arg5 completionHandler:(id)arg6 ;


@end


#endif