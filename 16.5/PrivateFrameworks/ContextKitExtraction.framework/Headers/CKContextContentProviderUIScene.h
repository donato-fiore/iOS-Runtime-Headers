// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTCONTENTPROVIDERUISCENE_H
#define CKCONTEXTCONTENTPROVIDERUISCENE_H

@class UIButton, NSTimer, UIScene, NSString;
@protocol _UISceneComponentProviding;


#import "CKContextContentProvider.h"

@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding>

 {
    UIButton *_debugButton;
    UIButton *_recentsButton;
    BOOL _allowAppSwitcherControls;
    NSTimer *_toolInstallationTimer;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: __scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isRelevantForExtractionWithView:(id)arg0 ;
+(BOOL)_isSensitiveTextContentType:(id)arg0 ;
+(CGFloat)_fontSizeOfView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_UIElementsForWebViewContentString:(id)arg0 ;
+(id)_allViewControllersFromUIViews:(id)arg0 ;
+(id)_bestContentStringForWebViewUIElements:(id)arg0 andTitle:(id)arg1 ;
+(id)_bestVisibleStringForView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_descendantsRelevantForContentExtractionFromWindow:(id)arg0 ;
+(id)_extractItemsFromViewControllers:(id)arg0 ;
+(id)_firstAvailableUIViewControllerForUIView:(id)arg0 ;
+(id)_getNotableSuperviewClassNamesForView:(id)arg0 ;
+(id)_handleWKWebView:(id)arg0 withExecutor:(id)arg1 ;
+(void)_descendantsRelevantForContentExtractionFromView:(id)arg0 intoArray:(id)arg1 ;
+(void)_donateContentsOfWindow:(id)arg0 usingExecutor:(id)arg1 withOptions:(NSUInteger)arg2 ;
+(void)_donateText:(id)arg0 withTitle:(id)arg1 debugText:(id)arg2 debugUrlString:(id)arg3 rawHTML:(id)arg4 leadImage:(id)arg5 snapshot:(id)arg6 uiElements:(id)arg7 extractionItems:(id)arg8 usingContextFromExecutor:(id)arg9 ;
+(void)_extractContentFromWebView:(id)arg0 includingSnapshot:(BOOL)arg1 includingUIBoundingBox:(BOOL)arg2 ignoreViewTextLengthRequirements:(BOOL)arg3 ignoreViewCountCap:(BOOL)arg4 includeRawHTML:(BOOL)arg5 withCompletionHandler:(id)arg6 ;
+(void)extractFromScene:(id)arg0 usingExecutor:(id)arg1 withOptions:(NSUInteger)arg2 ;
+(void)initialize;
-(BOOL)_determineIfDebuggingControlsShouldBeAllowed;
-(BOOL)_shouldInstallAppSwitcherControls;
-(id)_containerViewForDebugButtons;
-(id)_descendantsRelevantForDebugControls:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_didSelectDebugControl:(id)arg0 ;
-(void)_didSelectRecentsControl:(id)arg0 ;
-(void)_installDebuggingButton;
-(void)_installDebuggingControlsIfApplicable;
-(void)_installRecentsButton;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_setUpDebuggingControlsIfPossibleAfterDelay:(CGFloat)arg0 ;
-(void)extractUsingExecutor:(id)arg0 withOptions:(NSUInteger)arg1 ;


@end


#endif