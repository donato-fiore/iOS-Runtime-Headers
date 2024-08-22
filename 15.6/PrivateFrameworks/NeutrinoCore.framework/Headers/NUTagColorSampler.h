// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUTAGCOLORSAMPLER_H
#define NUTAGCOLORSAMPLER_H

@class NSString;


#import "NUColorSampler.h"

@interface NUTagColorSampler : NUColorSampler

@property (readonly, nonatomic) NSString *tag; // ivar: _tag


-(id)_pipelineFilters;
-(id)initWithComposition:(id)arg0 tag:(id)arg1 ;
-(id)initWithComposition:(id)arg0 tag:(id)arg1 responseQueue:(id)arg2 ;


@end


#endif