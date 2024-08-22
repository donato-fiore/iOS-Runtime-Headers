// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIEVENTDEFERRINGBEHAVIOR_DEFAULT_H
#define _UIEVENTDEFERRINGBEHAVIOR_DEFAULT_H

@class NSString;
@protocol _UIEventDeferringBehaviorInternal, _UIEventDeferringSystemShellBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "_UIEventDeferringManager.h"

@interface _UIEventDeferringBehavior_Default : NSObject <_UIEventDeferringBehaviorInternal>

 {
    ? _behaviorFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) _UIEventDeferringManager *eventDeferringManager; // ivar: _eventDeferringManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_UIEventDeferringSystemShellBehaviorDelegate> *systemShellBehaviorDelegate; // ivar: _systemShellBehaviorDelegate
@property (nonatomic) BOOL systemShellManagesKeyboardFocus;


-(BOOL)eligibleForLocalCompatibilityRuleRemoval;
-(BOOL)shouldAllowFallbackWindowForEnvironment:(id)arg0 ;
-(BOOL)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
-(BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
-(BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
-(BOOL)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
-(BOOL)shouldSuppressRemoteRuleForOwningElement:(id)arg0 inEnvironment:(id)arg1 ;
-(BOOL)wantsLocalCompatibilityRules;
-(BOOL)wantsLocalIdealRules;
-(NSInteger)compareRemoteRuleOwningElement:(id)arg0 toElement:(id)arg1 inEnvironment:(id)arg2 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithEventDeferringManager:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif