// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSUICLUSTERWINDOW_H
#define CRSUICLUSTERWINDOW_H

@class NSString, CARObserverHashTable;
@protocol CRSUIClusterZoomActionDelegate, _UISceneSettingsDiffAction;


#import "CRSUIWindow.h"
#import "CRSUIInstrumentClusterSettingsDiffInspector.h"

@interface CRSUIClusterWindow : CRSUIWindow <CRSUIClusterZoomActionDelegate, _UISceneSettingsDiffAction>



@property (retain, nonatomic) CRSUIInstrumentClusterSettingsDiffInspector *clusterSettingsDiffInspector; // ivar: _clusterSettingsDiffInspector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(NSUInteger)compassSetting;
-(NSUInteger)etaSetting;
-(NSUInteger)itemType;
-(NSUInteger)layoutJustification;
-(NSUInteger)speedLimitSetting;
-(id)_clusterSettings;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)addClusterSettingsObserver:(id)arg0 ;
-(void)commonInit;
-(void)handleZoomInDirection:(NSInteger)arg0 ;
-(void)removeClusterSettingsObserver:(id)arg0 ;


@end


#endif