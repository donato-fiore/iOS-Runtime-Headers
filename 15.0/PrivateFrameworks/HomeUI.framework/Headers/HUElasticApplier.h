// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUELASTICAPPLIER_H
#define HUELASTICAPPLIER_H

@class CADisplayLink;


#import "HUApplier.h"

@interface HUElasticApplier : HUApplier

@property (nonatomic) BOOL applyOnlyOnProgressChanges; // ivar: _applyOnlyOnProgressChanges
@property (nonatomic) BOOL completesWhenAtRest; // ivar: _completesWhenAtRest
@property (nonatomic) CGFloat currentVelocity; // ivar: _currentVelocity
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSUInteger frameCount; // ivar: _frameCount
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat previousForce; // ivar: _previousForce
@property (nonatomic) BOOL progressBeginsFromInitialInputProgress; // ivar: _progressBeginsFromInitialInputProgress
@property (copy, nonatomic) id *progressInputBlock; // ivar: _progressInputBlock
@property (nonatomic) NSUInteger restingFrameCount; // ivar: _restingFrameCount
@property (nonatomic) CGFloat tension; // ivar: _tension


-(BOOL)complete:(BOOL)arg0 ;
-(BOOL)start;
-(id)init;
-(id)initWithProgressInputBlock:(id)arg0 ;
-(void)_invalidateDisplayLinkIfNecessary;
-(void)_updateProgressForInitialUpdate:(BOOL)arg0 ;


@end


#endif