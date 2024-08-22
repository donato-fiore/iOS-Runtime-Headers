// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLEGACYWALLPAPERWAKEANIMATOR_H
#define SBFLEGACYWALLPAPERWAKEANIMATOR_H

@class NSString, UIVisualEffectView;
@protocol SBFScreenWakeAnimationTarget;

#import <Foundation/Foundation.h>


@interface SBFLegacyWallpaperWakeAnimator : NSObject <SBFScreenWakeAnimationTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIVisualEffectView *wakeEffectView; // ivar: _wakeEffectView
@property (nonatomic) NSInteger wakeState; // ivar: _wakeState


-(BOOL)_shouldHideWakeEffectViewAfterUpdate;
-(NSInteger)_targetWakeStateForFadeIn:(BOOL)arg0 ;
-(id)_wakeEffectsForAnimatingWakeState:(NSInteger)arg0 ;
-(id)_wakeEffectsForPersistentWakeState:(NSInteger)arg0 ;
-(void)updateWakeEffectsForWake:(BOOL)arg0 ;
-(void)updateWakeEffectsForWake:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif