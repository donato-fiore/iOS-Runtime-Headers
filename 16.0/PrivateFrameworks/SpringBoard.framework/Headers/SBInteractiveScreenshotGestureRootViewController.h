// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREROOTVIEWCONTROLLER_H
#define SBINTERACTIVESCREENSHOTGESTUREROOTVIEWCONTROLLER_H

@class UIViewController, SSChromePlaceholderViewController, SBOrientationTransformWrapperView, UIStatusBar, SSFlashView, UIView, UIViewFloatAnimatableProperty, NSMutableArray, UIImageView, FBScene, UIView<UIScenePresentation>, SBFFluidBehaviorSettings, NSString;
@protocol BSInvalidatable, UIScenePresenter, OS_dispatch_queue, SBInteractiveScreenshotGestureRootViewControllerDelegate;


#import "_SBInteractiveScreenshotGestureBackdropView.h"
#import "SBInteractiveScreenshotGestureCropsView.h"
#import "_SBInteractiveScreenshotGestureReplicatorView.h"
#import "SBInteractiveScreenshotSettings.h"

@interface SBInteractiveScreenshotGestureRootViewController : UIViewController <BSInvalidatable>

 {
    _SBInteractiveScreenshotGestureBackdropView *_contentCapturingView;
    SSChromePlaceholderViewController *_chromePlaceholderViewController;
    SBOrientationTransformWrapperView *_chromePlaceholderOrientationWrapperView;
    UIStatusBar *_chromePlaceholderStatusBar;
    _SBInteractiveScreenshotGestureBackdropView *_contentBackdropView;
    SBInteractiveScreenshotGestureCropsView *_cropsView;
    SSFlashView *_flashView;
    CGPoint _gesturePortraitAnchorPoint;
    BOOL _hasCrossedCommitThreshold;
    BOOL _hasPreparedInitialLayout;
    UIView *_materialView;
    UIViewFloatAnimatableProperty *_cancellationCommitProgressAnimatableProperty;
    NSMutableArray *_cropLinesAlphaMultiPartAnimations;
    UIViewFloatAnimatableProperty *_cropsTrackingDiscreteAnimationProgressAnimatableProperty;
    UIViewFloatAnimatableProperty *_cropsProgressPresentationValueAnimatableProperty;
    UIViewFloatAnimatableProperty *_cropsProgressSeparatedValuesAnimatableProperty;
    UIViewFloatAnimatableProperty *_transformProgressAnimatableProperty;
    UIViewFloatAnimatableProperty *_translationXAnimatableProperty;
    UIViewFloatAnimatableProperty *_translationYAnimatableProperty;
    _SBInteractiveScreenshotGestureReplicatorView *_replicatorView;
    UIImageView *_screenshotImageView;
    UIView *_screenshotContainerView;
    SBInteractiveScreenshotSettings *_settings;
    FBScene *_sourceScene;
    UIView<UIScenePresentation> *_sourceScenePresentationView;
    id<UIScenePresenter> *_sourceScenePresenter;
    UIView *_topContentContainerView;
    SBFFluidBehaviorSettings *_trackingCropsAnimationSettings;
    NSMutableArray *_gestureCommitProgressUpdates;
    NSMutableArray *_gestureCommitProgressUpdateTimestamps;
    NSObject<OS_dispatch_queue> *_accessQueue;
    CGFloat _queue_cropsCornerContentPadding;
    CGFloat _queue_cropsCornerLineWidth;
    CGFloat _queue_displayCornerRadius;
    CGFloat _queue_displayScale;
    NSInteger _queue_gestureStyle;
    NSInteger _queue_gestureTouchInterfaceOrientation;
    BOOL _queue_hasCommittedScreenshot;
    CGRect _queue_portraitBounds;
    CGRect _queue_screenshotContentFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInteractiveScreenshotGestureRootViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int flashViewLayerContextID;
@property (readonly, nonatomic) NSUInteger flashViewLayerRenderID;
@property (nonatomic) NSInteger gestureStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isGestureStyleDisabled:(NSInteger)arg0 ;
-(BOOL)_isGestureStyleReducedMotion:(NSInteger)arg0 ;
-(CGFloat)_currentCommitProgressVelocity;
-(CGFloat)_gestureCommitProgressUpdateVelocityOverTimeInterval:(CGFloat)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createFlashViewWithFrame:(struct CGRect )arg0 ;
-(id)_createMaterialViewWithFrame:(struct CGRect )arg0 groupName:(id)arg1 isCaptureOnly:(BOOL)arg2 ;
-(id)_createScreenshotImageViewWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(struct CATransform3D )_anchoredTransformForAnchorPoint:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 center:(struct CGPoint )arg2 transform:(struct CATransform3D )arg3 ;
-(struct CATransform3D )_contentTransformForCommitProgress:(CGFloat)arg0 contentInsets:(struct UIEdgeInsets )arg1 additionalContentTranslation:(struct CGPoint )arg2 ;
-(struct CATransform3D )_inverseContentTransformForCommitProgress:(CGFloat)arg0 contentInsets:(struct UIEdgeInsets )arg1 additionalContentTranslation:(struct CGPoint )arg2 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)_addGestureUpdateWithCommitProgress:(CGFloat)arg0 timestamp:(CGFloat)arg1 ;
-(void)_cancellationCommitProgressAnimatablePropertyPresentationValueDidChange;
-(void)_getContentTranslation:(struct CGPoint *)arg0 scale:(struct CGPoint *)arg1 forCommitProgress:(CGFloat)arg2 contentInsets:(struct UIEdgeInsets )arg3 additionalContentTranslation:(struct CGPoint )arg4 ;
-(void)_getDistanceTraveled:(*CGFloat)arg0 fullDistance:(*CGFloat)arg1 commitProgress:(*CGFloat)arg2 forTranslationFromCorner:(struct CGPoint )arg3 bounds:(struct CGRect )arg4 ;
-(void)_injectCommitProgressVelocity:(CGFloat)arg0 ;
-(void)_prepareViewHierarchyForCommittedScreenshot:(BOOL)arg0 gestureStyle:(NSInteger)arg1 ;
-(void)_updateContentTransformUsingPresentationValues:(BOOL)arg0 ;
-(void)_updateCropLinesMultiPartAnimationForCropsProgress;
-(void)_updateWithUpdateMode:(NSInteger)arg0 commitProgress:(CGFloat)arg1 additionalContentTranslation:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_updateWithUpdateMode:(NSInteger)arg0 contentAnimationSettings:(id)arg1 commitProgress:(CGFloat)arg2 additionalContentTranslation:(struct CGPoint )arg3 completion:(id)arg4 ;
-(void)cancelInteractionWithStyle:(NSInteger)arg0 settlingCompletionHandler:(id)arg1 ;
-(void)captureScreenshotWithInterfaceOrientation:(NSInteger)arg0 completion:(id)arg1 ;
// -(void)commitInteractionWithScreenshotImage:(id)arg0 screenshotInterfaceOrientation:(NSInteger)arg1 settlingCompletionHandler:(id)arg2 flashCompletionHandler:(unk)arg3  ;
-(void)handlePanGestureRecognizerAction:(id)arg0 ;
-(void)invalidate;
-(void)removePlaceholderChrome;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif