// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICARRIERSPACEGROUP_H
#define PSUICARRIERSPACEGROUP_H

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, Logger, NSDictionary, CTCarrierSpaceCapabilities, NSString, PSSpecifier, PSListController, RemoteUIController;
@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>

#import "PSUICarrierSpaceOptInSplashScreen.h"

@interface PSUICarrierSpaceGroup : NSObject <RemoteUIControllerDelegate>

 {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CoreTelephonyClient *_ctClient;
    Logger *_logger;
    NSDictionary *_specifersByID;
    BOOL _isSubscriptionDataPreferred;
}


@property (retain, nonatomic) CTCarrierSpaceCapabilities *capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (retain, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen; // ivar: _optInSplashScreen
@property (weak, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (retain, nonatomic) RemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (readonly) Class superclass;


-(id)carrierServicesSpecifier;
-(id)cellularPlansSpecifier;
-(id)descriptionForPlans:(id)arg0 ;
-(id)descriptionForUsage:(id)arg0 ;
-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 parentSpecifier:(id)arg2 ctClient:(id)arg3 ;
-(id)specifierForID:(id)arg0 ;
-(id)usageSpecifier;
-(void)agreePressed;
-(void)carrierSpaceChanged;
-(void)disagreeOrCancelPressed;
-(void)newCarrierNotification;
-(void)openURLWithSpecifier:(id)arg0 ;
-(void)prepareSpecifiers;
-(void)refreshSpecifiers;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)setIsSubscriptionDataPreferred;
-(void)showConsentFlow:(id)arg0 ;
-(void)showTermsAndConditions:(id)arg0 consentFlowInfo:(id)arg1 ;


@end


#endif