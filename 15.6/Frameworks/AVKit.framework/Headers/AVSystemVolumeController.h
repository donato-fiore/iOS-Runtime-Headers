// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSYSTEMVOLUMECONTROLLER_H
#define AVSYSTEMVOLUMECONTROLLER_H

@class NSString, NSNumber, AVSystemController;
@protocol AVVolumeHUDAssertionDelegate, AVVolumeController, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVSystemVolumeController : NSObject <AVVolumeHUDAssertionDelegate, AVVolumeController>

 {
    NSObject<OS_dispatch_queue> *_systemControllerQueue;
    BOOL _observingSystemController;
}


@property (nonatomic, getter=isChangingVolume) BOOL changingVolume; // ivar: _changingVolume
@property (nonatomic) BOOL currentRouteHasVolumeControl; // ivar: _currentRouteHasVolumeControl
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullyInitialized) BOOL fullyInitialized; // ivar: _fullyInitialized
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan; // ivar: _maximumTargetVolumeSinceChangingVolumeBegan
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden; // ivar: _prefersSystemVolumeHUDHidden
@property (retain, nonatomic) AVSystemController *sharedSystemController; // ivar: _sharedSystemController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *targetVolumeInternal; // ivar: _targetVolumeInternal
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) float volume; // ivar: _volume
@property (readonly, nonatomic) NSString *volumeCategory; // ivar: _volumeCategory
@property (nonatomic) BOOL volumeChangesThrottled; // ivar: _volumeChangesThrottled
@property (readonly, nonatomic) NSString *windowSceneSessionIdentifier; // ivar: _windowSceneSessionIdentifier


+(id)windowSceneVolumeHUDAssertions;
-(id)_requestSharedSystemController;
-(id)currentSystemController;
-(id)init;
-(void)_applyProposedVolumeIfNeeded;
-(void)_applyProposedVolumeImmediately;
-(void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg0 ;
-(void)_handleSystemControllerServerDiedNotification;
-(void)_handleSystemVolumeDidChangeNotification:(id)arg0 ;
-(void)_observeSystemControllerIfNeeded;
-(void)_performOnMainThread:(id)arg0 ;
-(void)_postNotificationForNameIfFullyInitialized:(id)arg0 userInfo:(id)arg1 ;
-(void)_removeVolumeHUDAssertionsForClientID:(id)arg0 ;
-(void)_setupSystemController;
-(void)_unobserveSystemControllerIfNeeded;
-(void)beginChangingVolume;
-(void)dealloc;
-(void)endChangingVolume;
-(void)setClientWithIdentifier:(id)arg0 forWindowSceneSessionWithIdentifier:(id)arg1 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg0 forSceneVolumeHudAssertion:(id)arg1 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg0 forWindowSceneSessionIdentifier:(id)arg1 ;
-(void)setTargetVolume:(float)arg0 ;


@end


#endif