// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIDEORECORDINGCAMERASELECTIONBEHAVIORCOMMAND_H
#define CAMVIDEORECORDINGCAMERASELECTIONBEHAVIORCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isCameraSwitchingEnabled) BOOL _cameraSwitchingEnabled; // ivar: __cameraSwitchingEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCameraSwitchingEnabled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif