// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUHISTOGRAMRENDERJOB_H
#define NUHISTOGRAMRENDERJOB_H

@class CIRenderTask;
@protocol NUPurgeableStorage, NUScalePolicy;


#import "NURenderJob.h"
#import "NUPurgeableStoragePool.h"
#import "NUImageHistogram.h"

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> *_renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> *_scalePolicy;
}




-(BOOL)complete:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)cacheKey;
-(id)histogramRequest;
-(id)initWithHistogramRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif