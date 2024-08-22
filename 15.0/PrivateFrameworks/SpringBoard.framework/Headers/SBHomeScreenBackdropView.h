// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENBACKDROPVIEW_H
#define SBHOMESCREENBACKDROPVIEW_H

@class MTMaterialView, UIImage, UIImageView, UIViewFloatAnimatableProperty;


#import "SBHomeScreenBackdropViewBase.h"

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase {
    MTMaterialView *_materialView;
    UIImage *_blurredContentSnapshotImage;
    UIImageView *_blurredContentSnapshotImageView;
    NSUInteger _materialViewAnimationCount;
    BOOL _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}




-(BOOL)isOpaque;
-(id)homeScreenBlurredContentSnapshotImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 materialRecipe:(NSInteger)arg1 scaleAdjustment:(id)arg2 ;
-(void)_configureBackdropAnimatableProperty;
-(void)_invalidateBackdropSnapshot;
-(void)_resetHomeScreenBlurredContentSnapshotImage;
-(void)_setupBackdropViewWithRecipe:(NSInteger)arg0 scaleAdjustment:(id)arg1 ;
-(void)_updateBackdropViewIfNeeded;
-(void)_updateBackdropViewIfNeededInvalidatingSnapshot:(BOOL)arg0 ;
-(void)beginRequiringBackdropViewForReason:(id)arg0 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)endRequiringBackdropViewForReason:(id)arg0 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)setBlurProgress:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif