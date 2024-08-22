// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERCONTROLLERVOLUMEANIMATOR_H
#define AVPLAYERCONTROLLERVOLUMEANIMATOR_H


#import <Foundation/Foundation.h>

#import "AVPlayerController.h"

@interface AVPlayerControllerVolumeAnimator : NSObject

@property (nonatomic, getter=isAnimatingAwayFromZero) BOOL animatingAwayFromZero; // ivar: _animatingAwayFromZero
@property (nonatomic, getter=isAnimatingTowardsZero) BOOL animatingTowardsZero; // ivar: _animatingTowardsZero
@property (readonly, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) CGFloat volumeToRestore; // ivar: _volumeToRestore


-(BOOL)canAnimateVolumeAwayFromZero;
-(BOOL)canAnimateVolumeTowardsZero;
-(BOOL)currentRouteHasVolumeControl;
-(id)initWithPlayerController:(id)arg0 ;
-(void)restoreVolumeIfNeeded;
-(void)setProgressAwayFromZero:(CGFloat)arg0 ;
-(void)setProgressTowardsZero:(CGFloat)arg0 ;


@end


#endif