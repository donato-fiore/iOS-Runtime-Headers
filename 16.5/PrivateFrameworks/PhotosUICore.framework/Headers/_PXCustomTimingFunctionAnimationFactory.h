// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXCUSTOMTIMINGFUNCTIONANIMATIONFACTORY_H
#define _PXCUSTOMTIMINGFUNCTIONANIMATIONFACTORY_H

@class NSString, CAMediaTimingFunction;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface _PXCustomTimingFunctionAnimationFactory : NSObject <_UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


+(id)factoryWithTimingFunction:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 ;


@end


#endif