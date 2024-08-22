// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVISIONSEGMENTATIONJOB_H
#define NUVISIONSEGMENTATIONJOB_H

@protocol NUImageBuffer;


#import "NURenderJob.h"
#import "NUVisionSegmentationRequest.h"

@interface NUVisionSegmentationJob : NURenderJob

@property (retain, nonatomic) NSObject<NUImageBuffer> *confidenceMap; // ivar: _confidenceMap
@property (readonly, nonatomic) NUVisionSegmentationRequest *confidenceMapRequest; // ivar: _confidenceMapRequest
@property (readonly, nonatomic) NUVisionSegmentationRequest *segmentationRequest;
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentedMatte; // ivar: _segmentedMatte


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithVisionSegmentationRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(struct __CVBuffer *)_combineMultipleObservations:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(void)cleanUp;


@end


#endif