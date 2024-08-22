// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSUBJECTTRACKINGVIEW_H
#define PXSUBJECTTRACKINGVIEW_H

@class UIView, PTCinematographyFrame, NSString, NSDictionary, NSTimer, NUMediaView, NSNumber;
@protocol PTCinematographyScriptChanges, PXSubjectTrackingViewDelegate, PXSubjectTrackingLayoutDelegate;


#import "PXCinematicEditController.h"

@interface PXSubjectTrackingView : UIView <PTCinematographyScriptChanges>



@property (nonatomic) BOOL badgeVisibleAndWillAutoClose; // ivar: _badgeVisibleAndWillAutoClose
@property (readonly, nonatomic) PXCinematicEditController *cineController; // ivar: _cineController
@property (retain, nonatomic) PTCinematographyFrame *cinematographyFrame; // ivar: _cinematographyFrame
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSubjectTrackingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *detectionViewCache; // ivar: _detectionViewCache
@property (readonly, nonatomic) NSInteger focusState; // ivar: _focusState
@property (retain, nonatomic) UIView *focusStateBadge; // ivar: _focusStateBadge
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *hideFocusStateBadgeTimer; // ivar: _hideFocusStateBadgeTimer
@property (nonatomic) NSInteger inProgressTrackID; // ivar: _inProgressTrackID
@property (retain, nonatomic) UIView *inProgressTrackingView; // ivar: _inProgressTrackingView
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) CGFloat lastLayoutTime; // ivar: _lastLayoutTime
@property (weak, nonatomic) NSObject<PXSubjectTrackingLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (readonly, nonatomic) NUMediaView *mediaView; // ivar: _mediaView
@property (nonatomic) BOOL needsUpdateFrame; // ivar: _needsUpdateFrame
@property (nonatomic) BOOL needsUpdateFrameTime; // ivar: _needsUpdateFrameTime
@property (nonatomic) BOOL needsUpdateViewCache; // ivar: _needsUpdateViewCache
@property (retain, nonatomic) id *playbackTimeObserver; // ivar: _playbackTimeObserver
@property (retain, nonatomic) NSNumber *primaryKey; // ivar: _primaryKey
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewCanBeEnabled; // ivar: _viewCanBeEnabled
@property (nonatomic) BOOL viewEnabled; // ivar: _viewEnabled


-(BOOL)_focusOnFixedLocationAtDetection:(id)arg0 strong:(BOOL)arg1 ;
-(BOOL)_focusOnFixedLocationAtPoint:(struct CGPoint )arg0 strong:(BOOL)arg1 ;
-(BOOL)_focusOnGroup:(NSInteger)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)_focusOnTrackWithID:(NSInteger)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)_isValidTrackingRect:(struct CGRect )arg0 ;
-(BOOL)focusOnDetection:(id)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)focusOnTrack:(id)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(CGFloat)_smoothenFromValue:(CGFloat)arg0 toNewValue:(CGFloat)arg1 forTime:(CGFloat)arg2 tolerance:(CGFloat)arg3 ;
-(NSInteger)addFocusTrack:(id)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(id)_axDescriptionForCacheKey:(id)arg0 ;
-(id)_hitDetectionAtPoint:(struct CGPoint )arg0 ;
-(id)initWithMediaView:(id)arg0 cineController:(id)arg1 ;
-(struct ? )_currentCinematographyTime;
-(struct CGPoint )normalizedPointForViewPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_reframeWithinVideo:(struct CGRect )arg0 isFixedFocus:(BOOL)arg1 ;
-(struct CGRect )frameForDetection:(id)arg0 ;
-(struct CGRect )viewFrameForNormalizedRect:(struct CGRect )arg0 ;
-(void)_disparitySampleFinishedWithResponse:(id)arg0 time:(struct ? )arg1 rect:(struct CGRect )arg2 strong:(BOOL)arg3 ;
-(void)_finishedProcessingTrackedObject:(id)arg0 ;
-(void)_newTrackWasAddedAndFocusedAtTime:(struct ? )arg0 ;
-(void)_objectTrackingStartedAtTime:(struct ? )arg0 ;
-(void)_playbackTimeDidUpdate;
-(void)_setPrimaryDetection:(id)arg0 focusState:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_trackAndFocusObjectAtPoint:(struct CGPoint )arg0 strong:(BOOL)arg1 ;
-(void)_trackedObjectAtPoint:(struct CGPoint )arg0 failedWithError:(id)arg1 ;
-(void)_trackedObjectAtPoint:(struct CGPoint )arg0 finishedWithResponse:(id)arg1 trackStartTime:(struct ? )arg2 strongTrack:(BOOL)arg3 ;
-(void)_trackedObjectWasUpdatedAtTime:(struct ? )arg0 trackedRect:(struct CGRect )arg1 confidence:(float)arg2 shouldStop:(*BOOL)arg3 ;
-(void)_updateCinematographyFrameWithTime:(struct ? )arg0 ;
-(void)_updateDetectionViewCache;
-(void)_updateFocusStateAnimated:(BOOL)arg0 ;
-(void)decisionsDidChangeInScript:(id)arg0 timeRange:(struct ? )arg1 ;
-(void)enableUIForCinematographyScriptLoad:(BOOL)arg0 ;
-(void)framesDidChangeInScript:(id)arg0 timeRange:(struct ? )arg1 ;
-(void)handleDoubleSelectOnPoint:(struct CGPoint )arg0 ;
-(void)handleInteractionBegan;
-(void)handleLongSelectOnPoint:(struct CGPoint )arg0 ;
-(void)handleSingleSelectOnPoint:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)renderDidChange:(BOOL)arg0 ;
-(void)scriptDidUpdate;
-(void)showTrackingInformationalString:(id)arg0 ;


@end


#endif