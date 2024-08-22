// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONACTIVATECARRIEROFFER_H
#define VUIACTIONACTIVATECARRIEROFFER_H

@class NSDictionary, NSString;
@protocol AMSCarrierLinkTaskDelegate;


#import "VUIAction.h"

@interface VUIActionActivateCarrierOffer : VUIAction <AMSCarrierLinkTaskDelegate>



@property (retain, nonatomic) NSDictionary *additionalParams; // ivar: _additionalParams
@property (retain, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *linkParams; // ivar: _linkParams
@property (retain, nonatomic) NSString *notificationBody; // ivar: _notificationBody
@property (retain, nonatomic) NSString *notificationTitle; // ivar: _notificationTitle
@property (retain, nonatomic) NSString *productCode; // ivar: _productCode
@property (readonly) Class superclass;


-(BOOL)isAccountRequired;
-(id)_configurePreflightManager;
-(id)initWithContextData:(id)arg0 ;
-(void)_activateOfferWithCompletionHandler:(id)arg0 ;
-(void)_handleActivationSuccessWithCompletionHandler:(id)arg0 ;
-(void)_notifyDidEndActivationWithError:(id)arg0 ;
-(void)_notifyDidStartActivation;
-(void)_showUIConfirmationForSubTransactionWithCompletion:(id)arg0 ;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 completion:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif