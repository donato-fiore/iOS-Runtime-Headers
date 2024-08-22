// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIMYACCOUNTSPECIFIER_H
#define PSUIMYACCOUNTSPECIFIER_H

@class PSSpecifier, CTXPCServiceSubscriptionContext, PSListController, Logger, UINavigationController;


#import "PSUICarrierSpaceMyAccountWebViewController.h"

@interface PSUIMyAccountSpecifier : PSSpecifier

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) Logger *logger; // ivar: _logger
@property (retain, nonatomic) PSUICarrierSpaceMyAccountWebViewController *myAccountWebViewController; // ivar: _myAccountWebViewController
@property (retain, nonatomic) UINavigationController *navCon; // ivar: _navCon


-(id)getLogger;
-(id)initWithContext:(id)arg0 cbCache:(id)arg1 ;
-(void)launchMyAccountInSafari:(id)arg0 ;
-(void)launchMyAccountInWebView:(id)arg0 ;


@end


#endif