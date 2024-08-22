// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSFOOTERVIEW_H
#define PKPASSFOOTERVIEW_H

@class UIView, PKPaymentSessionHandle, NSString;
@protocol PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, STSSessionDelegate, OS_dispatch_source, OS_dispatch_group, PKPassFooterViewDelegate;


#import "PKPassFooterContentView.h"
#import "PKPassFooterViewConfiguration.h"

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, STSSessionDelegate>

 {
    PKPassFooterContentView *_contentView;
    PKPassFooterContentView *_fadingContentView;
    BOOL _fadingContentViewNeedsDidHide;
    NSObject<OS_dispatch_source> *_sessionStartTimer;
    BOOL _isBackgrounded;
    BOOL _isAssistantActive;
    BOOL _acquiringSession;
    NSUInteger _sessionToken;
    NSObject<OS_dispatch_group> *_sessionDelayGroup;
    PKPaymentSessionHandle *_sessionHandle;
    BOOL _invalidated;
    unsigned char _visibility;
    unsigned char _contentViewVisibility;
}


@property (readonly, nonatomic) NSInteger coachingState; // ivar: _coachingState
@property (readonly, nonatomic) PKPassFooterViewConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired; // ivar: _physicalButtonRequired
@property (readonly, nonatomic) BOOL requestPileSuppression;
@property (readonly) Class superclass;


-(BOOL)_canApplyContentViewForPersonalizedApplication;
-(BOOL)_canApplyContentViewForValueAddedService;
-(BOOL)isPassFooterContentViewInGroup:(id)arg0 ;
-(BOOL)isViewCurrentContentView:(id)arg0 ;
-(BOOL)passFooterContentViewShouldAuthenticate:(id)arg0 ;
-(NSInteger)_acquireContactlessInterfaceSessionErrorActionForError:(id)arg0 ;
-(NSUInteger)suppressedContentForContentView:(id)arg0 ;
-(id)_messageContentViewFromMessage:(id)arg0 ;
-(id)_messageForPaymentApplicationState;
-(id)_messageForPeerPaymentLockedByOwner;
-(id)_messageForPeerPaymentZeroBalance;
-(id)_messageForRestrictedState;
-(id)_messageForUnavailableState;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_acquireContactlessInterfaceSessionWithSessionToken:(NSUInteger)arg0 shouldForceSessionAcquisition:(BOOL)arg1 handler:(id)arg2 ;
-(void)_advanceContentViewVisibilityToState:(unsigned char)arg0 animated:(BOOL)arg1 ;
-(void)_advanceVisibilityToState:(unsigned char)arg0 animated:(BOOL)arg1 ;
-(void)_commitContentViewAnimated:(BOOL)arg0 ;
-(void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg0 ;
-(void)_configureForValueAddedServiceWithContext:(id)arg0 ;
-(void)_configureWithConfiguration:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(void)_endSession;
-(void)_endSessionStartTimer;
-(void)_lostModeButtonTapped;
-(void)_setContentView:(id)arg0 animated:(BOOL)arg1 ;
// -(void)_startContactlessInterfaceSessionWithContext:(id)arg0 shouldForceSessionAcquisition:(BOOL)arg1 sessionAvailable:(id)arg2 sessionUnavailable:(unk)arg3  ;
-(void)_updateForForegroundActivePresentationIfNecessaryAnimated:(BOOL)arg0 ;
-(void)_updateForNonForegroundActivePresentationAnimated:(BOOL)arg0 ;
-(void)configureWithConfiguration:(id)arg0 context:(id)arg1 options:(struct ? )arg2 ;
-(void)dealloc;
-(void)didBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateDeactivationReasons:(unsigned int)arg1 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)passFooterContentView:(id)arg0 didAuthorizeAndRetrieveDecryptedBarcode:(id)arg1 ;
-(void)passFooterContentViewDidAuthenticate:(id)arg0 ;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg0 ;
-(void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)arg0 ;
-(void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg0 ;
-(void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)arg0 ;
-(void)passFooterContentViewDidTransact:(id)arg0 ;
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg0 ;
-(void)showFullScreenBarcode;
-(void)willBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg0 ;


@end


#endif