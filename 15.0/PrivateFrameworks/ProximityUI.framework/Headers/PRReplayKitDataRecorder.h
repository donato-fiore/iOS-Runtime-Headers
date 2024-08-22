// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRREPLAYKITDATARECORDER_H
#define PRREPLAYKITDATARECORDER_H



#import "PRDataRecorder.h"

@interface PRReplayKitDataRecorder : PRDataRecorder



-(id)init;
-(id)stopAndSave;
-(id)writeToURL;
-(void)discardRecording;
-(void)saveScreenRecordingToURL:(id)arg0 ;
-(void)start;
-(void)stopAndDiscard;


@end


#endif