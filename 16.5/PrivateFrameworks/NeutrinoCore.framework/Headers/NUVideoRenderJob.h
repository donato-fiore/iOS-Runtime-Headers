// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUVIDEORENDERJOB_H
#define NUVIDEORENDERJOB_H



#import "NURenderJob.h"

@interface NUVideoRenderJob : NURenderJob



-(BOOL)prepare:(*id)arg0 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputVideo;
-(BOOL)wantsRenderStage;
-(id)generateVideoComposition:(*id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(id)videoRenderRequest;


@end


#endif