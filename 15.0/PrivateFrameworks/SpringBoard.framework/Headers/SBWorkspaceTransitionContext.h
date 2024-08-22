// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACETRANSITIONCONTEXT_H
#define SBWORKSPACETRANSITIONCONTEXT_H

@class NSMutableDictionary, NSMutableArray, BSAnimationSettings, NSString, NSSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBWorkspaceTransitionRequest.h"

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding>

 {
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    NSMutableArray *_finalizeBlocks;
}


@property (nonatomic) BOOL animationDisabled; // ivar: _animationDisabled
@property (retain, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *entities;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *previousEntities;
@property (weak, nonatomic) SBWorkspaceTransitionRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(id)context;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)entityForIdentifier:(id)arg0 ;
-(id)entityForKey:(id)arg0 ;
-(id)init;
-(id)previousEntityForIdentifier:(id)arg0 ;
-(id)previousEntityForKey:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addFinalizeBlock:(id)arg0 ;
-(void)finalize;
-(void)setEntity:(id)arg0 forKey:(id)arg1 ;
-(void)setPreviousEntity:(id)arg0 forKey:(id)arg1 ;


@end


#endif