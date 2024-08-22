// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICHARTSDOCUMENTVIEWCONTROLLER_H
#define SKUICHARTSDOCUMENTVIEWCONTROLLER_H

@class NSMutableArray, NSString;
@protocol SKUIResourceLoaderDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIChartColumnsView.h"
#import "SKUIChartsTemplateViewElement.h"
#import "SKUIResourceLoader.h"

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController>

 {
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIResourceLoader *_resourceLoader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSInteger)_visibleColumnCountForWidth:(CGFloat)arg0 ;
-(id)_columnViewControllers;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg0 ;
-(id)_resourceLoader;
-(id)contentScrollView;
-(id)initWithTemplateElement:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )_chartInsets;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentMediaQueriesDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)resourceLoader:(id)arg0 didLoadAllForReason:(NSInteger)arg1 ;
-(void)resourceLoaderDidBeginLoading:(id)arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif