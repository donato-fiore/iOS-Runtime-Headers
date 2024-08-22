// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPAUSEPAIREDVIDEORECORDINGCOMMAND_H
#define CAMPAUSEPAIREDVIDEORECORDINGCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isRecordingPaused) BOOL _recordingPaused; // ivar: __recordingPaused


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordingPaused:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif