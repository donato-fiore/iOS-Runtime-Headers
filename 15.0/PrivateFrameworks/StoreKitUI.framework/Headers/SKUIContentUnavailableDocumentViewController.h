// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICONTENTUNAVAILABLEDOCUMENTVIEWCONTROLLER_H
#define SKUICONTENTUNAVAILABLEDOCUMENTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIContentUnavailableView.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIContentUnavailableTemplateElement.h"
#import "SKUILayoutCache.h"

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>

 {
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_layoutContext;
-(id)initWithTemplateElement:(id)arg0 ;
-(struct UIEdgeInsets )_contentInsets;
-(void)_reloadContentUnavailableView:(id)arg0 width:(CGFloat)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif