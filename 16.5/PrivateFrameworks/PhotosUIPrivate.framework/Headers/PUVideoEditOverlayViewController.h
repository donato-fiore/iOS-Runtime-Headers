// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUVIDEOEDITOVERLAYVIEWCONTROLLER_H
#define PUVIDEOEDITOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSString, NUMediaView, CALayer, PXUISubjectTrackingView;
@protocol PXSubjectTrackingViewDelegate, PUVideoEditOverlayViewControllerDelegate;



@interface PUVideoEditOverlayViewController : UIViewController <PXSubjectTrackingViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabledForCinematographyScriptLoad; // ivar: _disabledForCinematographyScriptLoad
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NUMediaView *mediaView; // ivar: _mediaView
@property (weak, nonatomic) NSObject<PUVideoEditOverlayViewControllerDelegate> *overlayControllerDelegate; // ivar: _overlayControllerDelegate
@property (retain, nonatomic) CALayer *safeAreaMask; // ivar: _safeAreaMask
@property (readonly) Class superclass;
@property (retain, nonatomic) PXUISubjectTrackingView *trackingView; // ivar: _trackingView


-(id)composition;
-(id)compositionController;
-(id)initWithMediaView:(id)arg0 cineController:(id)arg1 ;
-(id)localizedStringForCinematicTrackingBadgeMessage:(NSInteger)arg0 ;
-(id)newFocusStatusBadge;
-(id)newTrackingViewWithFrame:(struct CGRect )arg0 initialState:(NSInteger)arg1 ;
-(struct ? )unadjustedTimeForPlayerTime:(struct ? )arg0 ;
-(struct CGRect )rectForFocusStateBadge:(id)arg0 ;
-(void)_setState:(NSInteger)arg0 forView:(id)arg1 animated:(BOOL)arg2 ;
-(void)enableUIForCinematographyScriptLoad:(BOOL)arg0 ;
-(void)frameTimeDidChange;
-(void)interactionBegan;
-(void)loadView;
-(void)objectTrackingFinishedWithSuccess:(BOOL)arg0 ;
-(void)objectTrackingStartedAtTime:(struct ? )arg0 ;
-(void)renderDidChange:(BOOL)arg0 ;
-(void)scriptDidUpdate;
-(void)setMessage:(id)arg0 forFocusStateBadge:(id)arg1 ;
-(void)setNeedsUpdateTrackingFrame;
-(void)setTrackingInProgressTextForFocusStateBadge:(id)arg0 ;
-(void)showTrackingInformationalString:(id)arg0 ;
-(void)subjectFocusStateDidChange:(NSInteger)arg0 forBadge:(id)arg1 focusedDisparity:(CGFloat)arg2 ;
-(void)subjectTrackingStateDidChange:(NSInteger)arg0 forView:(id)arg1 animated:(BOOL)arg2 ;
-(void)trackedObjectWasUpdatedAtTime:(struct ? )arg0 shouldStop:(*BOOL)arg1 ;
-(void)trackingWasEdited;
-(void)trackingWasEditedAtTime:(struct ? )arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif