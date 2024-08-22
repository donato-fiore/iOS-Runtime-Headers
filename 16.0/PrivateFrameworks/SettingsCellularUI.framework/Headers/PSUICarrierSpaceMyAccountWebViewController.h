// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICARRIERSPACEMYACCOUNTWEBVIEWCONTROLLER_H
#define PSUICARRIERSPACEMYACCOUNTWEBVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSURL, WKWebView;



@interface PSUICarrierSpaceMyAccountWebViewController : UIViewController

@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSURL *myAccountURL; // ivar: _myAccountURL
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithURLString:(id)arg0 ;
-(id)initWithWebView:(id)arg0 url:(id)arg1 ;
-(void)addCancelButton;
-(void)dismissMyAccount;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif