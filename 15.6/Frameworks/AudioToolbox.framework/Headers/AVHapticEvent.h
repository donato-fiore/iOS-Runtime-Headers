// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVHAPTICEVENT_H
#define AVHAPTICEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVHapticPlayerParameterCurve.h"

@interface AVHapticEvent : NSObject <NSSecureCoding>

 {
    ? _u;
    AVHapticPlayerFixedParameter _fixedParams;
    AVHapticPlayerParameterCurve *_paramCurve;
}


@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger eventCategory; // ivar: _eventCategory
@property (readonly) NSUInteger eventType;
@property (readonly) NSInteger fixedParamCount; // ivar: _fixedParamCount
@property (readonly) *AVHapticPlayerFixedParameter fixedParams;
@property (readonly) NSUInteger paramType;
@property (readonly) AVHapticPlayerParameterCurve *parameterCurve;
@property (readonly) CGFloat time; // ivar: _time
@property (readonly) float value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)eventWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 ;
+(id)eventWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)eventWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 parameters:(struct AVHapticPlayerFixedParameter *)arg2 count:(NSInteger)arg3 ;
+(id)eventWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 parameters:(struct AVHapticPlayerFixedParameter *)arg2 count:(NSInteger)arg3 duration:(CGFloat)arg4 ;
+(id)eventWithParameter:(NSUInteger)arg0 value:(float)arg1 time:(CGFloat)arg2 ;
+(id)eventWithParameterCurve:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(id)initWithEventType:(NSUInteger)arg0 time:(CGFloat)arg1 parameters:(struct AVHapticPlayerFixedParameter *)arg2 count:(NSInteger)arg3 duration:(CGFloat)arg4 ;
-(id)initWithParameter:(NSUInteger)arg0 value:(float)arg1 time:(CGFloat)arg2 ;
-(id)initWithParameterCurve:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif