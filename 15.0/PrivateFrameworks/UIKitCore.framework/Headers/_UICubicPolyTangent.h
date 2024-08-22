// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICUBICPOLYTANGENT_H
#define _UICUBICPOLYTANGENT_H

@class NSString;
@protocol _UISettingsKeyObserver;

#import <Foundation/Foundation.h>


@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver>



@property (nonatomic) CGFloat cubicGain; // ivar: _cubicGain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialLinearGain; // ivar: _initialLinearGain
@property (readonly, nonatomic) BOOL isEmpty;
@property (nonatomic) CGFloat parabolicGain; // ivar: _parabolicGain
@property (nonatomic) CGFloat quarticGain; // ivar: _quarticGain
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tangentCbrtSpeed; // ivar: _tangentCbrtSpeed
@property (nonatomic) CGFloat tangentHyperCbrtSpeed; // ivar: _tangentHyperCbrtSpeed
@property (nonatomic) CGFloat tangentLineSpeed; // ivar: _tangentLineSpeed
@property (nonatomic) CGFloat tangentSqrtSpeed; // ivar: _tangentSqrtSpeed


+(id)keyboardTrackpadCurve;
-(CGFloat)clipForIOFixedMath:(CGFloat)arg0 polynomialPower:(int)arg1 tangencyStartingAt:(CGFloat)arg2 ;
-(CGFloat)gainForPower:(int)arg0 ;
-(CGFloat)piecewiseCubicAcceleratedSpeed:(CGFloat)arg0 ;
-(CGFloat)quarticDerivative:(CGFloat)arg0 ;
-(CGFloat)quarticFunction:(CGFloat)arg0 ;
-(CGFloat)quarticTangentFunction:(CGFloat)arg0 powerOfEarliestTangent:(int)arg1 ;
-(CGFloat)tangentSpeedForPower:(int)arg0 ;
-(id)init;
-(int)RootPowerOfEarliestTangent:(int)arg0 ;
-(void)clipGainsForIOFixedMathWithTangency;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif