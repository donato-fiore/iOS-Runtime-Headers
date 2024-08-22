// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTFACETRACKINGMANAGER_H
#define AVTFACETRACKINGMANAGER_H

@class AVTView, NSString, FBSDisplayLayoutMonitor, NSTimer;
@protocol AVTViewFaceTrackingDelegate, AVTUIRaiseGestureManagerDelegate, AVTFaceTrackingManagerDelegate;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTUIRaiseGestureManager.h"
#import "AVTUserInfoView.h"

@interface AVTFaceTrackingManager : NSObject <AVTViewFaceTrackingDelegate, AVTUIRaiseGestureManagerDelegate>



@property (readonly, nonatomic) AVTView *avatarView; // ivar: _avatarView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTFaceTrackingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (nonatomic) BOOL faceTrackingManagementPaused; // ivar: _faceTrackingManagementPaused
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger interruptionType; // ivar: _interruptionType
@property (readonly, copy, nonatomic) NSString *localizedDeviceName; // ivar: _localizedDeviceName
@property (retain, nonatomic) NSTimer *lowLightAndSensorOcclusionLockoutTimer; // ivar: _lowLightAndSensorOcclusionLockoutTimer
@property (retain, nonatomic) NSTimer *pauseTrackingTimer; // ivar: _pauseTrackingTimer
@property (readonly, nonatomic) AVTUIRaiseGestureManager *raiseGestureManager; // ivar: _raiseGestureManager
@property (nonatomic) BOOL shouldRecheckLowLightAndSensorOcclusionState; // ivar: _shouldRecheckLowLightAndSensorOcclusionState
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *trackingLostMessageTimer; // ivar: _trackingLostMessageTimer
@property (readonly, nonatomic) AVTUserInfoView *userInfoView; // ivar: _userInfoView


+(CGFloat)desiredUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg0 ;
-(id)initWithAvatarView:(id)arg0 raiseGestureManager:(id)arg1 environment:(id)arg2 ;
-(id)initWithAvatarView:(id)arg0 raiseGestureManager:(id)arg1 userInfoView:(id)arg2 environment:(id)arg3 ;
-(id)userInfoStringForCurrentTrackingState;
-(void)avatarView:(id)arg0 didUpdateWithFaceTrackingStatus:(BOOL)arg1 ;
-(void)avatarView:(id)arg0 didUpdateWithLowLightStatus:(BOOL)arg1 ;
-(void)avatarView:(id)arg0 didUpdateWithSensorOcclusionStatus:(BOOL)arg1 ;
-(void)avatarView:(id)arg0 faceTrackingSessionFailedWithError:(id)arg1 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg0 ;
-(void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg0 ;
-(void)cancelLowLightAndSensorOcclusionTimer;
-(void)dealloc;
-(void)invalidateFaceTrackingTimers;
-(void)layoutMonitorDidUpdateDisplayLayout:(id)arg0 withContext:(id)arg1 ;
-(void)raiseGestureManagerDidRecognizeRaiseGesture:(id)arg0 ;
-(void)resetForResumingTrackingAnimated:(BOOL)arg0 ;
-(void)resetForTrackingFoundAFaceAnimated:(BOOL)arg0 ;
-(void)resumeFaceTrackingIfNeededAnimated:(BOOL)arg0 ;
-(void)setupDisplayLayoutMonitor;
-(void)startTrackingLostTimers;
-(void)updateForPausingTracking;
-(void)updateForPausingTrackingWithLabel:(BOOL)arg0 ;
-(void)updateForTrackingLost;
-(void)updateInterruptionTypeIfNeeded:(NSUInteger)arg0 ;
-(void)updateUserInfoBackdropForCurrentLabel;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg0 ;
-(void)updateUserInfoLabelAlphaForFaceTrackingState:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif