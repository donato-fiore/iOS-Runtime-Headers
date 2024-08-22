// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBZSTACKAUDITOR_H
#define SBZSTACKAUDITOR_H

@class NSString, NSArray, NSTimer;
@protocol SBHomeGestureArbiterObserver, SBFZStackResolverObserver, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBZStackAuditor : NSObject <SBHomeGestureArbiterObserver, SBFZStackResolverObserver, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *latestHomeGestureParticipantRecords; // ivar: _latestHomeGestureParticipantRecords
@property (retain, nonatomic) NSArray *latestZStackParticipantRecords; // ivar: _latestZStackParticipantRecords
@property (weak, nonatomic) NSTimer *participantUpdateRecheckTimer; // ivar: _participantUpdateRecheckTimer
@property (readonly, nonatomic) BOOL shouldAuditHomeAffordanceSuppression; // ivar: _shouldAuditHomeAffordanceSuppression
@property (readonly) Class superclass;


-(id)_checkParticipantUpdateRecords;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithHomeGestureArbiter:(id)arg0 zStackResolver:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_recheckParticipantsComparingToOriginalError:(id)arg0 ;
-(void)_startAuditingPassForParticipantUpdates;
-(void)homeGestureArbiterDidUpdateParticipants:(id)arg0 ;
-(void)zStackResolverDidUpdateParticipants:(id)arg0 ;


@end


#endif