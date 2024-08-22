// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTUREMOVIEFILEOUTPUT_H
#define CAMCAPTUREMOVIEFILEOUTPUT_H

@class AVCaptureMovieFileOutput, NSMutableArray, NSMutableDictionary, NSDictionary, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, OS_dispatch_queue;


#import "CAMCaptureEngine.h"

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate>



@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine; // ivar: __captureEngine
@property (readonly, nonatomic) NSMutableArray *_removeOnCompletionSettingsIDs; // ivar: __removeOnCompletionSettingsIDs
@property (readonly, nonatomic) NSMutableDictionary *_userInfoBySettingsID; // ivar: __userInfoBySettingsID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_userInfoQueue; // ivar: __userInfoQueue
@property (copy, nonatomic) NSDictionary *currentUserInfo; // ivar: _currentUserInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSDictionary *userInfoForNextCapture; // ivar: _userInfoForNextCapture
@property (weak, nonatomic) NSObject<AVCaptureFileOutputRecordingDelegate> *wrappedDelegate; // ivar: _wrappedDelegate


-(id)initWithEngine:(id)arg0 ;
-(void)captureOutput:(id)arg0 didFinishRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 error:(id)arg3 ;
-(void)captureOutput:(id)arg0 didStartRecordingToOutputFileAtURL:(id)arg1 fromConnections:(id)arg2 ;
-(void)handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)startRecordingToOutputFileURL:(id)arg0 recordingDelegate:(id)arg1 ;
-(void)stopRecording;


@end


#endif