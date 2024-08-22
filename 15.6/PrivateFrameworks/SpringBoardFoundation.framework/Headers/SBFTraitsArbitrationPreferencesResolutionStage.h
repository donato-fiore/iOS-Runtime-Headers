// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSARBITRATIONPREFERENCESRESOLUTIONSTAGE_H
#define SBFTRAITSARBITRATIONPREFERENCESRESOLUTIONSTAGE_H

@class NSMutableArray, NSString, NSArray;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBFTraitsPreferencesTree.h"
#import "SBFTraitsArbiter.h"

@interface SBFTraitsArbitrationPreferencesResolutionStage : NSObject <BSDescriptionProviding>

 {
    NSMutableArray *_resolutionPolicySpecifiers;
    NSMutableArray *_nodesSpecsSpecifiers;
    NSMutableArray *_treeSolvers;
    SBFTraitsPreferencesTree *_stagePreferencesTree;
    id<BSInvalidatable> *_stateDumpHandle;
}


@property (readonly, weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *participantsRoles; // ivar: _participantsRoles
@property (readonly, nonatomic) NSInteger preferencesType; // ivar: _preferencesType
@property (readonly) Class superclass;


-(id)_setupStateDump;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithParticipantsRoles:(id)arg0 preferencesType:(NSInteger)arg1 arbiter:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addStageComponent:(id)arg0 toArray:(id)arg1 update:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_removeComponent:(id)arg0 fromArray:(id)arg1 update:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)addNodesSpecificationsSpecifier:(id)arg0 ;
-(void)addResolutionPolicySpecifier:(id)arg0 ;
-(void)addResolutionPolicySpecifier:(id)arg0 animate:(BOOL)arg1 ;
-(void)addResolutionPolicySpecifier:(id)arg0 update:(BOOL)arg1 ;
-(void)addTreeSolver:(id)arg0 ;
-(void)dealloc;
-(void)removeNodesSpecificationsSpecifier:(id)arg0 ;
-(void)removeResolutionPolicySpecifier:(id)arg0 ;
-(void)removeResolutionPolicySpecifier:(id)arg0 animate:(BOOL)arg1 ;
-(void)removeResolutionPolicySpecifier:(id)arg0 update:(BOOL)arg1 ;
-(void)removeTreeSolver:(id)arg0 ;
-(void)updateResolutionWithContext:(id)arg0 ;


@end


#endif