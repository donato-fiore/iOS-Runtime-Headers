// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPANELDOCUMENTVIEWCONTROLLER_H
#define SKUIPANELDOCUMENTVIEWCONTROLLER_H

@class UIImageView, UIScrollView, NSString;
@protocol SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIMetricsImpressionSession.h"
#import "SKUIPanelView.h"
#import "SKUILayoutCache.h"
#import "SKUIPanelTemplateViewElement.h"

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>

 {
    UIImageView *_backgroundImageView;
    BOOL _didAttemptBecomeFirstResponder;
    CGRect _keyboardFrame;
    NSInteger _lastContentWidth;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIMetricsImpressionSession *_metricsImpressionSession;
    SKUIPanelView *_panelView;
    SKUILayoutCache *_textLayoutCache;
    UIScrollView *_scrollView;
    SKUIPanelTemplateViewElement *_templateElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activeBackgroundColor;
-(id)_imageForBackgroundImageElement:(id)arg0 ;
-(id)_layoutContext;
-(id)_templateBackgroundColor;
-(id)contentScrollView;
-(id)impressionableViewElements;
-(id)initWithTemplateElement:(id)arg0 ;
-(void)_keyboardHideNotification:(id)arg0 ;
-(void)_keyboardWillChangeNotification:(id)arg0 ;
-(void)_layoutBackgroundImageView;
-(void)_layoutScrollView;
-(void)_reloadBackgroundImageView;
-(void)_reloadContentSize;
-(void)_reloadPanelViewWithScrollViewSize:(struct CGSize )arg0 ;
-(void)_requestPanelViewLayoutWithContentWidth:(NSInteger)arg0 forced:(BOOL)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif