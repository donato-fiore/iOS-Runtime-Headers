// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUDYNAMICSTATEANIMATIONAPPLIER_H
#define HUDYNAMICSTATEANIMATIONAPPLIER_H



#import "HUDisplayLinkApplier.h"
#import "HUAnimationSettings.h"

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier

@property (readonly, copy, nonatomic) HUAnimationSettings *animationSettings; // ivar: _animationSettings
@property (nonatomic) BOOL hasUpdatedProgress; // ivar: _hasUpdatedProgress
@property (nonatomic) CGFloat initialProgress; // ivar: _initialProgress
@property (nonatomic) CGFloat lastTargetChangeTime; // ivar: _lastTargetChangeTime
@property (nonatomic) CGFloat preInterpolatedProgress; // ivar: _preInterpolatedProgress
@property (nonatomic) CGFloat targetProgress; // ivar: _targetProgress


-(BOOL)start;
-(CGFloat)effectiveInputProgressForBlock:(id)arg0 ;
-(id)initWithAnimationSettings:(id)arg0 initialProgress:(CGFloat)arg1 progressInputBlock:(id)arg2 ;
-(void)updateProgress:(CGFloat)arg0 ;


@end


#endif