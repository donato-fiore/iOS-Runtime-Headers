// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMODERNCHARTSDOCUMENTVIEWCONTROLLER_H
#define SKUIMODERNCHARTSDOCUMENTVIEWCONTROLLER_H

@class NSMutableArray, NSString;
@protocol SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider;


#import "SKUIViewController.h"
#import "SKUIActivityIndicatorView.h"
#import "SKUIModernChartsView.h"
#import "SKUILayoutCache.h"
#import "SKUIChartsTemplateViewElement.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIResourceLoader.h"

@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController, SKUIModalSourceViewProvider>

 {
    SKUIActivityIndicatorView *_activityIndicatorView;
    SKUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUILayoutCache *_layoutCache;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
    SKUIResourceLoader *_resourceLoader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_layoutCache;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg0 ;
-(id)_resourceLoader;
-(id)_viewLayoutContext;
-(id)contentScrollView;
-(id)initWithTemplateElement:(id)arg0 ;
-(struct CGRect )_computedFrameForActivityIndicatorView;
-(struct UIEdgeInsets )_contentInset;
-(void)_hideActivityIndicator;
-(void)_reloadWithTemplateElement:(id)arg0 ;
-(void)_showActivityIndicator;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentMediaQueriesDidUpdate:(id)arg0 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadView;
-(void)resourceLoader:(id)arg0 didLoadAllForReason:(NSInteger)arg1 ;
-(void)resourceLoaderDidBeginLoading:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif