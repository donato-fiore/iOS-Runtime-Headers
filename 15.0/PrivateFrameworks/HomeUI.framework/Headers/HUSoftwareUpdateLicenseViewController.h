// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSOFTWAREUPDATELICENSEVIEWCONTROLLER_H
#define HUSOFTWAREUPDATELICENSEVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString, HMHTMLDocument, NSFileManager, UIButton, UIScrollView, WKWebView;
@protocol UIScrollViewDelegate, WKUIDelegate, WKNavigationDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController;


#import "HUWebViewController.h"

@interface HUSoftwareUpdateLicenseViewController : UIViewController <UIScrollViewDelegate, WKUIDelegate, WKNavigationDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) id *agreeHandler; // ivar: _agreeHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *disagreeHandler; // ivar: _disagreeHandler
@property (readonly, copy, nonatomic) HMHTMLDocument *document; // ivar: _document
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *license; // ivar: _license
@property (readonly, nonatomic) UIButton *retainCopyOfTermsButton; // ivar: _retainCopyOfTermsButton
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) HUWebViewController *webViewController; // ivar: _webViewController


-(id)_evaluateHeight:(id)arg0 ;
-(id)_initWithWebViewController:(id)arg0 ;
-(id)hu_preloadContent;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)loadLicense;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_agreeToTerms:(id)arg0 ;
-(void)_disagreeToTerms:(id)arg0 ;
-(void)_emailTermsAndConditions:(id)arg0 ;
-(void)loadView;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif