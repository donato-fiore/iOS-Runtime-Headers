// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICUBICTIMINGPARAMETERS_H
#define UICUBICTIMINGPARAMETERS_H

@protocol UITimingCurveProvider;

#import <Foundation/Foundation.h>

#import "UICubicTimingParameters.h"
#import "UISpringTimingParameters.h"
#import "_UIViewCubicTimingFunction.h"

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider>



@property (readonly, nonatomic) NSInteger animationCurve; // ivar: _animationCurve
@property (readonly, nonatomic) CGPoint controlPoint1;
@property (readonly, nonatomic) CGPoint controlPoint2;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (retain, nonatomic) UISpringTimingParameters *springTimingParameters; // ivar: _springTimingParameters
@property (readonly, nonatomic) NSInteger timingCurveType; // ivar: _timingCurveType
@property (readonly, nonatomic) _UIViewCubicTimingFunction *timingFunction; // ivar: _timingFunction


-(BOOL)isEqual:(id)arg0 ;
-(id)_mediaTimingFunction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectiveTimingFunction;
-(id)init;
-(id)initWithAnimationCurve:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithControlPoint1:(struct CGPoint )arg0 controlPoint2:(struct CGPoint )arg1 ;
-(id)initWithCustomCurve:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif