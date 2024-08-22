// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAUDIORECORDERVIEWCONTROLLER_H
#define WFAUDIORECORDERVIEWCONTROLLER_H

@class WFAudioRecorder, NSString, UIButton;
@protocol WFAudioRecorderDelegate;


#import "WFAudioInputViewController.h"

@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate>



@property (retain, nonatomic) WFAudioRecorder *audioRecorder; // ivar: _audioRecorder
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIButton *inputButton; // ivar: _inputButton
@property (nonatomic) BOOL isFinishing; // ivar: _isFinishing
@property (nonatomic) CGFloat recordingDuration; // ivar: _recordingDuration
@property (nonatomic) BOOL startImmediately; // ivar: _startImmediately
@property (readonly) Class superclass;


-(id)initWithOutputFormat:(NSInteger)arg0 destinationURL:(id)arg1 ;
-(void)audioRecorder:(id)arg0 didFinishWithDestinationURL:(id)arg1 error:(id)arg2 ;
-(void)audioRecorder:(id)arg0 didProgressToTime:(CGFloat)arg1 ;
-(void)finishRecording;
-(void)handleTap;
-(void)startRecording;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif