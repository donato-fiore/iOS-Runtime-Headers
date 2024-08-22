// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBISOLATEDSCENEORIENTATIONFOLLOWINGCONTAINERVIEW_H
#define SBISOLATEDSCENEORIENTATIONFOLLOWINGCONTAINERVIEW_H

@class UIView, NSHashTable;
@protocol SBDeviceApplicationSceneOverlayView;


#import "SBIsolatedSceneOrientationFollowingWrapperViewController.h"

@interface SBIsolatedSceneOrientationFollowingContainerView : UIView <SBDeviceApplicationSceneOverlayView>

 {
    NSHashTable *_observers;
}


@property (nonatomic) NSInteger hostOrientation; // ivar: _hostOrientation
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange; // ivar: _shouldLayoutOverlayImmediatelyForContainerGeometryChange
@property (readonly, weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *wrapperViewController; // ivar: _wrapperViewController


-(id)initWithFrame:(struct CGRect )arg0 wrapperViewController:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)notifyObserversViewRotatedToOrientation:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;


@end


#endif