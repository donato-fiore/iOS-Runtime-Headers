// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEBVIEWCONTROLLER_H
#define WFWEBVIEWCONTROLLER_H

@class UIViewController, WKWebView;
@protocol WFWebViewControllerDelegate;



@interface WFWebViewController : UIViewController

@property (weak, nonatomic) NSObject<WFWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWebView:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)done;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateNavigationItems;


@end


#endif