// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKSYNOPSISVIEW_H
#define OKSYNOPSISVIEW_H

@class OFUIView, NSArray, OFNSOperationQueue, UICollectionView, NSString;
@protocol UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, OKWidgetViewDelegate, OKSynopsisViewDelegate;


#import "OKSynopsisGestureRecognizer.h"
#import "OKDimmerView.h"
#import "OKPresentationViewControllerProxy.h"
#import "OKSynopsisInterpreter.h"

@interface OKSynopsisView : OFUIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate, OKWidgetViewDelegate>

 {
    OKSynopsisGestureRecognizer *_synopsisGestureRecognizer;
    NSArray *_widgetMediaItems;
    OFNSOperationQueue *_highSpeedOperationQueue;
    OKDimmerView *_backgroundView;
    BOOL _pinchStartedRight;
    BOOL _isAnimating;
    UICollectionView *_collectionView;
    BOOL _scrollViewDidEndDragging;
    CGPoint _collectionViewContentPreviousOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKSynopsisViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDisplay; // ivar: _isDisplay
@property (readonly, nonatomic) OFUIView *navigatorView;
@property (readonly, nonatomic) OFUIView *presentationView;
@property (nonatomic) OKPresentationViewControllerProxy *presentationViewController; // ivar: _presentationViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) OKSynopsisInterpreter *synopsisInterpreter; // ivar: _synopsisInterpreter


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionItemAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPresentationViewController:(id)arg0 ;
-(id)pageViewForWidgetView:(id)arg0 ;
-(id)widgetViewResolution:(id)arg0 ;
-(void)_scrollViewDidCompleteScrolling;
-(void)animateSynopsisViewBlurForDisplay:(BOOL)arg0 withProgress:(CGFloat)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)endedGesture;
// -(void)evaluateScript:(id)arg0 withInfoDictionary:(id)arg1 andCompletionBlock:(id)arg2 forWidgetView:(unk)arg3  ;
-(void)handleMagnification:(id)arg0 ;
-(void)handleTapCell:(id)arg0 ;
-(void)hide;
-(void)initCollectionView;
-(void)prepareAdjacentItemWidgetViews;
-(void)prepareAdjacentItemWidgetViews:(NSUInteger)arg0 ;
-(void)prepareAdjacentItemWidgetViewsForScrolling;
-(void)prepareForDisplaySynopsisView;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)show;
-(void)updateLayout:(struct CGRect )arg0 ;
-(void)updateSynopsisViewOffsetForVisibleWidgets;
-(void)updateWithProgress:(CGFloat)arg0 ;
-(void)widgetView:(id)arg0 addHighSpeedOperations:(id)arg1 andConsumingOperations:(id)arg2 ;
-(void)widgetViewCancelAllOperations:(id)arg0 ;
-(void)widgetViewCancelAllOperations:(id)arg0 withIdentifier:(id)arg1 ;


@end


#endif