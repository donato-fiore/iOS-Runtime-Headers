// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISOURCESAMPLER_H
#define PISOURCESAMPLER_H

@class NUColorSampler, NSString;
@protocol PITagColorSampler;



@interface PISourceSampler : NUColorSampler <PITagColorSampler>



@property (readonly, nonatomic) NSString *tag;


-(id)_pipelineFilters;


@end


#endif