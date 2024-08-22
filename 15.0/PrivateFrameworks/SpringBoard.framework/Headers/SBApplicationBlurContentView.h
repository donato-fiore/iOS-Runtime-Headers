// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONBLURCONTENTVIEW_H
#define SBAPPLICATIONBLURCONTENTVIEW_H

@class UIView, NSString, NSMutableDictionary;


#import "SBApplicationBlurSnapshotGenerationContainerView.h"
#import "SBSceneViewAppIconView.h"

@interface SBApplicationBlurContentView : UIView {
    NSString *_bundleIdentifier;
    NSUInteger _state;
    NSMutableDictionary *_mapStateToCompletionBlocks;
    CGSize _targetViewOriginalSize;
    UIView *_targetViewToBlur;
    UIView *_unblurredRealSnapshotView;
    UIView *_unblurredCopySnapshotView;
    UIView *_liveBlurView;
    UIView *_blurredSnapshotView;
    id *_snapshotBlock;
    SBApplicationBlurSnapshotGenerationContainerView *_snapshotGenerationContainerView;
    UIView *_blurView;
}


@property (nonatomic) CGFloat blurDelay; // ivar: _blurDelay
@property (readonly, nonatomic) SBSceneViewAppIconView *iconView; // ivar: _iconView
@property (nonatomic) CGFloat iconViewScale; // ivar: _iconViewScale


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 bundleIdentifier:(id)arg1 icon:(id)arg2 targetViewToBlur:(id)arg3 initialIconScale:(CGFloat)arg4 targetViewSnapshotProviderBlock:(id)arg5 ;
-(id)initWithFrame:(struct CGRect )arg0 bundleIdentifier:(id)arg1 targetViewToBlur:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 bundleIdentifier:(id)arg1 targetViewToBlur:(id)arg2 initialIconScale:(CGFloat)arg3 ;
// -(void)_addCompletionBlock:(id)arg0 forState:(unk)arg1  ;
-(void)_doAnimationToBlurredSnapshotWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)_doBlurGenerationWithCompletion:(id)arg0 ;
-(void)_fireCompletionBlocksForState:(NSUInteger)arg0 ;
-(void)_setState:(NSUInteger)arg0 ;
-(void)animateToBlurredSnapshotWithFactory:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)generateAndAnimateToBlurredSnapshotWithAnimationFactory:(id)arg0 completion:(id)arg1 ;
-(void)generateBlurredSnapshotWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif