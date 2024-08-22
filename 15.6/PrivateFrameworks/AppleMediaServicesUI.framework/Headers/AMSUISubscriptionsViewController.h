// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUISUBSCRIPTIONSVIEWCONTROLLER_H
#define AMSUISUBSCRIPTIONSVIEWCONTROLLER_H

@class UIViewController, ACAccount, AMSProcessInfo, NSString, NSDictionary;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSUIWebViewController.h"

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (retain, nonatomic) NSString *subscriptionType; // ivar: _subscriptionType
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSUIWebViewController *webViewController; // ivar: _webViewController


+(id)createBagForSubProfile;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 clientInfo:(id)arg2 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)_setup;
-(void)_setupChildViewController;
-(void)_setupLayout;
-(void)_startLoading;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif