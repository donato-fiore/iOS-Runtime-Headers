// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIEVENTDEFERRINGMANAGER_H
#define _UIEVENTDEFERRINGMANAGER_H

@class NSMutableDictionary, NSMapTable, NSCountedSet, NSString, UIScene<_UISceneUIWindowHosting>;
@protocol _UISceneComponentProviding, _UIEventDeferringEnvironmentTargetProviding, BSDebugDescriptionProviding, _UIEventDeferringRuleOwning, BSInvalidatable, _UIEventDeferringBehavior;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface _UIEventDeferringManager : NSObject <_UISceneComponentProviding, _UIEventDeferringEnvironmentTargetProviding, BSDebugDescriptionProviding, _UIEventDeferringRuleOwning>

 {
    NSUInteger _currentState;
    NSMutableDictionary *_localDeferringRecordsByEnvironment;
    NSMutableDictionary *_remoteDeferringRecordStacksByEnvironment;
    NSMapTable *_targetWindowProvidersByEnvironment;
    NSMutableDictionary *_trackedLocalTargetWindowPointersByEnvironment;
    NSCountedSet *_localTargetWindowPointersUnderObservation;
    NSString *_previousExternalScreenIdentifier;
    id<BSInvalidatable> *_stateCaptureToken;
    ? _deferringManagerFlags;
    id<BSInvalidatable> *_transactionAssertion;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) NSObject<_UIEventDeferringBehavior> *behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIScene<_UISceneUIWindowHosting> *windowHostingScene;


+(id)systemShellBehaviorDelegate;
+(void)setSystemShellBehaviorDelegate:(id)arg0 ;
-(NSInteger)interfaceElementCategory;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)localEventDeferringTargetWindowForEnvironment:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_localTargetWindowDidAttachContext:(id)arg0 ;
-(void)_localTargetWindowDidDetachContext:(id)arg0 ;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_screenUniqueIdDidChange:(id)arg0 ;
-(void)_screenUniqueIdWillChange:(id)arg0 ;
-(void)dealloc;
-(void)setNeedsRemoteEventDeferringRuleComparisonInEnvironments:(id)arg0 forBehaviorDelegate:(id)arg1 withReason:(id)arg2 ;


@end


#endif