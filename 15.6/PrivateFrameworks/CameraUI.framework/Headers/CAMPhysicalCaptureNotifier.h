// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPHYSICALCAPTURENOTIFIER_H
#define CAMPHYSICALCAPTURENOTIFIER_H

@class UIView;
@protocol BSInvalidatable, CAMPhysicalCaptureNotifierDelegate;

#import <Foundation/Foundation.h>


@interface CAMPhysicalCaptureNotifier : NSObject

@property (retain, nonatomic) NSObject<BSInvalidatable> *_cameraButtonRequest; // ivar: __cameraButtonRequest
@property (readonly, nonatomic) UIView *_view; // ivar: __view
@property (nonatomic, setter=_setVolumeDownButtonState:) NSInteger _volumeDownButtonState; // ivar: __volumeDownButtonState
@property (nonatomic, setter=_setVolumeUpButtonState:) NSInteger _volumeUpButtonState; // ivar: __volumeUpButtonState
@property (weak, nonatomic) NSObject<CAMPhysicalCaptureNotifierDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, setter=_setState:) NSInteger state; // ivar: _state


-(id)initWithView:(id)arg0 ;
-(void)_handleVolumeDownButtonDownNotification:(id)arg0 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg0 ;
-(void)_handleVolumeUpButtonDownNotification:(id)arg0 ;
-(void)_handleVolumeUpButtonUpNotification:(id)arg0 ;
-(void)_updateCaptureButtonNotifications;
-(void)_updateStateAndNotifyDelegateIfNeededForButton:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif