// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUBARSCONTROLLER_H
#define PUBARSCONTROLLER_H

@class PXUpdater, UIViewController;
@protocol PUBarsControllerDelegate;

#import <Foundation/Foundation.h>


@interface PUBarsController : NSObject {
    ? _delegateFlags;
}


@property (nonatomic) UIEdgeInsets contentGuideInsets; // ivar: _contentGuideInsets
@property (weak, nonatomic) NSObject<PUBarsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger preferredBarStyle;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) NSInteger updateBarsDisabledCount; // ivar: _updateBarsDisabledCount
@property (nonatomic) BOOL updateScheduled; // ivar: _updateScheduled
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) BOOL wantsNavigationBarVisible;
@property (readonly, nonatomic) BOOL wantsToolbarVisible;


-(BOOL)_isUpdateBarsDisabled;
-(BOOL)isLocationFromProviderInBarsArea:(id)arg0 ;
-(id)init;
-(void)_invalidateGestureRecognizers;
-(void)_reenableUpdateBars;
-(void)_setNeedsUpdate;
-(void)_updateBars;
-(void)_updateGestureRecognizers;
-(void)_updateNowIfNeeded;
-(void)disableUpdateBarsForDuration:(CGFloat)arg0 ;
-(void)invalidateBars;
-(void)invalidateContentGuideInsets;
-(void)invalidateViewControllerView;
-(void)invalidateViewHostingGestureRecognizers;
-(void)updateBars;
-(void)updateContentGuideInsets;
-(void)updateGestureRecognizersWithHostingView:(id)arg0 ;
-(void)updateIfNeeded;


@end


#endif