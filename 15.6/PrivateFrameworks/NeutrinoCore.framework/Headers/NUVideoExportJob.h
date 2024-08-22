// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIDEOEXPORTJOB_H
#define NUVIDEOEXPORTJOB_H



#import "NUExportJob.h"

@interface NUVideoExportJob : NUExportJob {
    ? _livePhotoKeyFrameTime;
}




-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputVideo;
-(BOOL)writeVideoFrom:(id)arg0 toWriter:(id)arg1 stillImageTime:(struct ? )arg2 createCustomMetadata:(BOOL)arg3 geometryTransform:(id)arg4 inputSize:(struct CGSize )arg5 outputSize:(struct CGSize )arg6 error:(*id)arg7 ;
-(id)generateVideoComposition:(*id)arg0 ;
-(id)initWithExportRequest:(id)arg0 ;
-(id)initWithVideoExportRequest:(id)arg0 ;
-(id)renderer:(*id)arg0 ;
-(id)scalePolicy;
-(id)videoExportRequest;


@end


#endif