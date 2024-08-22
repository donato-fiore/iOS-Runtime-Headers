// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUICABASICANIMATIONFACTORY_H
#define CCUICABASICANIMATIONFACTORY_H

@class NSString;
@protocol CCUICAAnimationFactory;

#import <Foundation/Foundation.h>

#import "CCUICABasicAnimationParameters.h"

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory>

 {
    CCUICABasicAnimationParameters *_parameters;
    CGFloat _speed;
}


@property (readonly, nonatomic) CGFloat animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_animation;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)initWithParameters:(id)arg0 speed:(CGFloat)arg1 ;


@end


#endif