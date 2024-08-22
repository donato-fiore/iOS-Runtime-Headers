// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENEKEYBOARDPROXYLAYERFORWARDINGMANAGER_H
#define _UISCENEKEYBOARDPROXYLAYERFORWARDINGMANAGER_H

@class NSMapTable, FBSSceneClientSettingsDiffInspector, NSString;
@protocol FBSceneObserver;

#import <Foundation/Foundation.h>


@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver>

 {
    NSMapTable *_mapSceneToKeyboardForwardingStateMachine;
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsForwardingKeyboardLayers;
+(id)new;
+(id)sharedInstance;
-(id)_init;
-(id)_newStateMachineWithScene:(id)arg0 ;
-(id)_stateMachineForScene:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updateKeyboardLayersForScene:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)scene:(id)arg0 willPrioritizePresenter:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)trackScene:(id)arg0 ;


@end


#endif