// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBARSCONTROLLER_H
#define PUBARSCONTROLLER_H

@class UIViewController;
@protocol PUBarsControllerDelegate;

#import <Foundation/Foundation.h>


@interface PUBarsController : NSObject {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled; // ivar: __isUpdateScheduled
@property (nonatomic, setter=_setNeedsUpdateBars:) BOOL _needsUpdateBars; // ivar: __needsUpdateBars
@property (nonatomic, setter=_setNeedsUpdateContentGuideInsets:) BOOL _needsUpdateContentGuideInsets; // ivar: __needsUpdateContentGuideInsets
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers; // ivar: __needsUpdateGestureRecognizers
@property (nonatomic, setter=_setUpdateBarsDisabledCount:) NSInteger _updateBarsDisabledCount; // ivar: __updateBarsDisabledCount
@property (nonatomic) UIEdgeInsets contentGuideInsets; // ivar: _contentGuideInsets
@property (weak, nonatomic) NSObject<PUBarsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger preferredBarStyle;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) BOOL wantsNavigationBarVisible;
@property (readonly, nonatomic) BOOL wantsToolbarVisible;


-(BOOL)_isUpdateBarsDisabled;
-(BOOL)_needsUpdate;
-(BOOL)isLocationFromProviderInBarsArea:(id)arg0 ;
-(id)init;
-(void)_invalidateGestureRecognizers;
-(void)_reenableUpdateBars;
-(void)_setNeedsUpdate;
-(void)_updateBarsIfNeeded;
-(void)_updateContentGuideInsetsIfNeeded;
-(void)_updateGestureRecognizersIfNeeded;
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