// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBMAPSWIDGETVIEWCONTROLLER_H
#define DBMAPSWIDGETVIEWCONTROLLER_H

@class NSArray, BSAnimationSettings, BKSAnimationFenceHandle;
@protocol DBWidgetSizeManaging;


#import "DBWidgetSceneViewController.h"

@interface DBMapsWidgetViewController : DBWidgetSceneViewController

@property (retain, nonatomic) NSArray *availableWidgetSizes; // ivar: _availableWidgetSizes
@property (retain, nonatomic) BSAnimationSettings *pendingAnimationSettings; // ivar: _pendingAnimationSettings
@property (retain, nonatomic) BKSAnimationFenceHandle *pendingFenceHandle; // ivar: _pendingFenceHandle
@property (weak, nonatomic) NSObject<DBWidgetSizeManaging> *widgetSizeManager; // ivar: _widgetSizeManager


-(id)initWithEnvironment:(id)arg0 animationManager:(id)arg1 widgetSizeManager:(id)arg2 ;
-(id)sceneID;
-(void)clientSetWantsLargeSize:(BOOL)arg0 fenceHandle:(id)arg1 animationSettings:(id)arg2 ;
-(void)connectionReady;
-(void)prepareLoadingViewAnimated:(BOOL)arg0 ;
-(void)setWantsLargeSize:(BOOL)arg0 ;
-(void)updateAppearanceForWallpaper;
-(void)viewDidLayoutSubviews;


@end


#endif