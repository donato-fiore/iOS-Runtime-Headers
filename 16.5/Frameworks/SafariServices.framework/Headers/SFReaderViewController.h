// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFREADERVIEWCONTROLLER_H
#define SFREADERVIEWCONTROLLER_H

@class UIViewController, WKWebView, NSString;
@protocol WKUIDelegate, SFReaderViewControllerDelegate;


#import "_SFBrowserContentViewController.h"

@interface SFReaderViewController : UIViewController <WKUIDelegate>

 {
    WKWebView *_originalWebView;
}


@property (weak, nonatomic) _SFBrowserContentViewController *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFReaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebView *readerWebView;
@property (readonly) Class superclass;


-(id)initWithOriginalWebView:(id)arg0 ;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)_webView:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)loadView;


@end


#endif