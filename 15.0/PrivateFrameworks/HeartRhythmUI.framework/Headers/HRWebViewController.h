// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRWEBVIEWCONTROLLER_H
#define HRWEBVIEWCONTROLLER_H

@class UIViewController, NSString, NSURL, WKWebView;
@protocol WKNavigationDelegate;



@interface HRWebViewController : UIViewController <WKNavigationDelegate>



@property (nonatomic) UIEdgeInsets bodyInsets; // ivar: _bodyInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithURL:(id)arg0 bodyInsets:(struct UIEdgeInsets )arg1 ;
-(void)_adjustWebView:(id)arg0 bodyInsets:(struct UIEdgeInsets )arg1 ;
-(void)viewDidLoad;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif