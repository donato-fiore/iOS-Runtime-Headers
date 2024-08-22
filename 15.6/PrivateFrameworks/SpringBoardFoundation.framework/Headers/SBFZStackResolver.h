// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFZSTACKRESOLVER_H
#define SBFZSTACKRESOLVER_H

@class NSString, NSMutableArray;
@protocol BSDescriptionProviding, SBFZStackResolverObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFZStackResolver : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBFZStackResolverObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (retain, nonatomic) NSObject<BSInvalidatable> *stateCaptureHandle; // ivar: _stateCaptureHandle
@property (readonly) Class superclass;


-(id)_registeredParticipants;
-(id)acquireParticipantWithIdentifier:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_registerParticipant:(id)arg0 ;
-(void)_resolveActivationStateOfSortedParticipants:(id)arg0 changedParticipantHandler:(id)arg1 ;
-(void)_resolveHomeAffordanceDrawingSuppressionOfSortedParticipants:(id)arg0 changedParticipantHandler:(id)arg1 ;
-(void)_resolveHomeGestureOwnershipOfSortedParticipants:(id)arg0 changedParticipantHandler:(id)arg1 ;
-(void)_setNeedsUpdateFromParticipant:(id)arg0 ;
-(void)_unregisterParticipant:(id)arg0 ;
-(void)_updateResolutionsSkippingDelegateCallbackForParticipant:(id)arg0 ;
-(void)dealloc;


@end


#endif