// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSPRINGLOADEDINTERACTIONEFFECT_H
#define SBFSPRINGLOADEDINTERACTIONEFFECT_H

@class NSString;
@protocol UISpringLoadedInteractionEffect, SBFSpringLoadedInteractionEffectDelegate;

#import <Foundation/Foundation.h>


@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>

 {
    id<UISpringLoadedInteractionEffect> *_blinkEffect;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFSpringLoadedInteractionEffectDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFastBlinkAnimation; // ivar: _useFastBlinkAnimation


-(id)fastBlinkAnimation;
-(id)init;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif