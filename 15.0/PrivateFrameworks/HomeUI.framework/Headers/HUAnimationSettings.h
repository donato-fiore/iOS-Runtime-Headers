// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUANIMATIONSETTINGS_H
#define HUANIMATIONSETTINGS_H

@class NSString, CAMediaTimingFunction;
@protocol NSCopying, _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat durationWithSpeed;
@property (readonly) NSUInteger hash;
@property (nonatomic) float repeatCount; // ivar: _repeatCount
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


+(id)settingsWithDuration:(CGFloat)arg0 ;
+(id)settingsWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 ;
-(CGFloat)interpolatedProgressForProgress:(CGFloat)arg0 ;
-(CGFloat)interpolatedProgressForTime:(CGFloat)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)settingsSpedUpByFactor:(CGFloat)arg0 ;


@end


#endif