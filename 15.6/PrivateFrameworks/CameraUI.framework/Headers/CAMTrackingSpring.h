// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTRACKINGSPRING_H
#define CAMTRACKINGSPRING_H



#import "CAMSpring.h"

@interface CAMTrackingSpring : CAMSpring

@property (nonatomic, setter=_convergenceStartValue:) CGFloat _convergenceStartValue; // ivar: __convergenceStartValue
@property (nonatomic, setter=_setSecondaryTarget:) ? _secondaryTarget; // ivar: __secondaryTarget
@property (retain, nonatomic, setter=_setSettlingSpring:) CAMSpring *_settleProgressSpring; // ivar: __settleProgressSpring
@property (readonly, nonatomic) CGFloat convergenceProgress;
@property (readonly, nonatomic) BOOL hasSecondaryTarget;


-(BOOL)isConverged;
-(id)initWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 epsilon:(CGFloat)arg2 ;
-(void)_beginConverging;
-(void)_convergenceStartValue:(CGFloat)arg0 ;
-(void)removeSecondaryTargetAnimated:(BOOL)arg0 ;
-(void)resetToValue:(CGFloat)arg0 ;
-(void)resetToValue:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setSecondaryTarget:(CGFloat)arg0 withStrength:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)setTarget:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)updateForTimestamp:(CGFloat)arg0 ;


@end


#endif