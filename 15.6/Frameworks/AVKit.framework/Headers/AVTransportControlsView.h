// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTRANSPORTCONTROLSVIEW_H
#define AVTRANSPORTCONTROLSVIEW_H

@class UIView, NSArray, NSString, UILabel, NSTimer;
@protocol AVScrubberDelegate, AVVolumeControlsControllerLayoutDelegate, AVTransportControlsViewDelegate;


#import "AVView.h"
#import "AVControlOverflowButton.h"
#import "AVLayoutView.h"
#import "AVLabel.h"
#import "AVTouchIgnoringView.h"
#import "AVButton.h"
#import "AVPlaybackControlsRoutePickerView.h"
#import "AVScrubber.h"
#import "AVStyleSheet.h"

@interface AVTransportControlsView : AVView <AVScrubberDelegate, AVVolumeControlsControllerLayoutDelegate>



@property (nonatomic, getter=isAnimatingScrubInstructions) BOOL animatingScrubInstructions; // ivar: _animatingScrubInstructions
@property (readonly, nonatomic) BOOL canShowScrubInstructions;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (readonly, nonatomic) AVControlOverflowButton *controlOverflowButton; // ivar: _controlOverflowButton
@property (readonly, nonatomic) AVLayoutView *controlsLayoutView; // ivar: _controlsLayoutView
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel; // ivar: _customContentTransitioningInfoPanel
@property (copy, nonatomic) NSArray *customItems; // ivar: _customItems
@property (copy, nonatomic) NSArray *customMenuItemsViews; // ivar: _customMenuItemsViews
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTransportControlsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVLayoutView *detachedExtraContentLayoutView; // ivar: _detachedExtraContentLayoutView
@property (readonly, nonatomic) AVLabel *detachedScrubInstructionsBackdropLabel; // ivar: _detachedScrubInstructionsBackdropLabel
@property (nonatomic, getter=isDoubleRowLayoutEnabled) BOOL doubleRowLayoutEnabled; // ivar: _doubleRowLayoutEnabled
@property (readonly, nonatomic) NSArray *doubleRowViews;
@property (readonly, nonatomic) AVLabel *elapsedTimeLabel; // ivar: _elapsedTimeLabel
@property (readonly, nonatomic) AVTouchIgnoringView *embeddedExtraContentContainer; // ivar: _embeddedExtraContentContainer
@property (nonatomic) CGSize extrinsicContentSize; // ivar: _extrinsicContentSize
@property (retain, nonatomic) AVTouchIgnoringView *flexibleViewAfterRoutePickerView; // ivar: _flexibleViewAfterRoutePickerView
@property (retain, nonatomic) AVTouchIgnoringView *flexibleViewAfterSkipForwardButtons; // ivar: _flexibleViewAfterSkipForwardButtons
@property (nonatomic) BOOL hasAlternateAppearance; // ivar: _hasAlternateAppearance
@property (nonatomic) BOOL hasFullScreenAppearance; // ivar: _hasFullScreenAppearance
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (readonly, nonatomic) AVLabel *liveBroadcastLabel; // ivar: _liveBroadcastLabel
@property (readonly, nonatomic) AVLabel *liveBroadcastScrubberLabel; // ivar: _liveBroadcastScrubberLabel
@property (nonatomic) BOOL liveStreamingControlsIncludeScrubber; // ivar: _liveStreamingControlsIncludeScrubber
@property (readonly, nonatomic) AVButton *mediaSelectionButton; // ivar: _mediaSelectionButton
@property (readonly, nonatomic) CGFloat minimumRequiredWidth; // ivar: _minimumRequiredWidth
@property (readonly, nonatomic) AVButton *playbackSpeedButton; // ivar: _playbackSpeedButton
@property (nonatomic, getter=isRemoved) BOOL removed; // ivar: _removed
@property (readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // ivar: _routePickerView
@property (readonly, nonatomic) UILabel *scrubInstructionsLabel; // ivar: _scrubInstructionsLabel
@property (weak, nonatomic) NSTimer *scrubInstructionsTimer; // ivar: _scrubInstructionsTimer
@property (readonly, nonatomic) AVScrubber *scrubber; // ivar: _scrubber
@property (nonatomic) float scrubberValueWhenScrubInstructionsTimerBegan; // ivar: _scrubberValueWhenScrubInstructionsTimerBegan
@property (nonatomic, getter=isShowingScrubInstructions) BOOL showingScrubInstructions; // ivar: _showingScrubInstructions
@property (nonatomic) BOOL showsLiveStreamingControls; // ivar: _showsLiveStreamingControls
@property (nonatomic) BOOL showsLoadingIndicator; // ivar: _showsLoadingIndicator
@property (readonly, nonatomic) NSArray *singleRowViews;
@property (readonly, nonatomic) AVButton *skipBackButton; // ivar: _skipBackButton
@property (readonly, nonatomic) AVButton *skipForwardButton; // ivar: _skipForwardButton
@property (readonly, nonatomic) AVButton *standardPlayPauseButton; // ivar: _standardPlayPauseButton
@property (readonly, nonatomic) AVButton *startLeftwardContentTransitionButton; // ivar: _startLeftwardContentTransitionButton
@property (readonly, nonatomic) AVButton *startRightwardContentTransitionButton; // ivar: _startRightwardContentTransitionButton
@property (retain, nonatomic) AVStyleSheet *styleSheet; // ivar: _styleSheet
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVLabel *timeRemainingLabel; // ivar: _timeRemainingLabel
@property (nonatomic) BOOL transportViewIncludesVolumeController; // ivar: _transportViewIncludesVolumeController


-(BOOL)_subviewIsCustomMenuItemView:(id)arg0 ;
-(CGFloat)_doubleRowLayoutSpacingAfterSubview:(id)arg0 ;
-(CGFloat)_rowSpacingForDoubleRowLayoutAfterRow:(NSUInteger)arg0 ;
-(CGFloat)_singeRowLayoutSpacingAfterSubview:(id)arg0 ;
-(CGFloat)layoutHeightThatFitsRowsStartingWithRow:(NSUInteger)arg0 ;
-(NSUInteger)_layoutItemDisplayPriorityForSubview:(id)arg0 ;
-(float)volumeControlsControllerTransportBarHeight:(id)arg0 ;
-(id)_scrubInstructionsAttributedText;
-(id)initWithFrame:(struct CGRect )arg0 styleSheet:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_layoutDoubleRowViews;
-(void)_layoutSingleRowViews;
-(void)_showScrubInstructions;
-(void)_updateCustomContentTransitioningInfoPanelLayout;
-(void)_updateFontSizes;
-(void)_updateScrubInstructionsFrame;
-(void)_updateScrubInstructionsLabelsText;
-(void)_updateVolumeControllerLayout;
-(void)avkit_reevaluateHiddenStateOfItem:(id)arg0 ;
-(void)beginScrubbing:(id)arg0 ;
-(void)endScrubbing:(id)arg0 ;
-(void)layoutSubviews;
-(void)reevaluateHiddenStateOfAllItems;
-(void)scrubberSlowKnobMovementDetected:(id)arg0 ;
-(void)scrubberValueChanged:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif