// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNBANNERCONTROLLER_H
#define BNBANNERCONTROLLER_H

@class NSMapTable, NSTimer, NSString;
@protocol BNPostingPrivate, BNConsideringDelegate, BNPosting, BNSuspendable, BNConsidering, BNPending, BNPresenting;

#import <Foundation/Foundation.h>


@interface BNBannerController : NSObject <BNPostingPrivate, BNConsideringDelegate, BNPosting, BNSuspendable>

 {
    NSMapTable *_presentablesInducingSuspensionToSuspendedRequesterIDs;
    ? _bannerAuthorityFlags;
}


@property (readonly, nonatomic) NSObject<BNConsidering> *authority; // ivar: _authority
@property (retain, nonatomic, getter=_autoDequeueTimer, setter=_setAutoDequeueTimer:) NSTimer *autoDequeueTimer; // ivar: _autoDequeueTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNPending> *pender; // ivar: _pender
@property (readonly, nonatomic) NSObject<BNPresenting> *presenter; // ivar: _presenter
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_isSuspended;
-(BOOL)_presentNextPendingPresentableIfPossible;
-(BOOL)_presentNextPendingPresentableIfPossible:(*id)arg0 ;
-(BOOL)_presentPresentableWithContext:(id)arg0 ;
-(BOOL)_shouldPostPresentable:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldPresentPresentable:(id)arg0 withPresentedPresentables:(id)arg1 responsiblePresentable:(*id)arg2 ;
-(BOOL)postPresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)revokeAllPresentablesWithRequesterIdentifier:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg0 requesterIdentifier:(id)arg1 reason:(id)arg2 options:(NSUInteger)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(*id)arg6 ;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg0 requesterIdentifier:(id)arg1 reason:(id)arg2 options:(NSUInteger)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(BOOL)setSuspended:(BOOL)arg0 forReason:(id)arg1 revokingCurrent:(BOOL)arg2 error:(*id)arg3 ;
-(id)_activeSuspensionReasons;
-(id)_revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 animated:(id)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)_suspensionReasonForEnqueuedPresentable:(id)arg0 ;
-(id)initWithAuthority:(id)arg0 pender:(id)arg1 presenter:(id)arg2 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(void)_cancelAutoDequeueTimer;
-(void)_resumeForResponsiblePresentableIfNecessary:(id)arg0 ;
-(void)_resumeForResponsiblePresentableIfNecessaryWithIdentification:(id)arg0 ;
-(void)_startAutoDequeueTimerIfNecessary;
-(void)_suspendPenderForRequesterIdentifier:(id)arg0 withResponsiblePresentable:(id)arg1 ;
-(void)bannerAuthority:(id)arg0 mayChangeDecisionForResponsiblePresentable:(id)arg1 ;


@end


#endif