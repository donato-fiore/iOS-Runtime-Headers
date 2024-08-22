// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERAVIEW_H
#define HUCAMERAVIEW_H

@class UIView, UIActivityIndicatorView, NSLayoutYAxisAnchor, NSLayoutConstraint, HMCameraSource, HMCameraView, UIImageView, UIView<HUCameraErrorViewable>, NADecayingTimer, NSArray;


#import "HUCameraBadgeView.h"
#import "HURemoteContextHostingView.h"
#import "HUCameraErrorContent.h"

@interface HUCameraView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSLayoutYAxisAnchor *badgeBottomAnchor; // ivar: _badgeBottomAnchor
@property (retain, nonatomic) NSLayoutConstraint *badgeBottomConstraint; // ivar: _badgeBottomConstraint
@property (nonatomic, getter=isBadgeHidden) BOOL badgeHidden;
@property (nonatomic) UIOffset badgeOffset; // ivar: _badgeOffset
@property (retain, nonatomic) NSLayoutConstraint *badgeTrailingConstraint; // ivar: _badgeTrailingConstraint
@property (readonly, nonatomic) HUCameraBadgeView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) NSLayoutConstraint *cameraAspectRatioConstraint; // ivar: _cameraAspectRatioConstraint
@property (readonly, nonatomic) HURemoteContextHostingView *cameraContainerView; // ivar: _cameraContainerView
@property (readonly, nonatomic) CGRect cameraContentFrame;
@property (retain, nonatomic) UIView *cameraDimmingView; // ivar: _cameraDimmingView
@property (readonly, nonatomic) UIView *cameraOverlaySnapshot;
@property (readonly, nonatomic) UIView *cameraOverlayView; // ivar: _cameraOverlayView
@property (retain, nonatomic) HMCameraSource *cameraSource;
@property (readonly, nonatomic) HMCameraView *cameraView;
@property (retain, nonatomic) UIImageView *demoSnapshotImageView; // ivar: _demoSnapshotImageView
@property (readonly, nonatomic) CGRect derivedCameraContentFrame;
@property (retain, nonatomic) HUCameraErrorContent *errorContent; // ivar: _errorContent
@property (retain, nonatomic) UIView<HUCameraErrorViewable> *errorView; // ivar: _errorView
@property (nonatomic) BOOL hideCameraContentWhenDisplayingErrors; // ivar: _hideCameraContentWhenDisplayingErrors
@property (nonatomic) NSUInteger maskedCameraCorners; // ivar: _maskedCameraCorners
@property (retain, nonatomic) UIView<HUCameraErrorViewable> *overrideErrorView; // ivar: _overrideErrorView
@property (nonatomic) BOOL shouldRespectAspectRatio; // ivar: _shouldRespectAspectRatio
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (retain, nonatomic) NADecayingTimer *snapshotAgeUpdateTimer; // ivar: _snapshotAgeUpdateTimer
@property (retain, nonatomic) NSArray *staticConstraints; // ivar: _staticConstraints


+(BOOL)requiresConstraintBasedLayout;
-(CGFloat)_continuousCornerRadius;
-(NSInteger)contentModeForAspectRatio:(CGFloat)arg0 ;
-(id)backgroundColor;
-(id)cameraContentSnapshot;
-(id)init;
-(id)initWithBadgeView:(id)arg0 ;
-(void)_scheduleNextSnapshotAgeUpdateForCaptureDate:(id)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateBadgeView;
-(void)_updateBadgeViewReschedulingTimerIfNecessary:(BOOL)arg0 ;
-(void)_updateErrorAndActivityIndicatorVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateMaskedCameraCorners;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCameraContentMode:(NSInteger)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif