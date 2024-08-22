// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSTARTVIDEORECORDINGCOMMAND_H
#define CAMSTARTVIDEORECORDINGCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMVideoCaptureRequest.h"

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoCaptureRequest *_request; // ivar: __request


-(NSInteger)_videoOrientationForCaptureOrientation:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif