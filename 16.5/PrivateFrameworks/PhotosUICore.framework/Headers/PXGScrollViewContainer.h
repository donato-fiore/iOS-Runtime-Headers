// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSCROLLVIEWCONTAINER_H
#define PXGSCROLLVIEWCONTAINER_H

@class UIView, NSString;
@protocol PXUIScrollViewControllerFocusItemProvider, PXChangeObserver, PXScrollViewControllerObserver, PXGReusableView, PXGScrollViewContainerDelegate;


#import "PXScrollViewController.h"
#import "PXGScrollViewModel.h"
#import "PXScrollViewSpeedometer.h"
#import "PXUpdater.h"
#import "PXGScrollViewContainerConfiguration.h"

@interface PXGScrollViewContainer : UIView <PXUIScrollViewControllerFocusItemProvider, PXChangeObserver, PXScrollViewControllerObserver, PXGReusableView>

 {
    ? _delegateRespondsTo;
    BOOL _isUpdatingScrollViewController;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PXGScrollViewContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (retain, nonatomic) PXGScrollViewModel *scrollViewModel; // ivar: _scrollViewModel
@property (readonly, nonatomic) BOOL shouldFlipContentOffset;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) PXScrollViewSpeedometer *speedometer; // ivar: _speedometer
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (copy, nonatomic) PXGScrollViewContainerConfiguration *userData; // ivar: _userData


-(id)focusItemsForScrollViewController:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )convertHostedChildCenter:(struct CGPoint )arg0 fromGlobalLayer:(id)arg1 ;
-(void)_invalidateScrollViewController;
-(void)_invalidateScrollViewDecelerationRate;
-(void)_invalidateScrollViewModel;
-(void)_setNeedsUpdate;
-(void)_updateScrollViewController;
-(void)_updateScrollViewDecelerationRate;
-(void)_updateScrollViewModel;
-(void)_willLayout;
-(void)addHostedLayer:(id)arg0 ;
-(void)addHostedView:(id)arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)scrollViewControllerDidEndScrolling:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif