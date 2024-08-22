// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONSCENECLASSICWRAPPERVIEW_H
#define SBDEVICEAPPLICATIONSCENECLASSICWRAPPERVIEW_H

@class UIView, NSArray;


#import "_SBDeviceApplicationSceneClassicHostPositioningView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneClassicWrapperView : UIView {
    _SBDeviceApplicationSceneClassicHostPositioningView *_positioningView;
}


@property (readonly, nonatomic) NSArray *contentViews;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL preparingForUserDrivenClassicRotation; // ivar: _preparingForUserDrivenClassicRotation
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (nonatomic) NSInteger startingOrientationForClassicPhoneAppRotation; // ivar: _startingOrientationForClassicPhoneAppRotation
@property (nonatomic) BOOL suppressLayoutUpdatesForStartOfClassicPhoneAppRotation; // ivar: _suppressLayoutUpdatesForStartOfClassicPhoneAppRotation
@property (readonly, nonatomic) BOOL wantsBlackBackground;


+(BOOL)shouldUseWrapperViewForSceneHandle:(id)arg0 ;
-(BOOL)_isProbablyScreenSized;
-(id)initWithSceneHandle:(id)arg0 ;
-(struct CGRect )_effectiveSceneBounds;
-(void)addContentView:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeContentView:(id)arg0 ;


@end


#endif