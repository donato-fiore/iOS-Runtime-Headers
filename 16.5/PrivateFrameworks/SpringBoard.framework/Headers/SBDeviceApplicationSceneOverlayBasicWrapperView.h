// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENEOVERLAYBASICWRAPPERVIEW_H
#define SBDEVICEAPPLICATIONSCENEOVERLAYBASICWRAPPERVIEW_H

@class UIView;
@protocol SBDeviceApplicationSceneOverlayView;



@interface SBDeviceApplicationSceneOverlayBasicWrapperView : UIView <SBDeviceApplicationSceneOverlayView>



@property (nonatomic) NSInteger hostOrientation; // ivar: _hostOrientation
@property (readonly, nonatomic) BOOL needsCounterRotation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange; // ivar: _shouldLayoutOverlayImmediatelyForContainerGeometryChange


-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif