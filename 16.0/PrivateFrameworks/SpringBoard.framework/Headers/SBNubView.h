// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNUBVIEW_H
#define SBNUBVIEW_H

@class SBFTouchPassThroughView, UIApplicationSceneClientSettingsDiffInspector, UIView, NSString;
@protocol SBDeviceApplicationSceneHandleObserver;


#import "SBDeviceApplicationSceneHandle.h"

@interface SBNubView : SBFTouchPassThroughView <SBDeviceApplicationSceneHandleObserver>

 {
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    UIView *_nubView;
}


@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle; // ivar: _deviceApplicationSceneHandle
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly) Class superclass;


+(CGFloat)contentHeight;
+(CGFloat)height;
+(CGFloat)hitTestPadding;
+(CGFloat)hitTestWidth;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateNubViewBackgroundColor;
-(void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
-(void)dealloc;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif