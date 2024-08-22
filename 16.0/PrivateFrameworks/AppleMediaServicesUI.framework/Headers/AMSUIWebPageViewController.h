// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBPAGEVIEWCONTROLLER_H
#define AMSUIWEBPAGEVIEWCONTROLLER_H

@class NSURL, NSString, UIToolbar;
@protocol AMSUIWebPagePresenter, AMSUIWebPageViewControllerDelegate;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebPageModel.h"
#import "AMSUIWebView.h"

@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIWebPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIWebPageModel *model; // ivar: _model
@property (readonly) Class superclass;
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) AMSUIWebView *webView; // ivar: _webView


-(id)initWithContext:(id)arg0 dataProvider:(id)arg1 ;
-(id)loadRequest:(id)arg0 ;
-(void)_applyAppearance;
-(void)_didEncodeRequest:(id)arg0 ;
-(void)_didTapLeftToolbarButton:(id)arg0 ;
-(void)_didTapRightToolbarButton:(id)arg0 ;
-(void)_downloadHTMLForRequest:(id)arg0 completion:(id)arg1 ;
-(void)_updateLayout;
-(void)_willEncodeRequest:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif