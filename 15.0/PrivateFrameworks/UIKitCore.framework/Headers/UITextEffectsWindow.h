// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTEFFECTSWINDOW_H
#define UITEXTEFFECTSWINDOW_H

@class NSDictionary, NSLayoutConstraint, NSString;
@protocol _UICanvasBasedObject;


#import "UIAutoRotatingWindow.h"
#import "UIWindowScene.h"
#import "UIEditingOverlayViewController.h"

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UICanvasBasedObject>

 {
    BOOL _inDealloc;
    NSUInteger _activeEffectsCount;
    NSDictionary *_perCanvasOptions;
    UIWindowScene *__intendedWindowScene;
    NSUInteger _activeRemoteViewCount;
    NSUInteger _windowLevelCount;
    CGFloat _windowLevelStack;
    BOOL _manualHostingOverride;
    NSLayoutConstraint *_bottomConstraint;
}


@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultWindowLevel; // ivar: _defaultWindowLevel
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEditingOverlayViewController *editingOverlayViewController; // ivar: _editingOverlayViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect hostedFrame;
@property (nonatomic) UIEdgeInsets hostedSafeInsets; // ivar: _hostedSafeInsets
@property (nonatomic) CGSize hostedSceneSize; // ivar: _hostedSceneSize
@property (nonatomic) CGPoint hostedWindowOffset; // ivar: _hostedWindowOffset
@property (readonly, nonatomic) BOOL isFullscreen; // ivar: _isFullscreen
@property (readonly, nonatomic) CGSize keyboardScreenReferenceSize;
@property (readonly, nonatomic) CGFloat keyboardWidthForCurrentDevice;
@property (readonly) Class superclass;


+(BOOL)_isSecure;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(id)_canvasForScreen:(id)arg0 ;
+(id)_sharedTextEffectsWindowforWindowScene:(id)arg0 allowHosted:(BOOL)arg1 matchesStatusBarOrientationOnAccess:(BOOL)arg2 shouldCreateIfNecessary:(BOOL)arg3 ;
+(id)activeTextEffectsWindowForCanvas:(id)arg0 ;
+(id)activeTextEffectsWindowForScreen:(id)arg0 ;
+(id)activeTextEffectsWindowForWindowScene:(id)arg0 ;
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)sharedTextEffectsWindowForCanvas:(id)arg0 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg0 ;
+(id)sharedTextEffectsWindowForWindowScene:(id)arg0 ;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)releaseSharedInstances;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isRemoteKeyboardWindow;
-(BOOL)_isTextEffectsWindow;
-(BOOL)_matchingOptions:(id)arg0 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldInstallRootPresentationController;
-(BOOL)_shouldResizeWithScene;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg0 ;
-(BOOL)enableRemoteHosting;
-(BOOL)isInternalWindow;
-(CGFloat)slideOverWindowVerticalOffset;
-(NSInteger)actualSceneOrientation;
-(NSInteger)interfaceOrientation;
-(id)_initBasicWithCanvas:(id)arg0 options:(id)arg1 ;
-(id)_initWithCanvas:(id)arg0 options:(id)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 attached:(BOOL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 debugName:(id)arg1 windowScene:(id)arg2 ;
-(id)_inputWindowController;
-(id)aboveStatusBarWindow;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_forHostedProcessConvertPoint:(struct CGPoint )arg0 forWindow:(id)arg1 wasFromWindow:(BOOL)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromWindow:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toView:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toWindow:(id)arg1 ;
-(struct CGRect )_forHostedProcessConvertRect:(struct CGRect )arg0 forWindow:(id)arg1 wasFromWindow:(BOOL)arg2 ;
-(struct CGRect )_sceneBounds;
-(struct CGRect )_sceneReferenceBounds;
-(struct CGRect )_usableSceneBounds;
-(struct CGRect )actualSceneBounds;
-(struct CGRect )actualSceneBoundsForLandscape:(BOOL)arg0 ;
-(struct CGRect )actualSceneFrame;
-(struct CGRect )actualSceneFrameForOrientation:(NSInteger)arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromWindow:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toWindow:(id)arg1 ;
-(void)_commonInitWithOptions:(id)arg0 ;
-(void)_commonTextEffectsInit;
-(void)_configureContextOptions:(id)arg0 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_didRemoveSubview:(id)arg0 ;
-(void)_didSnapshot;
-(void)_matchDeviceOrientation;
-(void)_restoreWindowLevel;
-(void)_sceneBoundsDidChange;
-(void)_setWindowLevel:(CGFloat)arg0 ;
-(void)_sortSubviewsOfView:(id)arg0 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(void)_updateTransformLayer;
-(void)_willSnapshot;
-(void)addBottomPadding:(CGFloat)arg0 ;
-(void)becomeKeyWindow;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)dealloc;
-(void)delayHideWindow;
-(void)didAddSubview:(id)arg0 ;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)resetTransform;
-(void)sendSubviewToBack:(id)arg0 ;
-(void)setEnableRemoteHosting:(BOOL)arg0 ;
-(void)sortSubviews;
-(void)updateEditingOverlayContainer;
-(void)updateForOrientation:(NSInteger)arg0 ;
-(void)updateForOrientation:(NSInteger)arg0 forceResetTransform:(BOOL)arg1 ;
-(void)updateSubviewOrdering;


@end


#endif