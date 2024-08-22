// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBBUYACTION_H
#define AMSUIWEBBUYACTION_H

@class ACAccount, NSString, NSDictionary;
@protocol AMSPurchaseDelegate, AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebBuyAction : AMSUIWebAction <AMSPurchaseDelegate, AMSUIWebActionRunnable>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL legacyBuy; // ivar: _legacyBuy
@property (nonatomic) BOOL makeCurrentAccount; // ivar: _makeCurrentAccount
@property (retain, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (nonatomic) BOOL requiresAccount; // ivar: _requiresAccount
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_purchasePluginIdentifierForContentType:(id)arg0 ;
-(id)_runBuy;
-(id)_runBuyWithContentType:(id)arg0 ;
-(id)_runLegacyBuy;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)purchaseContentWithType:(id)arg0 ;
-(id)runAction;
-(void)_makeCurrentAccountIfNeeded:(id)arg0 ;
-(void)purchase:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif