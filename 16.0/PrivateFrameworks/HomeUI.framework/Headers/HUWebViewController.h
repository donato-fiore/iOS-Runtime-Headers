// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWEBVIEWCONTROLLER_H
#define HUWEBVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString, HMHTMLDocument, NAFuture, WKWebView;
@protocol WKNavigationDelegate, HUPreloadableViewController;



@interface HUWebViewController : UIViewController <WKNavigationDelegate, HUPreloadableViewController>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) HMHTMLDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NAFuture *loadingFuture; // ivar: _loadingFuture
@property (nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (nonatomic) BOOL showsShareButton; // ivar: _showsShareButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView
@property (nonatomic) BOOL zoomEnabled; // ivar: _zoomEnabled


-(BOOL)_shouldShare;
-(id)_initWithDocument:(id)arg0 orMaybeAURL:(id)arg1 ;
-(id)hu_preloadContent;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_startLoadWithDocument:(id)arg0 orMaybeAURL:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif