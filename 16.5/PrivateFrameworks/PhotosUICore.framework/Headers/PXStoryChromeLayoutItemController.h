// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCHROMELAYOUTITEMCONTROLLER_H
#define PXSTORYCHROMELAYOUTITEMCONTROLLER_H

@class NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXNumberAnimator.h"
#import "PXUpdater.h"
#import "PXStoryViewModel.h"

@interface PXStoryChromeLayoutItemController : PXObservable <PXChangeObserver>



@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) PXNumberAnimator *alphaAnimator; // ivar: _alphaAnimator
@property (readonly, nonatomic) NSUInteger chromeItem; // ivar: _chromeItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXNumberAnimator *playbackEndDarkeningAnimator; // ivar: _playbackEndDarkeningAnimator
@property (readonly) Class superclass;
@property (nonatomic) CGFloat targetAlpha; // ivar: _targetAlpha
@property (readonly, nonatomic) CGFloat targetAlphaForVisibleState;
@property (nonatomic) CGFloat targetPlaybackEndDarkening; // ivar: _targetPlaybackEndDarkening
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)initWithViewModel:(id)arg0 chromeItem:(NSUInteger)arg1 ;
-(void)_invalidateAlpha;
-(void)_invalidatePlaybackEndDarkening;
-(void)_invalidateTargetAlpha;
-(void)_invalidateTargetPlaybackEndDarkening;
-(void)_setNeedsUpdate;
-(void)_updateAlpha;
-(void)_updatePlaybackEndDarkening;
-(void)_updateTargetAlpha;
-(void)_updateTargetPlaybackEndDarkening;
-(void)animateChangeToTargetAlpha:(CGFloat)arg0 ;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif