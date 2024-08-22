// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCAMPHYSICALCAPTURENOTIFIER_H
#define CKCAMPHYSICALCAPTURENOTIFIER_H

@class SBSHardwareButtonService;
@protocol CKCamPhysicalCaptureNotifierDelegate;

#import <Foundation/Foundation.h>


@interface CKCamPhysicalCaptureNotifier : NSObject

@property (retain, nonatomic) SBSHardwareButtonService *_cameraButtonRequest; // ivar: __cameraButtonRequest
@property (nonatomic, setter=_setVolumeDownButtonState:) NSInteger _volumeDownButtonState; // ivar: __volumeDownButtonState
@property (nonatomic, setter=_setVolumeUpButtonState:) NSInteger _volumeUpButtonState; // ivar: __volumeUpButtonState
@property (weak, nonatomic) NSObject<CKCamPhysicalCaptureNotifierDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, setter=_setState:) NSInteger state; // ivar: _state


-(id)init;
-(void)_handleVolumeDownButtonDownNotification:(id)arg0 ;
-(void)_handleVolumeDownButtonUpNotification:(id)arg0 ;
-(void)_handleVolumeUpButtonDownNotification:(id)arg0 ;
-(void)_handleVolumeUpButtonUpNotification:(id)arg0 ;
-(void)_updateCaptureButtonNotifications;
-(void)_updateStateAndNotifyDelegateIfNeeded;
-(void)dealloc;


@end


#endif