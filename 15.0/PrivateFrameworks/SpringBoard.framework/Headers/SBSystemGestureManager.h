// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMGESTUREMANAGER_H
#define SBSYSTEMGESTUREMANAGER_H

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, UIGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBIndirectTouchLifecycleMonitor.h"

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>

 {
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    UIGestureRecognizer *_stylusPriorityRecognizer;
}


@property (readonly, nonatomic, getter=isAnyTouchGestureRunning) BOOL anyTouchGestureRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *gesturesPreventedByStylus; // ivar: _gesturesPreventedByStylus
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor; // ivar: _indirectTouchLifecycleMonitor
@property (readonly) Class superclass;
@property (nonatomic, getter=areSystemGesturesDisabledForAccessibility) BOOL systemGesturesDisabledForAccessibility; // ivar: _systemGesturesDisabledForAccessibility


+(id)mainDisplayManager;
-(BOOL)_isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)_isTouchGestureWithType:(NSUInteger)arg0 ;
-(BOOL)_shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(NSInteger)_recognitionEventForTouchGestureType:(NSUInteger)arg0 ;
-(id)_initWithDisplayIdentity:(id)arg0 ;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg0 exceptSystemGestureTypes:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)windowForSystemGestures;
-(void)_disableSystemGesture:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)_enableSystemGesture:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)_evaluateEnablement;
-(void)_systemGestureChanged:(id)arg0 ;
-(void)addGestureRecognizer:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)gestureRecognizerOfType:(NSUInteger)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)gestureRecognizerOfType:(NSUInteger)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)arg0 ;
-(void)removeGestureRecognizer:(id)arg0 ;


@end


#endif