// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
+(BOOL)_textBlockLooksLikeAListWithText:(id)arg0 ;
+(CGFloat)_fontSizeOfView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_UIElementsForWebViewContentString:(id)arg0 ;
+(id)_bestContentStringForWebViewUIElements:(id)arg0 andTitle:(id)arg1 ;
+(id)_bestImageForView:(id)arg0 ;
+(id)_bestTitleFromWindow:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_bestVisibleStringForView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_blocksFromText:(id)arg0 ;
+(id)_descendantsRelevantForContentExtractionFromWindow:(id)arg0 ;
+(id)_getNotableSuperviewClassNamesForView:(id)arg0 ;
+(id)_handlePDFView:(id)arg0 withExecutor:(id)arg1 ;
+(id)_handleWKWebView:(id)arg0 withExecutor:(id)arg1 ;
+(unsigned char)_controlCodeForExecutor:(id)arg0 ;
+(void)_descendantsRelevantForContentExtractionFromView:(id)arg0 intoArray:(id)arg1 ;
+(void)_donateContentsOfWindow:(id)arg0 usingExecutor:(id)arg1 withOptions:(NSUInteger)arg2 ;
+(void)_donateText:(id)arg0 withTitle:(id)arg1 withDebugText:(id)arg2 debugUrlString:(id)arg3 withLeadImage:(id)arg4 withSnapshot:(id)arg5 withUIElements:(id)arg6 usingContextFromExecutor:(id)arg7 ;
+(void)_extractContentFromWebView:(id)arg0 includingSnapshot:(BOOL)arg1 includingUIBoundingBox:(BOOL)arg2 withCompletionHandler:(id)arg3 ;
+(void)_extractContentFromWebViewPDFData:(id)arg0 withCompletionHandler:(id)arg1 ;
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