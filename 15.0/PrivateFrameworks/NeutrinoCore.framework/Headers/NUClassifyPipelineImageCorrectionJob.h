// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCLASSIFYPIPELINEIMAGECORRECTIONJOB_H
#define NUCLASSIFYPIPELINEIMAGECORRECTIONJOB_H

@class VNObservation;


#import "NURenderJob.h"
#import "NUClassifyPipelineImageCorrectionRequest.h"

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    ? _imageSize;
}


@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)cacheKey;
-(id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithClassifyPipelineImageCorrectionRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif