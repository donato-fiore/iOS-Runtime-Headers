// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTUREPARTICIPANT_H
#define SBHOMEGESTUREPARTICIPANT_H

@class NSString, NSIndexSet;
@protocol BSDescriptionProviding, SBHomeGestureParticipantDelegate;

#import <Foundation/Foundation.h>

#import "SBHomeGestureArbiter.h"

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding>



@property (weak, nonatomic) SBHomeGestureArbiter *arbiter; // ivar: _arbiter
@property (nonatomic) BOOL canShareOwnershipWithNextParticipant; // ivar: _canShareOwnershipWithNextParticipant
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeGestureParticipantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeAffordanceSuppression; // ivar: _homeAffordanceSuppression
@property (nonatomic) NSInteger identifier; // ivar: _identifier
@property (nonatomic) BOOL ownsHomeGesture; // ivar: _ownsHomeGesture
@property (nonatomic) NSInteger resolvedHomeAffordanceSuppression; // ivar: _resolvedHomeAffordanceSuppression
@property (readonly) Class superclass;
@property (copy, nonatomic) NSIndexSet *trumpsAdditionalIdentifiers; // ivar: _trumpsAdditionalIdentifiers


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif