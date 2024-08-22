// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIDEOROTATIONEXPORTJOB_H
#define NUVIDEOROTATIONEXPORTJOB_H



#import "NUExportJob.h"

@interface NUVideoRotationExportJob : NUExportJob



-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsOutputVideo;
-(BOOL)wantsOutputVideoFrame;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(BOOL)wantsRenderStage;
-(id)initWithExportRequest:(id)arg0 ;
-(id)initWithVideoRotationExportRequest:(id)arg0 ;
-(id)scalePolicy;
-(id)videoRotationExportRequest;


@end


#endif