// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTCONTENTPROVIDERCOMPONENT_H
#define CKCONTEXTCONTENTPROVIDERCOMPONENT_H

@class UIView;


#import "CKContextContentProvider.h"

@interface CKContextContentProviderComponent : CKContextContentProvider

@property (weak, nonatomic, setter=setView:) UIView *view; // ivar: _view


+(BOOL)_isSensitiveTextContentType:(id)arg0 ;
+(CGFloat)_fontSizeOfView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_UIElementsForWebViewContentString:(id)arg0 withSceneIdentifier:(id)arg1 ;
+(id)_bestVisibleStringForView:(id)arg0 usingExecutor:(id)arg1 ;
+(id)_decendantsRelevantForExtractionFromParentView:(id)arg0 ;
+(id)_getNotableSuperviewClassNamesForView:(id)arg0 ;
+(id)_handleWKWebView:(id)arg0 withExecutor:(id)arg1 ;
+(void)_donateContentsOfParentView:(id)arg0 usingExecutor:(id)arg1 withOptions:(NSUInteger)arg2 ;
+(void)_donateText:(id)arg0 withTitle:(id)arg1 debugText:(id)arg2 debugUrlString:(id)arg3 leadImage:(id)arg4 snapshot:(id)arg5 uiElements:(id)arg6 usingContextFromExecutor:(id)arg7 ;
+(void)_extractContentFromWebView:(id)arg0 includingUIBoundingBox:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
+(void)initialize;
-(id)init;
-(void)extractUsingExecutor:(id)arg0 withOptions:(NSUInteger)arg1 ;


@end


#endif