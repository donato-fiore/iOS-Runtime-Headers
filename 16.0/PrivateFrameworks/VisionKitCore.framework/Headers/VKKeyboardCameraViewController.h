// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKKEYBOARDCAMERAVIEWCONTROLLER_H
#define VKKEYBOARDCAMERAVIEWCONTROLLER_H

@class NSMutableArray, NSString, UIView, UIPinchGestureRecognizer, UITapGestureRecognizer, UIButton, NSTimer, AVAssetWriter, AVAssetWriterInput;
@protocol VKVideoTextRecognizerDelegate, VKTextLiftingViewDelegate, VKCaptureTextAnalysisRequestDelegate, VKKeyboardCameraViewControllerDelegate;


#import "VKCaptureVideoPreviewViewController.h"
#import "VKKeyboardCameraCloseButton.h"
#import "VKVideoTextRecognizerItem.h"
#import "VKFeedbackProvider.h"
#import "VKKeyboardCameraGuidanceView.h"
#import "VKKeyboardCameraInsertButton.h"
#import "VKImageAnalysisButton.h"
#import "VKKeyboardCameraReticleView.h"
#import "VKCaptureTextAnalyzer.h"
#import "VKTextLiftingView.h"
#import "VKVideoTextRecognizer.h"

@interface VKKeyboardCameraViewController : VKCaptureVideoPreviewViewController <VKVideoTextRecognizerDelegate, VKTextLiftingViewDelegate, VKCaptureTextAnalysisRequestDelegate>



@property (retain, nonatomic) VKKeyboardCameraCloseButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) VKVideoTextRecognizerItem *closestItem; // ivar: _closestItem
@property (retain, nonatomic) NSMutableArray *dataForRadar; // ivar: _dataForRadar
@property (nonatomic) NSUInteger dataTypes; // ivar: _dataTypes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VKKeyboardCameraViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDismiss; // ivar: _didDismiss
@property (nonatomic) BOOL didOverrideComparisonPoint; // ivar: _didOverrideComparisonPoint
@property (nonatomic) BOOL didSetInitialComparisonPoint; // ivar: _didSetInitialComparisonPoint
@property (retain, nonatomic) VKFeedbackProvider *feedbackProvider; // ivar: _feedbackProvider
@property (retain, nonatomic) VKKeyboardCameraGuidanceView *guidanceView; // ivar: _guidanceView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hitTestView; // ivar: _hitTestView
@property (nonatomic) CGFloat initialPinchZoom; // ivar: _initialPinchZoom
@property (nonatomic) ? initialRecordingTimestamp; // ivar: _initialRecordingTimestamp
@property (retain, nonatomic) VKKeyboardCameraInsertButton *insertButton; // ivar: _insertButton
@property (nonatomic) BOOL isPinchToZoomInProgress; // ivar: _isPinchToZoomInProgress
@property (nonatomic) BOOL isTextLifted; // ivar: _isTextLifted
@property (retain, nonatomic) VKImageAnalysisButton *liftTextButton; // ivar: _liftTextButton
@property (retain, nonatomic) NSString *liftedString; // ivar: _liftedString
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (retain, nonatomic) NSString *previousString; // ivar: _previousString
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (retain, nonatomic) VKKeyboardCameraReticleView *reticleView; // ivar: _reticleView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UIButton *tapToRadarButton; // ivar: _tapToRadarButton
@property (retain, nonatomic) VKCaptureTextAnalyzer *textAnalyzer; // ivar: _textAnalyzer
@property (retain, nonatomic) VKTextLiftingView *textLiftingView; // ivar: _textLiftingView
@property (retain, nonatomic) VKVideoTextRecognizer *textRecognizer; // ivar: _textRecognizer
@property (retain, nonatomic) NSTimer *timeWithoutTextTimer; // ivar: _timeWithoutTextTimer
@property (retain, nonatomic) AVAssetWriter *videoWriter; // ivar: _videoWriter
@property (retain, nonatomic) AVAssetWriterInput *videoWriterInput; // ivar: _videoWriterInput


-(BOOL)_canShowWhileLocked;
-(BOOL)wantsRegionOfInterest;
-(id)arrayToJSON:(id)arg0 ;
-(id)desiredDeviceTypes;
-(id)findTextLocalizedStringKey;
-(void)addButtons;
-(void)addTapToRadarButtonIfNeeded;
-(void)animate:(id)arg0 ;
-(void)animateAlongsideFadeOutForTextLiftingView:(id)arg0 ;
-(void)animateAlongsideTextLiftingForView:(id)arg0 ;
-(void)cancelTimeWithoutTextTimer;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)clearFoundItemAndRemoveLiftTextButton:(BOOL)arg0 ;
-(void)configureConstraints;
-(void)dealloc;
-(void)didChangeRegionOfInterest:(struct CGRect )arg0 ;
-(void)didEndPinchToZoom;
-(void)dismissLiftedText;
-(void)fadeOutAnimationDidEndForView:(id)arg0 ;
-(void)liftTextIfPossible;
-(void)liftTextWithCompletion:(id)arg0 ;
-(void)liftTextWithSnapshot:(id)arg0 ;
-(void)onCancel;
-(void)onInsert;
-(void)onLiftTextButton:(id)arg0 ;
-(void)onPinch:(id)arg0 ;
-(void)onSelectionChanged:(id)arg0 ;
-(void)onTap:(id)arg0 ;
-(void)onTapToRadarButton;
-(void)request:(id)arg0 didDetectTextWithResult:(id)arg1 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didRecgonizeTextWithAnalysis:(id)arg1 ;
-(void)requestDidCancel:(id)arg0 ;
-(void)resetToDefaultComparisonPoint;
-(void)sendRadarWithVideo;
-(void)startRecordingForTapToRadarAtTimestamp:(struct ? )arg0 ;
-(void)startTimeWithoutTextTimer;
-(void)stopRecordingForTapToRadar;
-(void)textLiftingAnimationDidEndForView:(id)arg0 ;
-(void)updateInsertButtonWithRecognizedString:(id)arg0 ;
-(void)videoTextRecognizer:(id)arg0 added:(id)arg1 updated:(id)arg2 removed:(id)arg3 ;
-(void)videoTextRecognizer:(id)arg0 added:(id)arg1 updated:(id)arg2 removed:(id)arg3 bufferTimestamp:(struct ? )arg4 ;
-(void)videoTextRecognizer:(id)arg0 didChangeStability:(NSUInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBeginPinchToZoom;


@end


#endif