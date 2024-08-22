// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEHOSTVIEWCONTROLLER_H
#define NUARTICLEHOSTVIEWCONTROLLER_H

@class UIViewController, FCArticle, FCObservable, NSString, FCIssue, NSHashTable, UIView<NULoadingViewProviding>, TFMultiDelegate, UIResponder, UIScrollView;
@protocol NUArticleViewControllerDelegate, NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible, NUAnalyticsReporting, NUArticleViewControllerFactory, NUArticleContentSizeManager, NUArticleHostViewControllerDelegate, NUErrorMessageFactory, NUSettings;


#import "NUArticleContext.h"

@interface NUArticleHostViewController : UIViewController <NUArticleViewControllerDelegate, NULoadingDelegate, SXAnalyticsReporting, NUPageable, NUBarCompressible>



@property (readonly, nonatomic) NSObject<NUAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (readonly, nonatomic) FCArticle *article; // ivar: _article
@property (retain, nonatomic) NUArticleContext *articleContext; // ivar: _articleContext
@property (readonly, nonatomic) NSObject<NUArticleViewControllerFactory> *articleViewControllerFactory; // ivar: _articleViewControllerFactory
@property (readonly, nonatomic) FCObservable *articleViewStyler; // ivar: _articleViewStyler
@property (nonatomic) NSInteger contentScale;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) NSObject<NUArticleContentSizeManager> *contentSizeManager; // ivar: _contentSizeManager
@property (retain, nonatomic) UIViewController *contentTypeViewController; // ivar: _contentTypeViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUArticleHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NUErrorMessageFactory> *errorMessageFactory; // ivar: _errorMessageFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCIssue *issue; // ivar: _issue
@property (weak, nonatomic) NSObject<NULoadingDelegate> *loadingDelegate; // ivar: _loadingDelegate
@property (readonly, nonatomic) NSHashTable *loadingListeners;
@property (retain, nonatomic) UIView<NULoadingViewProviding> *loadingView; // ivar: _loadingView
@property (readonly, nonatomic) TFMultiDelegate *multiLoadingDelegate; // ivar: _multiLoadingDelegate
@property (readonly, copy, nonatomic) NSString *pageIdentifier; // ivar: _pageIdentifier
@property (readonly, nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (retain, nonatomic) UIResponder *responder; // ivar: _responder
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, copy, nonatomic) NSObject<NUSettings> *settings; // ivar: _settings
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithArticle:(id)arg0 articleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3 contentSizeManager:(id)arg4 ;
-(id)initWithArticle:(id)arg0 issue:(id)arg1 articleViewControllerFactory:(id)arg2 settings:(id)arg3 errorMessageFactory:(id)arg4 analyticsReporting:(id)arg5 contentSizeManager:(id)arg6 relativePriority:(NSInteger)arg7 ;
-(id)loadingTextForArticle:(id)arg0 ;
-(void)articleViewController:(id)arg0 didScrollToPosition:(id)arg1 ;
-(void)articleViewControllerDidScrollToBottomOfPrimaryContent:(id)arg0 ;
-(void)loadArticleAndEmbedArticleViewController;
-(void)loadingDidFinishWithError:(id)arg0 ;
-(void)loadingDidStart;
-(void)loadingDidUpdateProgress:(CGFloat)arg0 ;
-(void)loadingWillStart;
-(void)reload;
-(void)reportEvent:(id)arg0 ;
-(void)updateContentScaleAndSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif