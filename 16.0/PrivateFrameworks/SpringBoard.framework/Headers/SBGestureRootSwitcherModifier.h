// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBGESTUREROOTSWITCHERMODIFIER_H
#define SBGESTUREROOTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_transitionModifierBeforeHandlingEvent;
    SBSwitcherModifier *_gestureModifierBeforeHandlingEvent;
}


@property (readonly, nonatomic) BOOL canTransitionWithoutGestureModifier;
@property (readonly, nonatomic) NSInteger currentEnvironmentMode; // ivar: _currentEnvironmentMode
@property (readonly, nonatomic) SBAppLayout *selectedAppLayout; // ivar: _selectedAppLayout
@property (readonly, nonatomic) SBSwitcherModifier *transitionModifier;


-(BOOL)completesWhenChildrenComplete;
-(NSInteger)gestureType;
-(id)_gestureModifier;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif