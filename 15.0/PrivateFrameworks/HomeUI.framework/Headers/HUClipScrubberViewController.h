// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCLIPSCRUBBERVIEWCONTROLLER_H
#define HUCLIPSCRUBBERVIEWCONTROLLER_H

@class UIViewController, NSString, UITapGestureRecognizer, HMCameraClipFetchVideoAssetContextOperation, HFCameraAnalyticsCameraClipExportSessionEvent, UIButton, UIView, NSLayoutConstraint, HFCameraPlaybackEngine, CADisplayLink;
@protocol NSURLSessionDelegate, UIGestureRecognizerDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraPlaybackEngineObserver;


#import "HUClipScrubberScrollDelegate.h"
#import "HUClipScrubberDataSource.h"
#import "HUClipScrubberView.h"

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, UIGestureRecognizerDelegate, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraPlaybackEngineObserver>



@property (copy, nonatomic) id *accessoryButtonHandler; // ivar: _accessoryButtonHandler
@property (copy, nonatomic) id *beginEditingHandler; // ivar: _beginEditingHandler
@property (retain, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate; // ivar: _clipScrollDelegate
@property (readonly, nonatomic) CGFloat currentScrubberResolution;
@property (retain, nonatomic) HUClipScrubberDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (copy, nonatomic) id *endEditingHandler; // ivar: _endEditingHandler
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *exportDownloadOperation; // ivar: _exportDownloadOperation
@property (retain, nonatomic) HFCameraAnalyticsCameraClipExportSessionEvent *exportSessionEvent; // ivar: _exportSessionEvent
@property (retain, nonatomic) UIButton *feedbackButton; // ivar: _feedbackButton
@property (retain, nonatomic) UIView *feedbackPlatter; // ivar: _feedbackPlatter
@property (retain, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint; // ivar: _feedbackPlatterTopAnchorConstraint
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (nonatomic) NSUInteger lastEngineMode; // ivar: _lastEngineMode
@property (retain, nonatomic) UIButton *nearbyAccessoriesButton; // ivar: _nearbyAccessoriesButton
@property (retain, nonatomic) UIView *nearbyAccessoriesPlatter; // ivar: _nearbyAccessoriesPlatter
@property (retain, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint; // ivar: _nearbyAccessoriesPlatterTopAnchorConstraint
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) CADisplayLink *scrubberUpdateDisplayLink; // ivar: _scrubberUpdateDisplayLink
@property (retain, nonatomic) HUClipScrubberView *scrubberView; // ivar: _scrubberView
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint; // ivar: _scrubberViewLeftAnchorConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint; // ivar: _scrubberViewRightAnchorConstraint
@property (retain, nonatomic) UIButton *selectionButton; // ivar: _selectionButton
@property (retain, nonatomic) UIView *selectionPlatter; // ivar: _selectionPlatter
@property (retain, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint; // ivar: _selectionPlatterTopAnchorConstraint
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // ivar: _singleTapGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)_cellBoundsContainsPlayhead:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)userIsScrubbing;
-(NSUInteger)displayMode;
-(id)_displayableURLForCameraClipURL:(id)arg0 ;
-(id)_feedbackClip;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(id)outputURLForClip:(id)arg0 ;
-(id)platterWithView:(id)arg0 ;
-(id)uploadURLCameraClip:(id)arg0 ;
-(void)_addConstraints;
-(void)_createAndStartDisplayLink;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_removeDisplayLink;
-(void)_scrubberDisplayLinkTick:(id)arg0 ;
-(void)changeToLiveMode;
-(void)consentController:(id)arg0 didFinishConsentWithAnswer:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteClip;
-(void)didDoubleTap:(id)arg0 ;
-(void)didPinch:(id)arg0 ;
-(void)didSelectFeedbackButton;
-(void)didSelectRightActionButton:(id)arg0 ;
-(void)didTap:(id)arg0 ;
-(void)dismissEditInterface;
-(void)donateAllClips;
-(void)donateClip:(id)arg0 ;
-(void)exportCurrentClipWithCompletion:(id)arg0 ;
-(void)exportLocalClipAtURL:(id)arg0 ;
-(void)loadView;
-(void)playbackEngine:(id)arg0 didRemoveEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackError:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimelineState:(NSUInteger)arg1 ;
-(void)presentFeedbackConsent;
-(void)presentFeedbackOptions;
-(void)presentPreviouslySubmittedClipAlert;
-(void)reloadClipManager:(id)arg0 ;
-(void)removeLiveButtonHighlighting;
-(void)showAssociatedAccessories;
-(void)showDeleteInterface;
-(void)showEditInterface;
-(void)submitCurrentClip;
-(void)togglePlayPause;
-(void)updateAccessoryViews;
-(void)updateDisplayForLiveMode;
-(void)updatePlaybackPosition:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateScrubberDisplayLinkState;
-(void)updateScrubberViewAndAssociatedConstraints;
-(void)updateSelectionPlatterDisplay;
-(void)verifySubmitAllClips;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif