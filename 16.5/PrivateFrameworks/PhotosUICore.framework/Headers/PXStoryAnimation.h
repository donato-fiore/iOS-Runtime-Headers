// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYANIMATION_H
#define PXSTORYANIMATION_H

@class NSString;
@protocol PXStoryMutableAnimation;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXStoryAnimation : PXObservable <PXStoryMutableAnimation>



@property (readonly, nonatomic) BOOL canBePaused; // ivar: _canBePaused
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (nonatomic) ? elapsedTime; // ivar: _elapsedTime
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isPaused; // ivar: _isPaused
@property (nonatomic) BOOL isStopped; // ivar: _isStopped
@property (nonatomic) ? lastElapsedTime; // ivar: _lastElapsedTime
@property (nonatomic) CGFloat pauseDeceleration; // ivar: _pauseDeceleration
@property (nonatomic) CGFloat pausedVelocity; // ivar: _pausedVelocity
@property (nonatomic) CGFloat resumeAcceleration; // ivar: _resumeAcceleration
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) ? time; // ivar: _time
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_invalidateTime;
-(void)_setNeedsUpdate;
-(void)_updateTime;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)stop;
-(void)wasStopped;


@end


#endif