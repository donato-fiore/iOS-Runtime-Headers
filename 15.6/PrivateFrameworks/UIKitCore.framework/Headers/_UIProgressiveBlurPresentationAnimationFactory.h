// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROGRESSIVEBLURPRESENTATIONANIMATIONFACTORY_H
#define _UIPROGRESSIVEBLURPRESENTATIONANIMATIONFACTORY_H

@class NSString;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface _UIProgressiveBlurPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory>



@property (readonly, nonatomic) NSUInteger curve; // ivar: _curve
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)initWithCurve:(NSUInteger)arg0 ;


@end


#endif