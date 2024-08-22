// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITRENDINGSEARCHDOCUMENTVIEWCONTROLLER_H
#define SKUITRENDINGSEARCHDOCUMENTVIEWCONTROLLER_H

@class NSString, UIViewController;
@protocol SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUITrendingSearchView.h"
#import "SKUITrendingSearchTemplateElement.h"

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *privacyViewController; // ivar: _privacyViewController
@property (retain, nonatomic) SKUITrendingSearchView *resultsView; // ivar: _resultsView
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUITrendingSearchTemplateElement *template; // ivar: _template


-(id)impressionableViewElements;
-(id)initWithTemplateElement:(id)arg0 ;
-(void)_reloadResultsView;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)resultsViewTapRecognized:(id)arg0 ;
-(void)searchResultButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif