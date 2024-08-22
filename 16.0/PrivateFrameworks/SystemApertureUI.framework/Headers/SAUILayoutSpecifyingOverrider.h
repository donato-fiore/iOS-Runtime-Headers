// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUILAYOUTSPECIFYINGOVERRIDER_H
#define SAUILAYOUTSPECIFYINGOVERRIDER_H

@class NSPointerArray, NSString, NSArray;
@protocol SAUILayoutSpecifyingOverridingParticipant, SAUILayoutSpecifyingOverriding, SAUILayoutHosting, SAUILayoutModePreferring, SAUILayoutSpecifying;

#import <Foundation/Foundation.h>

#import "SAUIPreferredLayoutModeAssertion.h"

@interface SAUILayoutSpecifyingOverrider : NSObject <SAUILayoutSpecifyingOverridingParticipant, SAUILayoutSpecifyingOverriding>

 {
    NSPointerArray *_orderedBehaviorOverridingParticipants;
}


@property (readonly, nonatomic) NSInteger behaviorOverridingRole;
@property (readonly, weak, nonatomic) id *behaviorOverridingTarget; // ivar: _behaviorOverridingTarget
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost;
@property (readonly, nonatomic) NSInteger layoutMode;
@property (readonly, nonatomic) NSObject<SAUILayoutModePreferring> *layoutModePreference;
@property (readonly, weak, nonatomic) NSObject<SAUILayoutSpecifying> *layoutSpecifyingOverridingTarget;
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (readonly, copy, nonatomic) NSArray *preferredLayoutModeAssertions;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly) Class superclass;


-(BOOL)isInteractiveDismissalEnabledForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(BOOL)isMinimalPresentationPossibleForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(BOOL)isProvidedViewConcentric:(id)arg0 inLayoutMode:(NSInteger)arg1 ;
-(BOOL)isProvidedViewConcentric:(id)arg0 inLayoutMode:(NSInteger)arg1 forTargetWithOverrider:(id)arg2 isDefaultValue:(*BOOL)arg3 ;
-(BOOL)isRequestingMenuPresentationForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)layoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)maximumSupportedLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)minimumSupportedLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(NSInteger)preferredLayoutModeForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)_behaviorOverridingParticipantSubordinate:(BOOL)arg0 toParticipant:(id)arg1 passingTest:(id)arg2 ;
-(id)_firstParticipantThatRespondsToSelector:(SEL)arg0 ;
-(id)behaviorOverridingParticipantSubordinateToParticipant:(id)arg0 ;
-(id)behaviorOverridingParticipantSuperiorToParticipant:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)layoutModePreferenceForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(id)layoutSpecifyingOverridingParticipantSubordinateToParticipant:(id)arg0 thatRespondsToSelector:(SEL)arg1 ;
-(id)layoutSpecifyingOverridingParticipantSuperiorToParticipant:(id)arg0 thatRespondsToSelector:(SEL)arg1 ;
-(id)preferredLayoutModeAssertionForTargetWithOverrider:(id)arg0 isDefaultValue:(*BOOL)arg1 ;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(*BOOL)arg4 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 forTargetWithOverrider:(id)arg3 isDefaultValue:(*BOOL)arg4 ;
-(void)addBehaviorOverridingParticipant:(id)arg0 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 ;
-(void)layoutHostContainerViewDidLayoutSubviews:(id)arg0 forTargetWithOverrider:(id)arg1 ;
-(void)layoutHostContainerViewWillLayoutSubviews:(id)arg0 ;
-(void)layoutHostContainerViewWillLayoutSubviews:(id)arg0 forTargetWithOverrider:(id)arg1 ;
-(void)removeBehaviorOverridingParticipant:(id)arg0 ;
-(void)removeBehaviorOverridingParticipantWithRole:(NSInteger)arg0 ;


@end


#endif