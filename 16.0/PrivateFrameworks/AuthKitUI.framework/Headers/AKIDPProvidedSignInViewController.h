// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKIDPPROVIDEDSIGNINVIEWCONTROLLER_H
#define AKIDPPROVIDEDSIGNINVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, UILabel, UIStackView, WKWebView;
@protocol AKIDPHandlerDelegate, AKIDPPresentationController;


#import "AKIDPHandler.h"

@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKIDPHandler *idpHandler; // ivar: _idpHandler
@property (retain, nonatomic) UIImageView *secureIconView; // ivar: _secureIconView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIStackView *titleStackView; // ivar: _titleStackView
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithIDPHandler:(id)arg0 ;
-(void)IDPHandler:(id)arg0 didFinishLoadingPageInWebView:(id)arg1 ;
-(void)IDPHandler:(id)arg0 didStartLoadingPageInWebView:(id)arg1 ;
-(void)_cancelBarButtonPressed:(id)arg0 ;
-(void)_setNavigationTitle:(id)arg0 ;
-(void)loadView;
-(void)setupTitleView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif