// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPREVIEWOVERLAYVIEWCONTROLLER_H
#define SKUIPREVIEWOVERLAYVIEWCONTROLLER_H

@class IKAppDocument, SUPlayerStatus, UITapGestureRecognizer, NSString;
@protocol SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate;


#import "SKUIViewController.h"
#import "SKUILayoutCache.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIHorizontalLockupView.h"

@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate>

 {
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_overlayWidth;
-(id)_layoutCache;
-(id)initWithDocument:(id)arg0 ;
-(void)_tapAction:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)itemStateCenter:(id)arg0 itemStatesChanged:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)prepareOverlayView;
-(void)reloadOverlayView;
-(void)showPreviewProgressWithStatus:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif