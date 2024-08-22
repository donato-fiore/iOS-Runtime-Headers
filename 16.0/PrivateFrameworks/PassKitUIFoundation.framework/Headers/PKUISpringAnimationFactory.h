// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKUISPRINGANIMATIONFACTORY_H
#define PKUISPRINGANIMATIONFACTORY_H

@class PKSpringAnimationFactory, NSString;
@protocol _UIBasicAnimationFactory;



@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory>



@property (copy, nonatomic) id *animationDelayHandler; // ivar: _animationDelayHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumVendedDelay; // ivar: _maximumVendedDelay
@property (readonly) Class superclass;


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_springAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)highFrameRateSpringAnimationForView:(id)arg0 withKeyPath:(id)arg1 reason:(unsigned short)arg2 ;
-(id)springAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;


@end


#endif