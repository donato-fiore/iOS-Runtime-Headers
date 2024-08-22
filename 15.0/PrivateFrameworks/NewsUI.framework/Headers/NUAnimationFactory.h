// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANIMATIONFACTORY_H
#define NUANIMATIONFACTORY_H

@class NSString, CAMediaTimingFunction;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // ivar: _mediaTimingFunction
@property (readonly) Class superclass;


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;
-(id)initWithMediaTimingFunction:(id)arg0 ;


@end


#endif