// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERAPLAYERACCESSORYVIEWCONTROLLER_H
#define HUCAMERAPLAYERACCESSORYVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UILabel, UIImageView, HFCameraPlaybackEngine;
@protocol HFCameraPlaybackEngineObserver, HFCameraRecordingEvent;


#import "HUCameraLoadingActivityIndicatorView.h"

@interface HUCameraPlayerAccessoryViewController : UIViewController <HFCameraPlaybackEngineObserver>



@property (nonatomic) BOOL canShowOverlayContent; // ivar: _canShowOverlayContent
@property (nonatomic) NSUInteger currentAccessMode; // ivar: _currentAccessMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceLoadingIndicatorToDisplay; // ivar: _forceLoadingIndicatorToDisplay
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HFCameraRecordingEvent> *lastDisplayedEvent; // ivar: _lastDisplayedEvent
@property (nonatomic) NSUInteger lastEngineMode; // ivar: _lastEngineMode
@property (retain, nonatomic) HUCameraLoadingActivityIndicatorView *loadingActivityIndicator; // ivar: _loadingActivityIndicator
@property (weak, nonatomic) UIView *loadingOverlayView; // ivar: _loadingOverlayView
@property (retain, nonatomic) UILabel *noActivityLabel; // ivar: _noActivityLabel
@property (retain, nonatomic) UIImageView *noResponseView; // ivar: _noResponseView
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) UILabel *primaryErrorLabel; // ivar: _primaryErrorLabel
@property (nonatomic) BOOL reachabilityEventWasOffline; // ivar: _reachabilityEventWasOffline
@property (retain, nonatomic) UILabel *secondaryErrorLabel; // ivar: _secondaryErrorLabel
@property (nonatomic) BOOL shouldShowLoadingIndicatorForClipPlayback; // ivar: _shouldShowLoadingIndicatorForClipPlayback
@property (nonatomic) BOOL showingError; // ivar: _showingError
@property (nonatomic) BOOL showingLoadingIndicator; // ivar: _showingLoadingIndicator
@property (nonatomic) BOOL showingNoActivity; // ivar: _showingNoActivity
@property (readonly) Class superclass;


+(id)_newLabel;
-(BOOL)_shouldShortCircuitBlurEffect;
-(BOOL)shouldShortCircuitLoadingIndicator;
-(id)_errorStringDetailsForError:(id)arg0 ;
-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)_displayReachabilityMessageForEvent:(id)arg0 ;
-(void)_updateAllOverlayStateAnimated:(BOOL)arg0 ;
-(void)_updateErrorStateAnimated:(BOOL)arg0 ;
-(void)_updateLoadingStateAnimated:(BOOL)arg0 ;
-(void)_updateNoActivityStateAnimated:(BOOL)arg0 ;
-(void)_updateStateAnimated:(BOOL)arg0 usingBlock:(id)arg1 ;
-(void)hu_reloadData;
-(void)playbackEngine:(id)arg0 didRemoveEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateEvents:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackError:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdatePlaybackPosition:(id)arg1 ;
-(void)playbackEngine:(id)arg0 didUpdateTimeControlStatus:(NSUInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif