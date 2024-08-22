// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSARTICLEVIEWCONTROLLERINTERNAL_H
#define NSSARTICLEVIEWCONTROLLERINTERNAL_H

@class UIViewController, UIActivityIndicatorView;


#import "NSSArticleInternal.h"
#import "NSSArticleView.h"

@interface NSSArticleViewControllerInternal : UIViewController

@property (retain, nonatomic) NSSArticleInternal *article; // ivar: _article
@property (nonatomic) BOOL articleLoading; // ivar: _articleLoading
@property (retain, nonatomic) NSSArticleView *articleView; // ivar: _articleView
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(BOOL)prefersStatusBarHidden;
-(id)initWithArticle:(id)arg0 ;
-(id)initWithNotification:(id)arg0 ;
-(id)initWithSpotlightIdentifier:(id)arg0 ;
-(void)_tickleArticleView;
-(void)_tickleSpinner;
-(void)presentArticle:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif