// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFLINKPREVIEWHELPER_H
#define _SFLINKPREVIEWHELPER_H

@class WBSAppLink, UIViewController, NSURL, NSString, _WKActivatedElementInfo, WKWebView;
@protocol _SFAdaptivePreviewViewControllerDelegate, _SFLinkPreviewHandler;

#import <Foundation/Foundation.h>

#import "_SFLinkPreviewHeader.h"

@interface _SFLinkPreviewHelper : NSObject <_SFAdaptivePreviewViewControllerDelegate>

 {
    WBSAppLink *_appLink;
    UIViewController *_cachedPreviewViewController;
    NSURL *_fallbackURL;
    id<_SFLinkPreviewHandler> *_handler;
}


@property (weak, nonatomic) _SFLinkPreviewHeader *activeLinkPreviewHeader; // ivar: _activeLinkPreviewHeader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _WKActivatedElementInfo *elementInfo; // ivar: _elementInfo
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *previewContentViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


+(id)contextMenuConfigurationForWebView:(id)arg0 elementInfo:(id)arg1 handler:(id)arg2 ;
+(id)contextMenuContentPreviewForWebView:(id)arg0 elementInfo:(id)arg1 handler:(id)arg2 ;
+(id)linkPreviewHelperForWebView:(id)arg0 ;
+(id)openInNewTabAnalyticsHandler:(SEL)arg0 ;
+(id)previewViewControllerWebView:(id)arg0 url:(id)arg1 handler:(id)arg2 ;
+(void)commitPreviewViewController:(id)arg0 ;
+(void)initialize;
+(void)invalidateLinkPreviewHelperForWebView:(id)arg0 ;
+(void)setOpenInNewTabAnalyticsHandler:(id)arg0 ;
-(BOOL)_previewViewControllerIsLinkPreview;
-(CGFloat)headerViewHeightForAdaptivePreviewViewController:(id)arg0 ;
-(id)adaptivePreviewViewController:(id)arg0 requestLinkPreviewViewControllerWithURL:(id)arg1 ;
-(id)addToReadingListActionForURL:(id)arg0 ;
-(id)downloadActionForURL:(id)arg0 ;
-(id)initWithWebView:(id)arg0 elementInfo:(id)arg1 orURL:(id)arg2 handler:(id)arg3 ;
-(id)makeContextMenuConfiguration;
-(id)makePreviewViewController;
-(id)menuElementsForSuggestedActions:(id)arg0 ;
-(id)menuWithSuggestedActions:(id)arg0 ;
-(id)openActionForAlternateURL:(id)arg0 ;
-(id)openActionForRedirectToExternalNavigationResult:(id)arg0 ;
-(id)openActionForSettingUpOneTimeCodeGeneratorWithExternalNavigationResult:(id)arg0 ;
-(id)openInNewTabActionForURL:(id)arg0 preActionHandler:(id)arg1 ;
-(id)openInNewWindowActionForURL:(id)arg0 ;
-(id)openInTabGroupActionForURL:(id)arg0 shouldPerformActionHandler:(id)arg1 ;
-(id)previewViewController;
-(id)previewViewControllerForURL:(id)arg0 ;
-(void)adaptivePreviewViewControllerWillDisableLinkPreview:(id)arg0 ;
-(void)commitPreviewViewController;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateElementInfo;
-(void)openURL:(id)arg0 forAction:(NSInteger)arg1 withTabOrder:(NSInteger)arg2 ;


@end


#endif