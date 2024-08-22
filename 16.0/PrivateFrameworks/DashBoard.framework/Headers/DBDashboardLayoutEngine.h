// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDLAYOUTENGINE_H
#define DBDASHBOARDLAYOUTENGINE_H


#import <Foundation/Foundation.h>

#import "DBEnvironmentConfiguration.h"

@interface DBDashboardLayoutEngine : NSObject

@property (readonly, nonatomic) CGRect areaOfInterestWindowFrame; // ivar: _areaOfInterestWindowFrame
@property (readonly, nonatomic) CGRect cornerRadiusViewFrame;
@property (readonly, nonatomic) CGRect cornerRadiusWindowFrame; // ivar: _cornerRadiusWindowFrame
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly, nonatomic) UIEdgeInsets homeViewControllerInsets;
@property (readonly, nonatomic) CGRect mainWindowFrame; // ivar: _mainWindowFrame
@property (readonly, nonatomic) CGRect notificationWindowFrame;
@property (readonly, nonatomic) CGRect resizeAnimationWindowFrame; // ivar: _resizeAnimationWindowFrame
@property (readonly, nonatomic) UIEdgeInsets rootViewControllerContentInsets;
@property (readonly, nonatomic) CGRect statusBarHostSceneFrame; // ivar: _statusBarHostSceneFrame
@property (readonly, nonatomic) CGRect statusBarHostWindowFrame;
@property (readonly, nonatomic) CGRect statusBarWindowFrame;
@property (readonly, nonatomic) CGRect wallpaperFrame;


-(id)initWithEnvironmentConfiguration:(id)arg0 ;
-(struct CGRect )areaOfInterestFrameForApplication:(id)arg0 ;
-(struct CGRect )sceneFrameForApplication:(id)arg0 ;
-(struct UIEdgeInsets )safeAreaInsetsForApplication:(id)arg0 ;
-(struct UIEdgeInsets )statusBarInsets;


@end


#endif