// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBAPPDATAPROVIDER_H
#define SFWEBAPPDATAPROVIDER_H

@class UINavigationController, UIWebClip, _WKApplicationManifest, UIImage, NSArray, WKWebView, WBSApplicationManifestFetcher, UIColor, UIViewController, NSString;
@protocol WebClipDelegate, _SFWebClipViewControllerDelegate, WKNavigationDelegate, SFWebAppDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "_SFWebClipViewController.h"
#import "_SFInjectedJavaScriptController.h"
#import "_SFWebClipMetadataFetcher.h"

@interface SFWebAppDataProvider : NSObject <WebClipDelegate, _SFWebClipViewControllerDelegate, WKNavigationDelegate>

 {
    UINavigationController *_wrappingNavigationController;
    _SFWebClipViewController *_webClipViewController;
    UIWebClip *_webClip;
    BOOL _webClipConfigured;
    BOOL _waitingForSnapshot;
    _WKApplicationManifest *_manifest;
    UIImage *_bestManifestIcon;
    NSArray *_manifestIcons;
    WKWebView *_webView;
    WBSApplicationManifestFetcher *_applicationManifestFetcher;
    UIImage *_touchIcon;
    BOOL _touchIconPrecomposed;
    _SFInjectedJavaScriptController *_activityJSController;
    _SFWebClipMetadataFetcher *_webClipMetadataFetcher;
    UIColor *_pageThemeColor;
    UIColor *_underPageBackgroundColor;
}


@property (readonly, nonatomic) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFWebAppDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isWhiteColor:(id)arg0 ;
-(id)_manifestTitle;
-(void)_createWebClipFromWebView;
-(void)_createWebView;
-(void)_downloadManifestIconWithCompletionHandler:(id)arg0 ;
-(void)_finishPreparingFromWebView;
-(void)_updateManifestValues;
-(void)_updateMonogramIconForWebClip;
-(void)dealloc;
-(void)prepareWithManifestData:(id)arg0 ;
-(void)prepareWithURL:(id)arg0 ;
-(void)updateWithWebClipMetadata:(id)arg0 ;
-(void)webClip:(id)arg0 iconRequestDidFinishWithImage:(id)arg1 precomposed:(BOOL)arg2 ;
-(void)webClip:(id)arg0 startupImageRequestDidFinishWithImage:(id)arg1 ;
-(void)webClip:(id)arg0 startupLandscapeImageRequestDidFinishWithImage:(id)arg1 ;
-(void)webClipViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif