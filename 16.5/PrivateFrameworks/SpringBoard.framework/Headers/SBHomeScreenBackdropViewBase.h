// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENBACKDROPVIEWBASE_H
#define SBHOMESCREENBACKDROPVIEWBASE_H

@class UIView, NSMutableSet;
@protocol SBHomeScreenBackdropViewBaseDelegate;


#import "SBFluidSwitcherAnimationSettings.h"

@interface SBHomeScreenBackdropViewBase : UIView {
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
}


@property (weak, nonatomic) NSObject<SBHomeScreenBackdropViewBaseDelegate> *delegate; // ivar: _delegate


-(BOOL)isOpaque;
-(BOOL)requiresBackdropView;
-(BOOL)requiresLiveBackdropView;
-(id)backdropBlurSettings;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)beginRequiringBackdropViewForReason:(id)arg0 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)endRequiringBackdropViewForReason:(id)arg0 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)setBlurProgress:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif