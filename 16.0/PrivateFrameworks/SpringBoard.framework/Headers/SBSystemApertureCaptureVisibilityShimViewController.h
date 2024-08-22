// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURECAPTUREVISIBILITYSHIMVIEWCONTROLLER_H
#define SBSYSTEMAPERTURECAPTUREVISIBILITYSHIMVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, UIViewController, _UIPortalView, CADisplay, NSString;
@protocol PTSettingsKeyObserver;


#import "SBSystemApertureSettings.h"

@interface SBSystemApertureCaptureVisibilityShimViewController : SBFTouchPassThroughViewController <PTSettingsKeyObserver>

 {
    SBSystemApertureSettings *_settings;
    UIViewController *_contentViewController;
    _UIPortalView *_displayPortalView;
    _UIPortalView *_clonedDisplayPortalView;
    CADisplay *_observedDisplay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisibleInSnapshots) BOOL visibleInSnapshots; // ivar: _visibleInSnapshots
@property (nonatomic, getter=isVisibleOnClonedDisplay) BOOL visibleOnClonedDisplay; // ivar: _visibleOnClonedDisplay


-(BOOL)_canShowWhileLocked;
-(BOOL)_isOriginalContentCloned;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithContentViewController:(id)arg0 ;
-(id)newDefaultVisibilityAnimator;
-(void)_updateClonedVisibility;
-(void)_updatePortalVisibility;
-(void)_updateSnapshotVisibility;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif