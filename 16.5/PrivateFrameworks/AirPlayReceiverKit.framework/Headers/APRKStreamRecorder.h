// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APRKSTREAMRECORDER_H
#define APRKSTREAMRECORDER_H


#import <Foundation/Foundation.h>


@interface APRKStreamRecorder : NSObject {
    *OpaqueFigAssetWriter _assetWriter;
    ? _recordingStartTime;
    int _audioTrackID;
    int _videoTrackID;
}




-(BOOL)finalizeRecording;
-(int)_recordSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 toTrackWithID:(int)arg1 ;
-(int)recordAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)recordVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)startRecordingAtURL:(id)arg0 ;


@end


#endif