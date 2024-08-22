// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEEXCERPTVIEWCONTROLLER_H
#define NUARTICLEEXCERPTVIEWCONTROLLER_H

@class UIViewController, NSString, UIScrollView;
@protocol UIScrollViewDelegate, WKNavigationDelegate, NULoadable, NUBarCompressible, FCContentContext, FCHeadlineProviding, NULoadingDelegate, NUWebViewControllerFactoryType;


#import "NUArticleExcerptView.h"
#import "NUArticleExcerptTraits.h"

@interface NUArticleExcerptViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegate, NULoadable, NUBarCompressible>



@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (nonatomic) CGFloat currentScrollStartPosition; // ivar: _currentScrollStartPosition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NUArticleExcerptView *excerptView; // ivar: _excerptView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (weak, nonatomic) NSObject<NULoadingDelegate> *loadingDelegate; // ivar: _loadingDelegate
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (retain, nonatomic) NUArticleExcerptTraits *traits; // ivar: _traits
@property (readonly, nonatomic) NSObject<NUWebViewControllerFactoryType> *webViewControllerFactory; // ivar: _webViewControllerFactory


-(BOOL)_handleNavigationToURL:(id)arg0 fromURL:(id)arg1 ;
-(id)initWithHeadline:(id)arg0 webViewControllerFactory:(id)arg1 contentContext:(id)arg2 traits:(id)arg3 ;
-(void)handleReadMoreTapped;
-(void)loadExcerptFromHeadline:(id)arg0 completion:(id)arg1 ;
-(void)loadHeadlineImageFromHeadline:(id)arg0 completion:(id)arg1 ;
-(void)openSafariViewWithURL:(id)arg0 ;
-(void)presentFailedOpenSafariViewWithURL:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif