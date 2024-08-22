// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIRAWTEMPTINTSAMPLER_H
#define PIRAWTEMPTINTSAMPLER_H

@class NUTagColorSampler, NSString;
@protocol PITagColorSampler;



@interface PIRAWTempTintSampler : NUTagColorSampler <PITagColorSampler>



@property (readonly, nonatomic) NSString *tag;


-(id)_pipelineFilters;
-(id)initWithComposition:(id)arg0 responseQueue:(id)arg1 ;


@end


#endif