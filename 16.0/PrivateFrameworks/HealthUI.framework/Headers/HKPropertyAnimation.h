// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPROPERTYANIMATION_H
#define HKPROPERTYANIMATION_H

@class NSDate, NSString, CAMediaTimingFunction;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKPropertyAnimation : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *appliedDate; // ivar: _appliedDate
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) id *fromValue; // ivar: _fromValue
@property (retain, nonatomic) NSString *property; // ivar: _property
@property (copy, nonatomic) id *propertyApplicationFunction; // ivar: _propertyApplicationFunction
@property (nonatomic) NSInteger secondaryAnimationCurve; // ivar: _secondaryAnimationCurve
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (retain, nonatomic) id *toValue; // ivar: _toValue


-(BOOL)_isCompleted;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_applyWithCurrentDate:(id)arg0 ;
-(void)_finishCancelled:(BOOL)arg0 ;
-(void)_validate;


@end


#endif