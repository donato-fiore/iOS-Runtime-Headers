// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD34LOCKSCREENPOSTERCOLLECTIONVIEWCELL_H
#define _TTC11POSTERBOARD34LOCKSCREENPOSTERCOLLECTIONVIEWCELL_H

@class TtC11PosterBoard28PosterPairCollectionViewCell, UIScrollView;
@protocol CHSWidgetDescriptorProviderObserver, PREditingSceneViewControllerObserver;



@interface _TtC11PosterBoard34LockScreenPosterCollectionViewCell : TtC11PosterBoard28PosterPairCollectionViewCell <CHSWidgetDescriptorProviderObserver, PREditingSceneViewControllerObserver>

 {
    ? delegate;
    ? maximumVerticalRevealFraction;
    ? overlayView;
    ? liveContentView;
    ? liveFloatingView;
    ? isFloatingLayerInlined;
    ? isComplicationRowHidden;
    ? lockVibrancyConfiguration;
    ? editingSceneViewController;
    ? displayDate;
    ? shouldShowFocusButton;
    ? scrollableContentView;
    ? shadowView;
    ? defaultScrollAnimationDuration;
    ? maximumRevealProgressWhenRevealingDisallowed;
    ? descriptorProvider;
    ? floatingLayerSnapshotView;
    ? prominentController;
    ? floatingProminentController;
    ? titleStyleConfiguration;
    ? complicationLayout;
    ? floatingLayerSnapshotImage;
    ? focusButton;
    ? isFullyTransitionedToLockConfiguringAndEditing;
}


@property (nonatomic, readonly) BOOL layoutModeUsesFullscreenSizedMetrics;
@property (nonatomic, retain) UIScrollView *scrollView; // ivar: scrollView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)didMoveToWindow;
-(void)editingSceneViewControllerDidFinishShowingContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)presentFocusSelector;


@end


#endif