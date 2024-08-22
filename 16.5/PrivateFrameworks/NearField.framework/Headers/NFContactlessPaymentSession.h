// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFCONTACTLESSPAYMENTSESSION_H
#define NFCONTACTLESSPAYMENTSESSION_H

@class NSDictionary, NSString;
@protocol NFContactlessPaymentSessionCallbacks, NFContactlessPaymentSessionDelegate;


#import "NFSession.h"
#import "NFApplet.h"

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks>

 {
    NSDictionary *_appletsById;
    id<NFContactlessPaymentSessionDelegate> *_delegate;
    NSUInteger _numActiveSEs;
    BOOL _fieldNotificationSent;
}


@property (readonly, retain) NFApplet *activeApplet; // ivar: _activeApplet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NFApplet *defaultApplet; // ivar: _defaultApplet
@property NSObject<NFContactlessPaymentSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger numberOfActiveSecureElements;
@property (readonly) Class superclass;


-(BOOL)setActivePaymentApplet:(id)arg0 authorization:(id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(BOOL)setActivePaymentApplet:(id)arg0 makeDefault:(BOOL)arg1 authorization:(id)arg2 ;
-(BOOL)startCardEmulationWithAuthorization:(id)arg0 ;
-(BOOL)startCardEmulationWithAuthorization:(id)arg0 error:(*id)arg1 ;
-(BOOL)startDeferredCardEmulationWithAuthorization:(id)arg0 ;
-(BOOL)startDeferredCardEmulationWithAuthorization:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopCardEmulation;
-(BOOL)stopCardEmulation:(*id)arg0 ;
-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(id)felicaAppletState:(id)arg0 ;
-(id)felicaAppletState:(id)arg0 error:(*id)arg1 ;
-(id)transitAppletState:(id)arg0 error:(*id)arg1 ;
-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndTransaction:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didExpireTransactionForApplet:(id)arg0 ;
-(void)didExpressModeStateChange:(unsigned int)arg0 withObject:(id)arg1 ;
-(void)didFailDeferredAuthorization;
-(void)didFelicaStateChange:(id)arg0 ;
-(void)didReceiveActivityTimeout:(id)arg0 ;
-(void)didReceivePendingServerRequest;
-(void)didSelectApplet:(id)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)didStartTransaction:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithCompletion:(id)arg0 ;


@end


#endif