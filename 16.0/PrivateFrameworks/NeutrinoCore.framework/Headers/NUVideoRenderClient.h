// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEORENDERCLIENT_H
#define NUVIDEORENDERCLIENT_H

@class NSArray;
@protocol NUScalePolicy;


#import "NURenderClient.h"

@interface NUVideoRenderClient : NURenderClient

@property (copy, nonatomic) NSArray *pipelineFilters; // ivar: _pipelineFilters
@property (nonatomic) NSInteger sampleMode; // ivar: _sampleMode
@property (retain, nonatomic) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy


-(id)initWithName:(id)arg0 responseQueue:(id)arg1 ;
-(void)submitRequestForComposition:(id)arg0 completion:(id)arg1 ;


@end


#endif