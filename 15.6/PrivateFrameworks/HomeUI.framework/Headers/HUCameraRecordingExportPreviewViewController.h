// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERARECORDINGEXPORTPREVIEWVIEWCONTROLLER_H
#define HUCAMERARECORDINGEXPORTPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSOperationQueue, HMCameraClip, HMCameraProfile, NSString, UILabel, NSURL, UITextView, UIActivityIndicatorView, AVPlayerLooper, AVQueuePlayer, UIButton, HMCameraClipFetchVideoAssetContextOperation;
@protocol UITextViewDelegate;


#import "HUCameraRecordingPlayerView.h"

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate>



@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue; // ivar: _backgroundSessionQueue
@property (weak, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (weak, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSURL *exportURL; // ivar: _exportURL
@property (nonatomic) BOOL hasVideoPreview; // ivar: _hasVideoPreview
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *learnMoreTextView; // ivar: _learnMoreTextView
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // ivar: _loadingIndicatorView
@property (retain, nonatomic) AVPlayerLooper *looper; // ivar: _looper
@property (retain, nonatomic) HUCameraRecordingPlayerView *playerView; // ivar: _playerView
@property (weak, nonatomic) AVQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (retain, nonatomic) id *queuePlayerObserver; // ivar: _queuePlayerObserver
@property (retain, nonatomic) UIButton *submitButton; // ivar: _submitButton
@property (readonly) Class superclass;
@property (retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation; // ivar: _videoDownloadOperation


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithCameraClip:(id)arg0 cameraProfile:(id)arg1 completionHandler:(id)arg2 ;
-(void)_addConstraints;
-(void)_displayFailureToSubmitAlert;
-(void)_loadLoadingInterface;
-(void)_loadPreviewInterface;
-(void)_stripAndTruncateRecording;
-(void)cancelSubmission;
-(void)didDismissPrivacyViewController;
-(void)playVideoFile;
-(void)prepareRecordingForExport;
-(void)showPrivacyInformation;
-(void)submitCurrentClip;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif