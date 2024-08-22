// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEOEXPORTJOB_H
#define NUVIDEOEXPORTJOB_H

@protocol NUVideoProperties;


#import "NUExportJob.h"
#import "NUDigest.h"

@interface NUVideoExportJob : NUExportJob

@property (retain, nonatomic) NUDigest *digest; // ivar: _digest
@property (retain, nonatomic) NSObject<NUVideoProperties> *videoProperties; // ivar: _videoProperties


-(BOOL)render:(*id)arg0 ;
-(BOOL)renderVideoFrames:(id)arg0 videoMetadataSamples:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(struct ? )arg3 colorSpace:(id)arg4 error:(*id)arg5 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputVideo;
-(BOOL)writeVideoFrom:(id)arg0 toWriter:(id)arg1 stillImageTime:(struct ? )arg2 createCustomMetadata:(BOOL)arg3 geometryTransform:(id)arg4 inputSize:(struct CGSize )arg5 outputSize:(struct CGSize )arg6 error:(*id)arg7 ;
-(id)generateVideoComposition:(*id)arg0 ;
-(id)initWithExportRequest:(id)arg0 ;
-(id)initWithVideoExportRequest:(id)arg0 ;
-(id)prepareNodeWithPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)renderer:(*id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(id)videoExportRequest;
-(void)updateDigestWithRenderedFrame:(struct __CVBuffer *)arg0 ;


@end


#endif