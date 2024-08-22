// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERVOLUMECONTROLLER_H
#define AVPLAYERVOLUMECONTROLLER_H

@class NSString;
@protocol AVVolumeController;

#import <Foundation/Foundation.h>

#import "AVObservationController.h"
#import "AVPlayerController.h"

@interface AVPlayerVolumeController : NSObject <AVVolumeController>



@property (nonatomic, getter=isChangingVolume) BOOL changingVolume; // ivar: _changingVolume
@property (readonly, nonatomic) BOOL currentRouteHasVolumeControl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVObservationController *keyValueObservationController; // ivar: _keyValueObservationController
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden; // ivar: _prefersSystemVolumeHUDHidden
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume;


-(id)init;
-(void)beginChangingVolume;
-(void)dealloc;
-(void)endChangingVolume;
-(void)setClientWithIdentifier:(id)arg0 forWindowSceneSessionWithIdentifier:(id)arg1 ;
-(void)setTargetVolume:(float)arg0 ;


@end


#endif