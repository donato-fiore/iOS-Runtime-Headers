// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREANIMATOR_H
#define SBSYSTEMAPERTUREANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface SBSystemApertureAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_settings, setter=_setSettings:) id *settings; // ivar: _settings
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_bsAnimationSettings;
-(id)initWithSettings:(id)arg0 ;
// -(void)_animateTransition:(id)arg0 actions:(id)arg1 completion:(unk)arg2  ;
-(void)animateTransition:(id)arg0 ;


@end


#endif