// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIDEOATTRIBUTESJOB_H
#define NUVIDEOATTRIBUTESJOB_H



#import "NURenderJob.h"
#import "NUVideoAttributes.h"

@interface NUVideoAttributesJob : NURenderJob

@property (retain, nonatomic) NUVideoAttributes *videoAttributes; // ivar: _videoAttributes


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsRenderStage;
-(id)result;


@end


#endif