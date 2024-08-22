// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODESAMPLEBUFFERMESSAGE_H
#define BWNODESAMPLEBUFFERMESSAGE_H



#import "BWNodeMessage.h"
#import "FigCaptureStillImageSettings.h"
#import "FigCaptureRecordingSettings.h"

@interface BWNodeSampleBufferMessage : BWNodeMessage {
    *opaqueCMSampleBuffer _sampleBuffer;
    FigCaptureStillImageSettings *_stillImageSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}


@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) *opaqueCMSampleBuffer sampleBuffer;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;


+(id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 recordingSettings:(id)arg1 ;
+(id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(id)arg1 ;
-(void)dealloc;


@end


#endif